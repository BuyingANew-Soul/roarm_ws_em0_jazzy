# RoARM-M2-S — ROS 2 Jazzy Port

> Port of the [WaveShare RoARM-M2-S](https://www.waveshare.com/roarm-m2-s.htm) robotic arm stack from ROS 2 Humble to **ROS 2 Jazzy** (Ubuntu 24.04 Noble).  
> Includes MoveIt 2 motion planning, ros2_control simulation, IKFast kinematics plugin, and Docker-based deployment for Jetson Orin Nano.

---

## Table of contents

- [What was ported](#what-was-ported)
- [System requirements](#system-requirements)
- [Repository structure](#repository-structure)
- [Quick start — desktop simulation](#quick-start--desktop-simulation)
- [Running on Raspberry Pi 5](#running-on-raspberry-pi-5)
- [Running on Jetson Orin Nano (Docker)](#running-on-jetson-orin-nano-docker)
- [Connecting the real arm](#connecting-the-real-arm)
- [Namespace design](#namespace-design)
- [Known issues and fixes applied](#known-issues-and-fixes-applied)
- [Architecture overview](#architecture-overview)
- [Roadmap](#roadmap)

---

## What was ported

The original repository targets ROS 2 Humble. This branch (`jazzy-port`) makes the following changes to run on ROS 2 Jazzy:

| Area | Change |
|------|--------|
| IKFast plugin | Updated `#include` headers from `.h` to `.hpp` (Jazzy moveit_core header rename) |
| IKFast CMakeLists | Removed `ament_export_targets` — pluginlib plugins must not export cmake targets or they pollute `LD_LIBRARY_PATH` and cause a `get_lifecycle_id` symbol crash in `libcontroller_manager.so` |
| `ros2_controllers.yaml` | Replaced deprecated `open_loop_control` with `interpolate_from_desired_state`; enabled `has_acceleration_limits` on all joints (required by Jazzy's `AddTimeOptimalParameterization`) |
| `joint_limits.yaml` | Set `has_acceleration_limits: true` for all joints |
| `moveit_controllers.yaml` | Fixed `gripper_controller` `action_ns` from `gripper_cmd` → `follow_joint_trajectory` |
| `demo.launch.py` | Fully expanded from one-liner to explicit node list; added `/roarm/*` namespace remappings throughout |
| `roarm_driver.py` | Changed all subscriptions to absolute `/roarm/*` topic names; added guard clause against non-roarm joint state messages (prevents crash when Leo Rover joint states are on the same network) |
| `moveit_servo` | Removed bundled Humble-era package — use system `ros-jazzy-moveit-servo` instead |
| `roarm_moveit_cmd` | Removed — needs separate porting, not required for basic operation |

---

## System requirements

### Desktop (simulation + MoveIt + RViz)
- Ubuntu 24.04 Noble
- ROS 2 Jazzy full desktop install

```bash
sudo apt install \
  ros-jazzy-moveit \
  ros-jazzy-ros2-control \
  ros-jazzy-ros2-controllers \
  ros-jazzy-joint-state-publisher \
  ros-jazzy-robot-state-publisher
```

### Raspberry Pi 5 (robot computer — native)
- Ubuntu 24.04 Noble
- ROS 2 Jazzy base install
- No Docker needed — RPi5 runs Ubuntu 24 natively

```bash
sudo apt install \
  ros-jazzy-ros2-control \
  ros-jazzy-ros2-controllers \
  ros-jazzy-joint-state-publisher \
  ros-jazzy-robot-state-publisher \
  python3-serial
```

### Jetson Orin Nano (alternative robot computer — Docker)
- JetPack / Ubuntu 22.04 (does not natively support Jazzy)
- Docker + Docker Compose
- The provided Docker container runs ROS 2 Jazzy inside Ubuntu 22.04

---

## Repository structure

```
roarm_ws_em0_jazzy/
├── docker/                             # Docker files for Jetson Orin Nano only
│   ├── Dockerfile
│   ├── docker-compose.yml
│   ├── entrypoint.sh
│   ├── build_image.sh
│   └── run_container.sh
└── src/
    └── roarm_main/
        ├── roarm_description/          # URDF, meshes, inertials
        ├── roarm_driver/               # Python driver node + safety executor
        │   └── roarm_driver/
        │       ├── roarm_driver.py     # Serial → ROS 2 bridge
        │       ├── safety_executor.py  # Hardware-level safety watchdog
        │       └── heartbeat_publisher.py
        ├── roarm_moveit/               # MoveIt 2 config, launch files
        │   ├── config/
        │   │   ├── ros2_controllers.yaml
        │   │   ├── joint_limits.yaml
        │   │   ├── moveit_controllers.yaml
        │   │   ├── kinematics.yaml
        │   │   └── roarm_description.ros2_control.xacro
        │   └── launch/
        │       └── demo.launch.py      # Main launch — all nodes + /roarm/* namespace
        └── roarm_moveit_ikfast_plugins/ # IKFast kinematics plugin (Jazzy-patched)
```

---

## Quick start — desktop simulation

```bash
# 1. Clone and enter workspace
git clone <your-fork-url> ~/roarm_ws
cd ~/roarm_ws
git checkout jazzy-port

# 2. Source ROS 2 Jazzy only — do NOT have any other ROS distro sourced
source /opt/ros/jazzy/setup.bash

# 3. Build
colcon build --symlink-install
source install/setup.bash

# 4. Launch MoveIt + RViz simulation
ros2 launch roarm_moveit demo.launch.py
```

RViz opens with the MoveIt MotionPlanning panel. Drag the blue end-effector marker to set a goal, click **Plan**, then **Execute**. The arm moves in simulation.

**Verify topics are correctly namespaced:**
```bash
ros2 topic list | grep roarm
# Expected:
# /roarm/joint_states
# /roarm/robot_description
# /roarm/monitored_planning_scene
```

---

## Running on Raspberry Pi 5

The RPi5 runs Ubuntu 24.04 and ROS 2 Jazzy natively — no Docker required.

```bash
# 1. Clone the repo on the RPi5
git clone <your-fork-url> ~/roarm_ws
cd ~/roarm_ws
git checkout jazzy-port

# 2. Source ROS 2 Jazzy
source /opt/ros/jazzy/setup.bash

# 3. Build only the packages needed on the robot side
#    (no MoveIt — that runs on the desktop)
colcon build --symlink-install \
  --packages-select roarm_description roarm_driver roarm_moveit_ikfast_plugins

source install/setup.bash

# 4. Run the driver node (arm must be connected via USB)
ros2 run roarm_driver roarm_driver
```

The driver subscribes to `/roarm/joint_states` published by the desktop's `joint_state_broadcaster` and forwards commands to the arm over serial. Both machines must be on the same network with the same `ROS_DOMAIN_ID`.

**Serial port permissions** (run once):
```bash
sudo usermod -aG dialout $USER
# Log out and back in, or for immediate effect:
sudo chmod 666 /dev/ttyUSB0
```

**Override serial port** if the arm appears as `/dev/ttyACM0`:
```bash
ros2 run roarm_driver roarm_driver --ros-args \
  -p serial_port:=/dev/ttyACM0
```

---

## Running on Jetson Orin Nano (Docker)

The Jetson runs JetPack / Ubuntu 22.04 which does not natively support ROS 2 Jazzy. A Docker container provides the Jazzy environment.

```bash
# 1. Clone the repo on the Jetson
git clone <your-fork-url> ~/roarm_ws
cd ~/roarm_ws
git checkout jazzy-port

# 2. Build the Docker image
./docker/build_image.sh

# 3. Start the container
./docker/run_container.sh

# 4. First time only — build the workspace inside the container
docker exec -it roarm_driver bash
colcon build --symlink-install \
  --packages-select roarm_description roarm_driver roarm_moveit_ikfast_plugins
exit

# 5. Run the driver
docker exec -it roarm_driver \
  ros2 run roarm_driver roarm_driver
```

The container uses `network_mode: host` so all ROS 2 topics are visible across the LAN without any extra configuration.

**Override the serial port if needed:**
```bash
export ROARM_SERIAL_PORT=/dev/ttyACM0
./docker/run_container.sh
```

---

## Connecting the real arm

The `roarm_driver` node bridges ROS 2 joint states to the arm's serial JSON protocol. It subscribes to `/roarm/joint_states` and sends JSON commands over `/dev/ttyUSB0` at 115200 baud.

**Full workflow (desktop + RPi5 or Jetson):**

1. On the **desktop** — launch MoveIt:
   ```bash
   ros2 launch roarm_moveit demo.launch.py
   ```

2. On the **RPi5 or Jetson** — run the driver:
   ```bash
   ros2 run roarm_driver roarm_driver
   ```

3. In **RViz** — plan and execute a motion. The driver receives the resulting joint states and forwards them to the physical arm over serial.

**Topic flow:**
```
MoveIt (desktop)
  → arm_controller executes trajectory
  → joint_state_broadcaster publishes /roarm/joint_states
  → roarm_driver (RPi5/Jetson) reads /roarm/joint_states
  → sends JSON commands over /dev/ttyUSB0
  → physical servo motors move
```

---

## Namespace design

All RoARM topics use the `/roarm/` prefix. This prevents conflicts when sharing a ROS 2 network with other robots — for example a Leo Rover that publishes its own `/joint_states` for wheel odometry.

| Default topic | RoARM namespaced topic |
|---------------|------------------------|
| `/joint_states` | `/roarm/joint_states` |
| `/robot_description` | `/roarm/robot_description` |
| `/monitored_planning_scene` | `/roarm/monitored_planning_scene` |

Enforced in three places:

- **`demo.launch.py`** — explicit remappings on every node (`robot_state_publisher`, `ros2_control_node`, `move_group`, `rviz2`)
- **`ros2_controllers.yaml`** — `joint_state_broadcaster` spawner remaps `/joint_states` → `/roarm/joint_states`
- **`roarm_driver.py`** — subscribes to `/roarm/joint_states` using an absolute topic name; also contains a guard clause that silently ignores any message not containing all four RoARM joints

---

## Known issues and fixes applied

### `get_lifecycle_id` symbol crash (segfault on controller load)

**Symptom:**
```
undefined symbol: _ZNK20controller_interface23ControllerInterfaceBase16get_lifecycle_idEv
```

**Cause:** `roarm_moveit_ikfast_plugins` used `ament_export_targets` which prepended its `lib/` directory to `LD_LIBRARY_PATH`. This shadowed the system `libcontroller_interface.so` with a version missing the `get_lifecycle_id` symbol added in Jazzy.

**Fix:** Removed `ament_export_targets` and all `ament_export_dependencies` from `roarm_moveit_ikfast_plugins/CMakeLists.txt`. Pluginlib plugins are discovered via their XML description file — cmake target export is neither needed nor appropriate.

---

### `AddTimeOptimalParameterization` planning failure

**Symptom:**
```
No acceleration limit was defined for joint base_link_to_link1
```

**Fix:** Set `has_acceleration_limits: true` for all joints in `joint_limits.yaml`. Jazzy's `AddTimeOptimalParameterization` enforces this strictly; Humble silently ignored missing acceleration limits.

---

### `JointTrajectoryController` segfault on load

**Symptom:** `ros2_control_node` segfaults inside `NodeOptions::operator=` when loading the first controller.

**Cause:** The `ros2_controllers.yaml` file had been accidentally duplicated — the content appeared twice with no separator, producing malformed YAML. The parser produced null strings which were then dereferenced inside `ControllerInterfaceBase::init()`.

**Fix:** Rewrote `ros2_controllers.yaml` with clean, single-copy content.

---

### `joint_state_broadcaster` ignores `publish_joint_states_topic` yaml parameter

**Symptom:** Despite setting `publish_joint_states_topic: /roarm/joint_states` in the yaml, the broadcaster still publishes to `/joint_states`.

**Cause:** The parameter is not reliably honoured in `joint_state_broadcaster` version 4.42.2 shipped with Jazzy.

**Fix:** Added a topic remapping directly on the spawner `Node()` in `demo.launch.py`:
```python
Node(
    package="controller_manager",
    executable="spawner",
    arguments=["joint_state_broadcaster"],
    remappings=[("/joint_states", "/roarm/joint_states")],
)
```

---

### IKFast plugin `.h` → `.hpp` headers

**Symptom:** Build error — header files not found.

**Cause:** MoveIt 2 in Jazzy renamed several public headers from `.h` to `.hpp`.

**Fix:** Updated all `#include` directives in `roarm_description_hand_ikfast_moveit_plugin.cpp`.

---

### `roarm_driver` crashes with `ValueError` on Leo Rover network

**Symptom:**
```
ValueError: 'base_link_to_link1' is not in list
```

**Cause:** The Leo Rover publishes its own `/joint_states` topic for wheel odometry. The driver tried to look up RoARM joint names in a message that only contains Leo wheel joints.

**Fix:** Driver now subscribes to `/roarm/joint_states` (absolute namespaced topic) and additionally contains a guard clause that returns early if the message does not contain all four expected RoARM joint names.

---

## Architecture overview

```
┌──────────────────────────────────────────────────────────────┐
│  Desktop — Ubuntu 24.04, ROS 2 Jazzy (native)               │
│                                                              │
│  RViz2 + MoveIt2 MotionPlanning panel                       │
│  move_group  →  arm_controller  →  joint_state_broadcaster   │
│                                        │                     │
│                              /roarm/joint_states             │
└──────────────────────────────┬───────────────────────────────┘
                               │
                    ROS 2 DDS over LAN
                    (same ROS_DOMAIN_ID)
                               │
┌──────────────────────────────┴───────────────────────────────┐
│  Raspberry Pi 5 — Ubuntu 24.04, ROS 2 Jazzy (native)        │
│    OR                                                        │
│  Jetson Orin Nano — Ubuntu 22.04 + Docker (ROS 2 Jazzy)     │
│                                                              │
│  roarm_driver                                                │
│    subscribes: /roarm/joint_states                           │
│    publishes:  JSON commands over /dev/ttyUSB0               │
│                                                              │
│  safety_executor (optional but recommended)                  │
│    watchdog · joint limit guard · heartbeat monitor          │
└──────────────────────────────┬───────────────────────────────┘
                               │  /dev/ttyUSB0  115200 baud
                         RoARM-M2-S servos
```

---

## Roadmap

- [ ] Merge RoARM URDF onto Leo Rover model (unified TF tree for mobile manipulation)
- [ ] Combined RViz config — Nav2 panel + MoveIt panel in one window
- [ ] Full system launch file — Nav2 + MoveIt2 + driver + safety in one command
- [ ] Task manager node — BehaviorTree.CPP sequencing Nav2 + MoveIt2
- [ ] Object detection — YOLO + depth camera → `/detections` → grasp pose
- [ ] Safety executor integration with Leo Rover e-stop
- [ ] Port `roarm_moveit_cmd` to Jazzy

---

## Credits

Original RoARM-M2-S ROS 2 package by [WaveShare](https://github.com/waveshare/WAVE_ROVER).  
Jazzy port by nameless.