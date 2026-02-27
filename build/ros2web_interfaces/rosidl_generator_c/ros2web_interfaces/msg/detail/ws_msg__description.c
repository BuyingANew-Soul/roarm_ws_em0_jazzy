// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2web_interfaces:msg/WSMsg.idl
// generated code does not contain a copyright notice

#include "ros2web_interfaces/msg/detail/ws_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2web_interfaces
const rosidl_type_hash_t *
ros2web_interfaces__msg__WSMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0xce, 0xb2, 0x6c, 0x68, 0x0f, 0x36, 0x3c,
      0x20, 0x74, 0x32, 0x20, 0x0b, 0x0b, 0xe5, 0x95,
      0x83, 0x59, 0x03, 0x13, 0x2f, 0x2c, 0x43, 0x13,
      0xa1, 0x35, 0xd2, 0xf7, 0x3f, 0x97, 0x33, 0x4c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros2web_interfaces/msg/detail/ws_msg_data__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ros2web_interfaces__msg__WSMsgData__EXPECTED_HASH = {1, {
    0xaa, 0x94, 0x7d, 0x61, 0x6f, 0x07, 0x6f, 0x22,
    0x5d, 0x32, 0xf1, 0x09, 0xa5, 0xc3, 0x26, 0xb4,
    0xc7, 0x98, 0xf8, 0x96, 0x68, 0xc1, 0x81, 0x78,
    0x21, 0xaa, 0xe2, 0x68, 0xfd, 0x89, 0xa0, 0xc5,
  }};
#endif

static char ros2web_interfaces__msg__WSMsg__TYPE_NAME[] = "ros2web_interfaces/msg/WSMsg";
static char ros2web_interfaces__msg__WSMsgData__TYPE_NAME[] = "ros2web_interfaces/msg/WSMsgData";

// Define type names, field names, and default values
static char ros2web_interfaces__msg__WSMsg__FIELD_NAME__route[] = "route";
static char ros2web_interfaces__msg__WSMsg__FIELD_NAME__ws_id[] = "ws_id";
static char ros2web_interfaces__msg__WSMsg__FIELD_NAME__type[] = "type";
static char ros2web_interfaces__msg__WSMsg__FIELD_NAME__data[] = "data";
static char ros2web_interfaces__msg__WSMsg__FIELD_NAME__extra[] = "extra";

static rosidl_runtime_c__type_description__Field ros2web_interfaces__msg__WSMsg__FIELDS[] = {
  {
    {ros2web_interfaces__msg__WSMsg__FIELD_NAME__route, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__WSMsg__FIELD_NAME__ws_id, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__WSMsg__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__WSMsg__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros2web_interfaces__msg__WSMsgData__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__WSMsg__FIELD_NAME__extra, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros2web_interfaces__msg__WSMsg__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros2web_interfaces__msg__WSMsgData__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2web_interfaces__msg__WSMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2web_interfaces__msg__WSMsg__TYPE_NAME, 28, 28},
      {ros2web_interfaces__msg__WSMsg__FIELDS, 5, 5},
    },
    {ros2web_interfaces__msg__WSMsg__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros2web_interfaces__msg__WSMsgData__EXPECTED_HASH, ros2web_interfaces__msg__WSMsgData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros2web_interfaces__msg__WSMsgData__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string route\n"
  "string ws_id\n"
  "uint8 type      # WSMsgType\n"
  "WSMsgData data\n"
  "string extra";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2web_interfaces__msg__WSMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2web_interfaces__msg__WSMsg__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2web_interfaces__msg__WSMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2web_interfaces__msg__WSMsg__get_individual_type_description_source(NULL),
    sources[1] = *ros2web_interfaces__msg__WSMsgData__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
