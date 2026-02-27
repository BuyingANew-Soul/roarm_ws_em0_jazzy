// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from roarm_moveit:srv/MovePointCmd.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "roarm_moveit/srv/detail/move_point_cmd__struct.h"
#include "roarm_moveit/srv/detail/move_point_cmd__type_support.h"
#include "roarm_moveit/srv/detail/move_point_cmd__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace roarm_moveit
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MovePointCmd_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MovePointCmd_Request_type_support_ids_t;

static const _MovePointCmd_Request_type_support_ids_t _MovePointCmd_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MovePointCmd_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MovePointCmd_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MovePointCmd_Request_type_support_symbol_names_t _MovePointCmd_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roarm_moveit, srv, MovePointCmd_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roarm_moveit, srv, MovePointCmd_Request)),
  }
};

typedef struct _MovePointCmd_Request_type_support_data_t
{
  void * data[2];
} _MovePointCmd_Request_type_support_data_t;

static _MovePointCmd_Request_type_support_data_t _MovePointCmd_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MovePointCmd_Request_message_typesupport_map = {
  2,
  "roarm_moveit",
  &_MovePointCmd_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MovePointCmd_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MovePointCmd_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MovePointCmd_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MovePointCmd_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &roarm_moveit__srv__MovePointCmd_Request__get_type_hash,
  &roarm_moveit__srv__MovePointCmd_Request__get_type_description,
  &roarm_moveit__srv__MovePointCmd_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roarm_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, roarm_moveit, srv, MovePointCmd_Request)() {
  return &::roarm_moveit::srv::rosidl_typesupport_c::MovePointCmd_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "roarm_moveit/srv/detail/move_point_cmd__struct.h"
// already included above
// #include "roarm_moveit/srv/detail/move_point_cmd__type_support.h"
// already included above
// #include "roarm_moveit/srv/detail/move_point_cmd__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace roarm_moveit
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MovePointCmd_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MovePointCmd_Response_type_support_ids_t;

static const _MovePointCmd_Response_type_support_ids_t _MovePointCmd_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MovePointCmd_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MovePointCmd_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MovePointCmd_Response_type_support_symbol_names_t _MovePointCmd_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roarm_moveit, srv, MovePointCmd_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roarm_moveit, srv, MovePointCmd_Response)),
  }
};

typedef struct _MovePointCmd_Response_type_support_data_t
{
  void * data[2];
} _MovePointCmd_Response_type_support_data_t;

static _MovePointCmd_Response_type_support_data_t _MovePointCmd_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MovePointCmd_Response_message_typesupport_map = {
  2,
  "roarm_moveit",
  &_MovePointCmd_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MovePointCmd_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MovePointCmd_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MovePointCmd_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MovePointCmd_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &roarm_moveit__srv__MovePointCmd_Response__get_type_hash,
  &roarm_moveit__srv__MovePointCmd_Response__get_type_description,
  &roarm_moveit__srv__MovePointCmd_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roarm_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, roarm_moveit, srv, MovePointCmd_Response)() {
  return &::roarm_moveit::srv::rosidl_typesupport_c::MovePointCmd_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "roarm_moveit/srv/detail/move_point_cmd__struct.h"
// already included above
// #include "roarm_moveit/srv/detail/move_point_cmd__type_support.h"
// already included above
// #include "roarm_moveit/srv/detail/move_point_cmd__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace roarm_moveit
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MovePointCmd_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MovePointCmd_Event_type_support_ids_t;

static const _MovePointCmd_Event_type_support_ids_t _MovePointCmd_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MovePointCmd_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MovePointCmd_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MovePointCmd_Event_type_support_symbol_names_t _MovePointCmd_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roarm_moveit, srv, MovePointCmd_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roarm_moveit, srv, MovePointCmd_Event)),
  }
};

typedef struct _MovePointCmd_Event_type_support_data_t
{
  void * data[2];
} _MovePointCmd_Event_type_support_data_t;

static _MovePointCmd_Event_type_support_data_t _MovePointCmd_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MovePointCmd_Event_message_typesupport_map = {
  2,
  "roarm_moveit",
  &_MovePointCmd_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MovePointCmd_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MovePointCmd_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MovePointCmd_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MovePointCmd_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &roarm_moveit__srv__MovePointCmd_Event__get_type_hash,
  &roarm_moveit__srv__MovePointCmd_Event__get_type_description,
  &roarm_moveit__srv__MovePointCmd_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roarm_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, roarm_moveit, srv, MovePointCmd_Event)() {
  return &::roarm_moveit::srv::rosidl_typesupport_c::MovePointCmd_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "roarm_moveit/srv/detail/move_point_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace roarm_moveit
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _MovePointCmd_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MovePointCmd_type_support_ids_t;

static const _MovePointCmd_type_support_ids_t _MovePointCmd_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MovePointCmd_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MovePointCmd_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MovePointCmd_type_support_symbol_names_t _MovePointCmd_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roarm_moveit, srv, MovePointCmd)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roarm_moveit, srv, MovePointCmd)),
  }
};

typedef struct _MovePointCmd_type_support_data_t
{
  void * data[2];
} _MovePointCmd_type_support_data_t;

static _MovePointCmd_type_support_data_t _MovePointCmd_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MovePointCmd_service_typesupport_map = {
  2,
  "roarm_moveit",
  &_MovePointCmd_service_typesupport_ids.typesupport_identifier[0],
  &_MovePointCmd_service_typesupport_symbol_names.symbol_name[0],
  &_MovePointCmd_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MovePointCmd_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MovePointCmd_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MovePointCmd_Request_message_type_support_handle,
  &MovePointCmd_Response_message_type_support_handle,
  &MovePointCmd_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    roarm_moveit,
    srv,
    MovePointCmd
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    roarm_moveit,
    srv,
    MovePointCmd
  ),
  &roarm_moveit__srv__MovePointCmd__get_type_hash,
  &roarm_moveit__srv__MovePointCmd__get_type_description,
  &roarm_moveit__srv__MovePointCmd__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roarm_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, roarm_moveit, srv, MovePointCmd)() {
  return &::roarm_moveit::srv::rosidl_typesupport_c::MovePointCmd_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
