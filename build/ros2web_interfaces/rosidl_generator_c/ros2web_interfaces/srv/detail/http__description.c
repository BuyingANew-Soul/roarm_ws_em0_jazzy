// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2web_interfaces:srv/HTTP.idl
// generated code does not contain a copyright notice

#include "ros2web_interfaces/srv/detail/http__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2web_interfaces
const rosidl_type_hash_t *
ros2web_interfaces__srv__HTTP__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0x9e, 0x7e, 0x72, 0x19, 0x9a, 0x0f, 0xaa,
      0x53, 0xf4, 0x71, 0x5b, 0xce, 0x50, 0x3a, 0xb4,
      0x62, 0x33, 0xb5, 0x25, 0x08, 0xcf, 0x09, 0x7c,
      0x87, 0x72, 0xcc, 0xcc, 0x27, 0xd6, 0xd2, 0x12,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ros2web_interfaces
const rosidl_type_hash_t *
ros2web_interfaces__srv__HTTP_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0xaa, 0x4c, 0x89, 0x61, 0xfd, 0xad, 0x71,
      0xc9, 0x09, 0x3e, 0xc2, 0x43, 0xa0, 0x62, 0x29,
      0xa6, 0xeb, 0xa8, 0xbd, 0xb7, 0x10, 0x78, 0x30,
      0x49, 0xea, 0x1e, 0x99, 0xdb, 0x70, 0xca, 0x5a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ros2web_interfaces
const rosidl_type_hash_t *
ros2web_interfaces__srv__HTTP_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xd3, 0x89, 0x1d, 0xd4, 0xb3, 0x7b, 0x40,
      0xc6, 0x40, 0xd7, 0x59, 0xd4, 0xcd, 0x27, 0x7d,
      0xe5, 0x06, 0x1a, 0x32, 0xbd, 0xa0, 0xcf, 0xb8,
      0xe9, 0x31, 0xc4, 0xd2, 0xe0, 0xef, 0x04, 0x02,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ros2web_interfaces
const rosidl_type_hash_t *
ros2web_interfaces__srv__HTTP_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0xab, 0xcf, 0x49, 0xf8, 0x1d, 0x14, 0xcc,
      0xe1, 0x75, 0xc8, 0x1c, 0x00, 0xf8, 0x22, 0x5c,
      0xb4, 0xd7, 0x9c, 0x61, 0x8a, 0x03, 0xac, 0xef,
      0x9f, 0x5d, 0x47, 0x80, 0xfc, 0x54, 0x19, 0xd8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ros2web_interfaces/msg/detail/body_part__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t ros2web_interfaces__msg__BodyPart__EXPECTED_HASH = {1, {
    0x9e, 0xf2, 0xd7, 0x81, 0x5a, 0x7e, 0x24, 0x72,
    0xb9, 0x24, 0xc2, 0x25, 0xca, 0xcb, 0x64, 0x4e,
    0x89, 0x3d, 0xd2, 0x31, 0xb5, 0x51, 0x6a, 0x3e,
    0x5b, 0x0b, 0x1c, 0x7e, 0xfa, 0xb8, 0xc6, 0x3c,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ros2web_interfaces__srv__HTTP__TYPE_NAME[] = "ros2web_interfaces/srv/HTTP";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ros2web_interfaces__msg__BodyPart__TYPE_NAME[] = "ros2web_interfaces/msg/BodyPart";
static char ros2web_interfaces__srv__HTTP_Event__TYPE_NAME[] = "ros2web_interfaces/srv/HTTP_Event";
static char ros2web_interfaces__srv__HTTP_Request__TYPE_NAME[] = "ros2web_interfaces/srv/HTTP_Request";
static char ros2web_interfaces__srv__HTTP_Response__TYPE_NAME[] = "ros2web_interfaces/srv/HTTP_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ros2web_interfaces__srv__HTTP__FIELD_NAME__request_message[] = "request_message";
static char ros2web_interfaces__srv__HTTP__FIELD_NAME__response_message[] = "response_message";
static char ros2web_interfaces__srv__HTTP__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ros2web_interfaces__srv__HTTP__FIELDS[] = {
  {
    {ros2web_interfaces__srv__HTTP__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros2web_interfaces__srv__HTTP_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros2web_interfaces__srv__HTTP_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros2web_interfaces__srv__HTTP_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros2web_interfaces__srv__HTTP__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__BodyPart__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2web_interfaces__srv__HTTP__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2web_interfaces__srv__HTTP__TYPE_NAME, 27, 27},
      {ros2web_interfaces__srv__HTTP__FIELDS, 3, 3},
    },
    {ros2web_interfaces__srv__HTTP__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros2web_interfaces__msg__BodyPart__EXPECTED_HASH, ros2web_interfaces__msg__BodyPart__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros2web_interfaces__msg__BodyPart__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ros2web_interfaces__srv__HTTP_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ros2web_interfaces__srv__HTTP_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ros2web_interfaces__srv__HTTP_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__headers[] = "headers";
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__method[] = "method";
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__path[] = "path";
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__query[] = "query";
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__srv_name[] = "srv_name";
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__route[] = "route";
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__body[] = "body";
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__text[] = "text";
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__content_type[] = "content_type";
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__charset[] = "charset";
static char ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__multipart[] = "multipart";

static rosidl_runtime_c__type_description__Field ros2web_interfaces__srv__HTTP_Request__FIELDS[] = {
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__headers, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__method, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__path, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__query, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__srv_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__route, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__body, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__text, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__content_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__charset, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__FIELD_NAME__multipart, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ros2web_interfaces__msg__BodyPart__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros2web_interfaces__srv__HTTP_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros2web_interfaces__msg__BodyPart__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2web_interfaces__srv__HTTP_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2web_interfaces__srv__HTTP_Request__TYPE_NAME, 35, 35},
      {ros2web_interfaces__srv__HTTP_Request__FIELDS, 11, 11},
    },
    {ros2web_interfaces__srv__HTTP_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros2web_interfaces__msg__BodyPart__EXPECTED_HASH, ros2web_interfaces__msg__BodyPart__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros2web_interfaces__msg__BodyPart__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__status[] = "status";
static char ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__reason[] = "reason";
static char ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__body[] = "body";
static char ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__text[] = "text";
static char ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__content_type[] = "content_type";
static char ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__charset[] = "charset";
static char ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__file_path[] = "file_path";

static rosidl_runtime_c__type_description__Field ros2web_interfaces__srv__HTTP_Response__FIELDS[] = {
  {
    {ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__reason, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__body, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__text, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__content_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__charset, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Response__FIELD_NAME__file_path, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2web_interfaces__srv__HTTP_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2web_interfaces__srv__HTTP_Response__TYPE_NAME, 36, 36},
      {ros2web_interfaces__srv__HTTP_Response__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ros2web_interfaces__srv__HTTP_Event__FIELD_NAME__info[] = "info";
static char ros2web_interfaces__srv__HTTP_Event__FIELD_NAME__request[] = "request";
static char ros2web_interfaces__srv__HTTP_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ros2web_interfaces__srv__HTTP_Event__FIELDS[] = {
  {
    {ros2web_interfaces__srv__HTTP_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ros2web_interfaces__srv__HTTP_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ros2web_interfaces__srv__HTTP_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros2web_interfaces__srv__HTTP_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__msg__BodyPart__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros2web_interfaces__srv__HTTP_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2web_interfaces__srv__HTTP_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2web_interfaces__srv__HTTP_Event__TYPE_NAME, 33, 33},
      {ros2web_interfaces__srv__HTTP_Event__FIELDS, 3, 3},
    },
    {ros2web_interfaces__srv__HTTP_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros2web_interfaces__msg__BodyPart__EXPECTED_HASH, ros2web_interfaces__msg__BodyPart__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros2web_interfaces__msg__BodyPart__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ros2web_interfaces__srv__HTTP_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ros2web_interfaces__srv__HTTP_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# https://docs.aiohttp.org/en/stable/web_reference.html\n"
  "\n"
  "string[] headers  # [<key>, <value>, <key>, <value>, ...]\n"
  "string method     # HTTP method,\n"
  "string path       # The URL including PATH INFO without the host or scheme. \n"
  "string query      # The query string in the URL\n"
  "\n"
  "string srv_name\n"
  "string route\n"
  "\n"
  "uint8[] body\n"
  "string text\n"
  "string content_type   # ContentType\n"
  "string charset\n"
  "BodyPart[] multipart\n"
  "---\n"
  "# string[] headers\n"
  "uint16 status # HTTPStatusCode\n"
  "string reason\n"
  "\n"
  "uint8[] body\n"
  "string text\n"
  "string content_type   # ContentType\n"
  "string charset\n"
  "# int16 zlib_executor_size\n"
  "# int16 zlib_executor\n"
  "\n"
  "string file_path\n"
  "# int32 chunk_size";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2web_interfaces__srv__HTTP__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2web_interfaces__srv__HTTP__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 631, 631},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ros2web_interfaces__srv__HTTP_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2web_interfaces__srv__HTTP_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ros2web_interfaces__srv__HTTP_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2web_interfaces__srv__HTTP_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ros2web_interfaces__srv__HTTP_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2web_interfaces__srv__HTTP_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2web_interfaces__srv__HTTP__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2web_interfaces__srv__HTTP__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros2web_interfaces__msg__BodyPart__get_individual_type_description_source(NULL);
    sources[3] = *ros2web_interfaces__srv__HTTP_Event__get_individual_type_description_source(NULL);
    sources[4] = *ros2web_interfaces__srv__HTTP_Request__get_individual_type_description_source(NULL);
    sources[5] = *ros2web_interfaces__srv__HTTP_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2web_interfaces__srv__HTTP_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2web_interfaces__srv__HTTP_Request__get_individual_type_description_source(NULL),
    sources[1] = *ros2web_interfaces__msg__BodyPart__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2web_interfaces__srv__HTTP_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2web_interfaces__srv__HTTP_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2web_interfaces__srv__HTTP_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2web_interfaces__srv__HTTP_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros2web_interfaces__msg__BodyPart__get_individual_type_description_source(NULL);
    sources[3] = *ros2web_interfaces__srv__HTTP_Request__get_individual_type_description_source(NULL);
    sources[4] = *ros2web_interfaces__srv__HTTP_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
