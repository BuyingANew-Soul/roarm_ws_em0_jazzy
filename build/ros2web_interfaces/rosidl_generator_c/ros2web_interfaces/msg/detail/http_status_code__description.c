// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2web_interfaces:msg/HTTPStatusCode.idl
// generated code does not contain a copyright notice

#include "ros2web_interfaces/msg/detail/http_status_code__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2web_interfaces
const rosidl_type_hash_t *
ros2web_interfaces__msg__HTTPStatusCode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0xb1, 0x79, 0x77, 0xb6, 0x22, 0x02, 0xc4,
      0x69, 0xd5, 0x14, 0xf7, 0x3a, 0xd6, 0x67, 0xeb,
      0x13, 0x4f, 0x2e, 0x4b, 0x52, 0xb0, 0x91, 0x89,
      0x6d, 0x96, 0x38, 0x20, 0xbb, 0x92, 0x90, 0xa8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2web_interfaces__msg__HTTPStatusCode__TYPE_NAME[] = "ros2web_interfaces/msg/HTTPStatusCode";

// Define type names, field names, and default values
static char ros2web_interfaces__msg__HTTPStatusCode__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field ros2web_interfaces__msg__HTTPStatusCode__FIELDS[] = {
  {
    {ros2web_interfaces__msg__HTTPStatusCode__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
ros2web_interfaces__msg__HTTPStatusCode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2web_interfaces__msg__HTTPStatusCode__TYPE_NAME, 37, 37},
      {ros2web_interfaces__msg__HTTPStatusCode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# HTTP Successful\n"
  "uint16 HTTP_OK=200\n"
  "uint16 HTTP_ACCEPTED=202\n"
  "uint16 HTTP_NON_AUTHORITATIVE_INFORMATION=203\n"
  "uint16 HTTP_NO_CONTENT=204\n"
  "uint16 HTTP_RESET_CONTENT=205\n"
  "uint16 HTTP_PARTIAL_CONTENT=206\n"
  "\n"
  "# HTTP REDIRECTION\n"
  "uint16 HTTP_MULTIPLE_CHOICES=300\n"
  "uint16 HTTP_MOVED_PERMANENTLY=301\n"
  "uint16 HTTP_FOUND=302\n"
  "uint16 HTTP_SEE_OTHER=303\n"
  "uint16 HTTP_NOT_MODIFIED=304\n"
  "uint16 HTTP_USE_PROXY=305\n"
  "uint16 HTTP_TEMPORARY_REDIRECT=307\n"
  "uint16 HTTP_PERMANENT_REDIRECT=308\n"
  "\n"
  "# HTTP ERROR\n"
  "## HTTP CLIENT ERROR\n"
  "uint16 HTTP_BAD_REQUEST=400\n"
  "uint16 HTTP_UNAUTHORIZED=401\n"
  "uint16 HTTP_PAYMENT_REQUIRED=402\n"
  "uint16 HTTP_FORBIDDEN=403\n"
  "uint16 HTTP_NOT_FOUND=404\n"
  "uint16 HTTP_METHOD_NOT_ALLOWED=405\n"
  "uint16 HTTP_NOT_ACCEPTABLE=406\n"
  "uint16 HTTP_PROXY_AUTHENTICATION_REQUIRED=407\n"
  "uint16 HTTP_REQUEST_TIMEOUT=408\n"
  "uint16 HTTP_CONFLICT=409\n"
  "uint16 HTTP_GONE=410\n"
  "uint16 HTTP_LENGTH_REQUIRED=411\n"
  "uint16 HTTP_PRECONDITION_FAILED=412\n"
  "uint16 HTTP_REQUEST_ENTITY_TOO_LARGE=413\n"
  "uint16 HTTP_REQUEST_URI_TOOLONG=414\n"
  "uint16 HTTP_UNSUPPORTED_MEDIA_TYPE=415\n"
  "uint16 HTTP_REQUEST_RANGE_NOT_SATISFIABLE=416\n"
  "uint16 HTTP_EXPECTATION_FAILED=417\n"
  "uint16 HTTP_MISDIRECTED_REQUEST=421\n"
  "uint16 HTTP_UNPROCESSABLE_ENTITY=422\n"
  "uint16 HTTP_FAILED_DEPENDENCY=424\n"
  "uint16 HTTP_UPGRADE_REQUIRED=426\n"
  "uint16 HTTP_PRECONDITION_REQUIRED=428\n"
  "uint16 HTTP_TOO_MANY_REQUESTS=429\n"
  "uint16 HTTP_REQUEST_HEADER_FIELDS_TOO_LARGE=431\n"
  "uint16 HTTP_UNAVAILABLE_FOR_LEGAL_REASONS=451\n"
  "\n"
  "## HTTP SERVER ERROR\n"
  "uint16 HTTP_INTERNAL_SERVER_ERROR=500\n"
  "uint16 HTTP_NOT_IMPLEMENTED=501\n"
  "uint16 HTTP_BAD_GATEWAY=502\n"
  "uint16 HTTP_SERVICE_UNAVAILABLE=503\n"
  "uint16 HTTP_GATEWAY_TIMEOUT=504\n"
  "uint16 HTTP_VERSION_NOT_SUPPORTED=505\n"
  "uint16 HTTP_VARIANT_ALSO_NEGOTIATES=506\n"
  "uint16 HTTP_INSUFFICIENT_STORAGE=507\n"
  "uint16 HTTP_NOT_EXTENDED=510\n"
  "uint16 HTTP_NETWORK_AUTHENTICATION_REQUIRED=511";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2web_interfaces__msg__HTTPStatusCode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2web_interfaces__msg__HTTPStatusCode__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1775, 1775},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2web_interfaces__msg__HTTPStatusCode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2web_interfaces__msg__HTTPStatusCode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
