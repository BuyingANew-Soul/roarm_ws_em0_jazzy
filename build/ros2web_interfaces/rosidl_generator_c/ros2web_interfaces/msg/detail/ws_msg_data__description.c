// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2web_interfaces:msg/WSMsgData.idl
// generated code does not contain a copyright notice

#include "ros2web_interfaces/msg/detail/ws_msg_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2web_interfaces
const rosidl_type_hash_t *
ros2web_interfaces__msg__WSMsgData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0x94, 0x7d, 0x61, 0x6f, 0x07, 0x6f, 0x22,
      0x5d, 0x32, 0xf1, 0x09, 0xa5, 0xc3, 0x26, 0xb4,
      0xc7, 0x98, 0xf8, 0x96, 0x68, 0xc1, 0x81, 0x78,
      0x21, 0xaa, 0xe2, 0x68, 0xfd, 0x89, 0xa0, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2web_interfaces__msg__WSMsgData__TYPE_NAME[] = "ros2web_interfaces/msg/WSMsgData";

// Define type names, field names, and default values
static char ros2web_interfaces__msg__WSMsgData__FIELD_NAME__str[] = "str";
static char ros2web_interfaces__msg__WSMsgData__FIELD_NAME__bytes[] = "bytes";

static rosidl_runtime_c__type_description__Field ros2web_interfaces__msg__WSMsgData__FIELDS[] = {
  {
    {ros2web_interfaces__msg__WSMsgData__FIELD_NAME__str, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__WSMsgData__FIELD_NAME__bytes, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2web_interfaces__msg__WSMsgData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2web_interfaces__msg__WSMsgData__TYPE_NAME, 32, 32},
      {ros2web_interfaces__msg__WSMsgData__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string str\n"
  "uint8[] bytes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2web_interfaces__msg__WSMsgData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2web_interfaces__msg__WSMsgData__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2web_interfaces__msg__WSMsgData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2web_interfaces__msg__WSMsgData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
