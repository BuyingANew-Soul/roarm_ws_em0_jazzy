"""
demo.launch.py — RoARM MoveIt demo with /roarm/ namespace.

All RoARM topics are published under /roarm/ so they don't conflict
with other robots on the same ROS network (e.g. Leo Rover).
"""

import os

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

from srdfdom.srdf import SRDF

from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launch_utils import (
    add_debuggable_node,
    DeclareBooleanLaunchArg,
)


def generate_launch_description():
    moveit_config = (
        MoveItConfigsBuilder("roarm_description", package_name="roarm_moveit")
        .to_moveit_configs()
    )
    package_path = moveit_config.package_path

    ld = LaunchDescription()

    # ------------------------------------------------------------------ #
    # Launch arguments
    # ------------------------------------------------------------------ #
    ld.add_action(DeclareBooleanLaunchArg(
        "db", default_value=False,
        description="Start the warehouse MongoDB database"))
    ld.add_action(DeclareBooleanLaunchArg(
        "debug", default_value=False,
        description="Run move_group under gdb"))
    ld.add_action(DeclareBooleanLaunchArg("use_rviz", default_value=True))
    ld.add_action(DeclareBooleanLaunchArg(
        "allow_trajectory_execution", default_value=True))
    ld.add_action(DeclareBooleanLaunchArg(
        "publish_monitored_planning_scene", default_value=True))
    ld.add_action(DeclareBooleanLaunchArg("monitor_dynamics", default_value=False))
    ld.add_action(DeclareLaunchArgument(
        "capabilities",
        default_value=moveit_config.move_group_capabilities["capabilities"]))
    ld.add_action(DeclareLaunchArgument(
        "disable_capabilities",
        default_value=moveit_config.move_group_capabilities["disable_capabilities"]))
    ld.add_action(DeclareLaunchArgument(
        "publish_frequency", default_value="15.0"))
    ld.add_action(DeclareLaunchArgument(
        "rviz_config",
        default_value=str(package_path / "config/moveit.rviz")))

    # ------------------------------------------------------------------ #
    # 1. Static virtual joint TFs  (world -> base_link)
    # ------------------------------------------------------------------ #
    srdf_dict = moveit_config.robot_description_semantic
    name_counter = 0
    for key, xml_contents in srdf_dict.items():
        srdf = SRDF.from_xml_string(xml_contents)
        for vj in srdf.virtual_joints:
            ld.add_action(Node(
                package="tf2_ros",
                executable="static_transform_publisher",
                name=f"static_transform_publisher{name_counter}",
                output="log",
                arguments=[
                    "--frame-id", vj.parent_frame,
                    "--child-frame-id", vj.child_link,
                ],
            ))
            name_counter += 1

    # ------------------------------------------------------------------ #
    # 2. Robot State Publisher
    # ------------------------------------------------------------------ #
    ld.add_action(Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        respawn=True,
        output="screen",
        parameters=[
            moveit_config.robot_description,
            {"publish_frequency": LaunchConfiguration("publish_frequency")},
        ],
        remappings=[
            ("robot_description", "/roarm/robot_description"),
            ("joint_states",      "/roarm/joint_states"),
        ],
    ))

    # ------------------------------------------------------------------ #
    # 3. ros2_control node
    # ------------------------------------------------------------------ #
    ld.add_action(Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[
            str(package_path / "config/ros2_controllers.yaml"),
        ],
        remappings=[
            ("/robot_description",                    "/roarm/robot_description"),
            ("/controller_manager/robot_description", "/roarm/robot_description"),
            # Remap the joint_states output at the controller_manager level too
            ("/joint_states",                         "/roarm/joint_states"),
        ],
        output="screen",
    ))

    # ------------------------------------------------------------------ #
    # 4. Controller spawners
    #    joint_state_broadcaster gets an explicit /joint_states remapping
    #    because the publish_joint_states_topic yaml param is unreliable.
    #    arm_controller and gripper_controller don't publish joint_states
    #    so they don't need the remapping.
    # ------------------------------------------------------------------ #
    controller_names = (
        moveit_config.trajectory_execution
        .get("moveit_simple_controller_manager", {})
        .get("controller_names", [])
    )

    # Trajectory controllers — no joint_states remapping needed
    for controller in controller_names:
        ld.add_action(Node(
            package="controller_manager",
            executable="spawner",
            arguments=[controller],
            output="screen",
        ))

    # joint_state_broadcaster — remap its /joint_states output
    ld.add_action(Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster"],
        remappings=[
            ("/joint_states", "/roarm/joint_states"),
        ],
        output="screen",
    ))

    # ------------------------------------------------------------------ #
    # 5. move_group
    # ------------------------------------------------------------------ #
    should_publish = LaunchConfiguration("publish_monitored_planning_scene")

    move_group_params = [
        moveit_config.to_dict(),
        {
            "publish_robot_description_semantic": True,
            "allow_trajectory_execution": LaunchConfiguration("allow_trajectory_execution"),
            "capabilities": ParameterValue(
                LaunchConfiguration("capabilities"), value_type=str),
            "disable_capabilities": ParameterValue(
                LaunchConfiguration("disable_capabilities"), value_type=str),
            "publish_planning_scene":     should_publish,
            "publish_geometry_updates":   should_publish,
            "publish_state_updates":      should_publish,
            "publish_transforms_updates": should_publish,
            "monitor_dynamics": False,
        },
    ]

    add_debuggable_node(
        ld,
        package="moveit_ros_move_group",
        executable="move_group",
        commands_file=str(package_path / "launch/gdb_settings.gdb"),
        output="screen",
        parameters=move_group_params,
        extra_debug_args=["--debug"],
        additional_env={"DISPLAY": os.environ.get("DISPLAY", "")},
        remappings=[
            ("robot_description",         "/roarm/robot_description"),
            ("joint_states",              "/roarm/joint_states"),
            ("/monitored_planning_scene", "/roarm/monitored_planning_scene"),
        ],
    )

    # ------------------------------------------------------------------ #
    # 6. RViz
    # ------------------------------------------------------------------ #
    rviz_parameters = [
        moveit_config.planning_pipelines,
        moveit_config.robot_description_kinematics,
        moveit_config.joint_limits,
        {
            "monitored_planning_scene_topic": "/roarm/monitored_planning_scene",
        },
    ]

    ld.add_action(Node(
        package="rviz2",
        executable="rviz2",
        output="log",
        respawn=False,
        arguments=["-d", LaunchConfiguration("rviz_config")],
        parameters=rviz_parameters,
        condition=IfCondition(LaunchConfiguration("use_rviz")),
        remappings=[
            ("robot_description",          "/roarm/robot_description"),
            ("joint_states",               "/roarm/joint_states"),
            ("/monitored_planning_scene",  "/roarm/monitored_planning_scene"),
        ],
    ))

    # ------------------------------------------------------------------ #
    # 7. Warehouse DB (optional, off by default)
    # ------------------------------------------------------------------ #
    ld.add_action(IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            str(package_path / "launch/warehouse_db.launch.py")),
        condition=IfCondition(LaunchConfiguration("db")),
    ))

    return ld