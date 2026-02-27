// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roarm_moveit:srv/MovePointCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roarm_moveit/srv/move_point_cmd.h"


#ifndef ROARM_MOVEIT__SRV__DETAIL__MOVE_POINT_CMD__STRUCT_H_
#define ROARM_MOVEIT__SRV__DETAIL__MOVE_POINT_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MovePointCmd in the package roarm_moveit.
typedef struct roarm_moveit__srv__MovePointCmd_Request
{
  /// 目标位置的x坐标
  double x;
  /// 目标位置的y坐标
  double y;
  /// 目标位置的z坐标
  double z;
} roarm_moveit__srv__MovePointCmd_Request;

// Struct for a sequence of roarm_moveit__srv__MovePointCmd_Request.
typedef struct roarm_moveit__srv__MovePointCmd_Request__Sequence
{
  roarm_moveit__srv__MovePointCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roarm_moveit__srv__MovePointCmd_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MovePointCmd in the package roarm_moveit.
typedef struct roarm_moveit__srv__MovePointCmd_Response
{
  /// 执行是否成功的标志
  bool success;
  /// 执行结果的消息
  rosidl_runtime_c__String message;
} roarm_moveit__srv__MovePointCmd_Response;

// Struct for a sequence of roarm_moveit__srv__MovePointCmd_Response.
typedef struct roarm_moveit__srv__MovePointCmd_Response__Sequence
{
  roarm_moveit__srv__MovePointCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roarm_moveit__srv__MovePointCmd_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  roarm_moveit__srv__MovePointCmd_Event__request__MAX_SIZE = 1
};
// response
enum
{
  roarm_moveit__srv__MovePointCmd_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MovePointCmd in the package roarm_moveit.
typedef struct roarm_moveit__srv__MovePointCmd_Event
{
  service_msgs__msg__ServiceEventInfo info;
  roarm_moveit__srv__MovePointCmd_Request__Sequence request;
  roarm_moveit__srv__MovePointCmd_Response__Sequence response;
} roarm_moveit__srv__MovePointCmd_Event;

// Struct for a sequence of roarm_moveit__srv__MovePointCmd_Event.
typedef struct roarm_moveit__srv__MovePointCmd_Event__Sequence
{
  roarm_moveit__srv__MovePointCmd_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roarm_moveit__srv__MovePointCmd_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROARM_MOVEIT__SRV__DETAIL__MOVE_POINT_CMD__STRUCT_H_
