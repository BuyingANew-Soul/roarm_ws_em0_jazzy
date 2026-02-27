// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2web_interfaces:msg/BodyPart.idl
// generated code does not contain a copyright notice

#include "ros2web_interfaces/msg/detail/body_part__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2web_interfaces
const rosidl_type_hash_t *
ros2web_interfaces__msg__BodyPart__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0xf2, 0xd7, 0x81, 0x5a, 0x7e, 0x24, 0x72,
      0xb9, 0x24, 0xc2, 0x25, 0xca, 0xcb, 0x64, 0x4e,
      0x89, 0x3d, 0xd2, 0x31, 0xb5, 0x51, 0x6a, 0x3e,
      0x5b, 0x0b, 0x1c, 0x7e, 0xfa, 0xb8, 0xc6, 0x3c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2web_interfaces__msg__BodyPart__TYPE_NAME[] = "ros2web_interfaces/msg/BodyPart";

// Define type names, field names, and default values
static char ros2web_interfaces__msg__BodyPart__FIELD_NAME__name[] = "name";
static char ros2web_interfaces__msg__BodyPart__FIELD_NAME__filename[] = "filename";
static char ros2web_interfaces__msg__BodyPart__FIELD_NAME__content_type[] = "content_type";
static char ros2web_interfaces__msg__BodyPart__FIELD_NAME__headers[] = "headers";
static char ros2web_interfaces__msg__BodyPart__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field ros2web_interfaces__msg__BodyPart__FIELDS[] = {
  {
    {ros2web_interfaces__msg__BodyPart__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__BodyPart__FIELD_NAME__filename, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__BodyPart__FIELD_NAME__content_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__BodyPart__FIELD_NAME__headers, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__BodyPart__FIELD_NAME__data, 4, 4},
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
ros2web_interfaces__msg__BodyPart__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2web_interfaces__msg__BodyPart__TYPE_NAME, 31, 31},
      {ros2web_interfaces__msg__BodyPart__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "string filename\n"
  "string content_type\n"
  "string[] headers\n"
  "uint8[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2web_interfaces__msg__BodyPart__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2web_interfaces__msg__BodyPart__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 78, 78},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2web_interfaces__msg__BodyPart__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2web_interfaces__msg__BodyPart__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
