// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2web_interfaces:msg/WSMsgType.idl
// generated code does not contain a copyright notice

#include "ros2web_interfaces/msg/detail/ws_msg_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2web_interfaces
const rosidl_type_hash_t *
ros2web_interfaces__msg__WSMsgType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x86, 0xec, 0x72, 0xbc, 0x9a, 0x74, 0xd0,
      0x93, 0x9e, 0x25, 0x09, 0x9a, 0x0b, 0x4f, 0xc4,
      0x65, 0x09, 0xad, 0xa7, 0x5a, 0x68, 0x53, 0x06,
      0x3f, 0x13, 0xb3, 0x7f, 0x6c, 0xee, 0xa1, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2web_interfaces__msg__WSMsgType__TYPE_NAME[] = "ros2web_interfaces/msg/WSMsgType";

// Define type names, field names, and default values
static char ros2web_interfaces__msg__WSMsgType__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field ros2web_interfaces__msg__WSMsgType__FIELDS[] = {
  {
    {ros2web_interfaces__msg__WSMsgType__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2web_interfaces__msg__WSMsgType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2web_interfaces__msg__WSMsgType__TYPE_NAME, 32, 32},
      {ros2web_interfaces__msg__WSMsgType__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 CONTINUATION=0\n"
  "\n"
  "uint8 TEXT=1\n"
  "uint8 BINARY=2\n"
  "\n"
  "uint8 PING=11\n"
  "uint8 PONG=12\n"
  "\n"
  "uint8 CLOSE=21\n"
  "uint8 CLOSING=22\n"
  "uint8 CLOSED=23\n"
  "\n"
  "uint8 ERROR=31";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2web_interfaces__msg__WSMsgType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2web_interfaces__msg__WSMsgType__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 144, 144},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2web_interfaces__msg__WSMsgType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2web_interfaces__msg__WSMsgType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
