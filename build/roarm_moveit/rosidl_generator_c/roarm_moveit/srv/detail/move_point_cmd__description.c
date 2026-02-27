// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roarm_moveit:srv/MovePointCmd.idl
// generated code does not contain a copyright notice

#include "roarm_moveit/srv/detail/move_point_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roarm_moveit
const rosidl_type_hash_t *
roarm_moveit__srv__MovePointCmd__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0x97, 0x72, 0xad, 0x4a, 0xfb, 0xfa, 0x25,
      0x83, 0x1d, 0xd3, 0x85, 0x85, 0xc4, 0x1a, 0x94,
      0xcd, 0xcf, 0x28, 0x4e, 0x98, 0x75, 0x99, 0x95,
      0xb5, 0xdd, 0xbf, 0x81, 0x90, 0x3a, 0x84, 0x92,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_roarm_moveit
const rosidl_type_hash_t *
roarm_moveit__srv__MovePointCmd_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0xac, 0xb5, 0x66, 0x2e, 0x7f, 0x68, 0x60,
      0xaf, 0x6b, 0xb4, 0xe7, 0xf8, 0x8e, 0x50, 0xf3,
      0xdb, 0xc4, 0xf7, 0x49, 0xf0, 0x9e, 0x09, 0x52,
      0xaf, 0x0e, 0x7a, 0x95, 0x19, 0xa5, 0x57, 0x97,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_roarm_moveit
const rosidl_type_hash_t *
roarm_moveit__srv__MovePointCmd_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x67, 0x1a, 0x08, 0x25, 0xd2, 0x8f, 0xc6,
      0xf6, 0xf7, 0x1e, 0x04, 0x2e, 0xff, 0x55, 0xdf,
      0xb9, 0xd3, 0x2e, 0x4a, 0x64, 0x9d, 0xcf, 0xc5,
      0x50, 0xf6, 0x32, 0x6d, 0x46, 0x7b, 0xc5, 0xf3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_roarm_moveit
const rosidl_type_hash_t *
roarm_moveit__srv__MovePointCmd_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x40, 0xe0, 0x4d, 0x42, 0xed, 0x70, 0xea,
      0x44, 0x36, 0xf2, 0x5e, 0x59, 0x03, 0x12, 0x3f,
      0x70, 0xc8, 0xc6, 0x23, 0x90, 0xbb, 0x7e, 0x49,
      0xa4, 0x5b, 0x31, 0x6a, 0xcf, 0xfc, 0x99, 0x54,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char roarm_moveit__srv__MovePointCmd__TYPE_NAME[] = "roarm_moveit/srv/MovePointCmd";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char roarm_moveit__srv__MovePointCmd_Event__TYPE_NAME[] = "roarm_moveit/srv/MovePointCmd_Event";
static char roarm_moveit__srv__MovePointCmd_Request__TYPE_NAME[] = "roarm_moveit/srv/MovePointCmd_Request";
static char roarm_moveit__srv__MovePointCmd_Response__TYPE_NAME[] = "roarm_moveit/srv/MovePointCmd_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char roarm_moveit__srv__MovePointCmd__FIELD_NAME__request_message[] = "request_message";
static char roarm_moveit__srv__MovePointCmd__FIELD_NAME__response_message[] = "response_message";
static char roarm_moveit__srv__MovePointCmd__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field roarm_moveit__srv__MovePointCmd__FIELDS[] = {
  {
    {roarm_moveit__srv__MovePointCmd__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {roarm_moveit__srv__MovePointCmd_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {roarm_moveit__srv__MovePointCmd_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {roarm_moveit__srv__MovePointCmd_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription roarm_moveit__srv__MovePointCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roarm_moveit__srv__MovePointCmd__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roarm_moveit__srv__MovePointCmd__TYPE_NAME, 29, 29},
      {roarm_moveit__srv__MovePointCmd__FIELDS, 3, 3},
    },
    {roarm_moveit__srv__MovePointCmd__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = roarm_moveit__srv__MovePointCmd_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = roarm_moveit__srv__MovePointCmd_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = roarm_moveit__srv__MovePointCmd_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char roarm_moveit__srv__MovePointCmd_Request__FIELD_NAME__x[] = "x";
static char roarm_moveit__srv__MovePointCmd_Request__FIELD_NAME__y[] = "y";
static char roarm_moveit__srv__MovePointCmd_Request__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field roarm_moveit__srv__MovePointCmd_Request__FIELDS[] = {
  {
    {roarm_moveit__srv__MovePointCmd_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd_Request__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roarm_moveit__srv__MovePointCmd_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roarm_moveit__srv__MovePointCmd_Request__TYPE_NAME, 37, 37},
      {roarm_moveit__srv__MovePointCmd_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char roarm_moveit__srv__MovePointCmd_Response__FIELD_NAME__success[] = "success";
static char roarm_moveit__srv__MovePointCmd_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field roarm_moveit__srv__MovePointCmd_Response__FIELDS[] = {
  {
    {roarm_moveit__srv__MovePointCmd_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd_Response__FIELD_NAME__message, 7, 7},
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
roarm_moveit__srv__MovePointCmd_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roarm_moveit__srv__MovePointCmd_Response__TYPE_NAME, 38, 38},
      {roarm_moveit__srv__MovePointCmd_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char roarm_moveit__srv__MovePointCmd_Event__FIELD_NAME__info[] = "info";
static char roarm_moveit__srv__MovePointCmd_Event__FIELD_NAME__request[] = "request";
static char roarm_moveit__srv__MovePointCmd_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field roarm_moveit__srv__MovePointCmd_Event__FIELDS[] = {
  {
    {roarm_moveit__srv__MovePointCmd_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {roarm_moveit__srv__MovePointCmd_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {roarm_moveit__srv__MovePointCmd_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription roarm_moveit__srv__MovePointCmd_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__MovePointCmd_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roarm_moveit__srv__MovePointCmd_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roarm_moveit__srv__MovePointCmd_Event__TYPE_NAME, 35, 35},
      {roarm_moveit__srv__MovePointCmd_Event__FIELDS, 3, 3},
    },
    {roarm_moveit__srv__MovePointCmd_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = roarm_moveit__srv__MovePointCmd_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = roarm_moveit__srv__MovePointCmd_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# MovePointCmd.srv\n"
  "# \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "float64 x    # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe7\\x9a\\x84x\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "float64 y    # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe7\\x9a\\x84y\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "float64 z    # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe7\\x9a\\x84z\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "---\n"
  "# \\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "bool success    # \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe7\\x9a\\x84\\xe6\\xa0\\x87\\xe5\\xbf\\x97\n"
  "string message  # \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe7\\xbb\\x93\\xe6\\x9e\\x9c\\xe7\\x9a\\x84\\xe6\\xb6\\x88\\xe6\\x81\\xaf\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roarm_moveit__srv__MovePointCmd__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roarm_moveit__srv__MovePointCmd__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 164, 164},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
roarm_moveit__srv__MovePointCmd_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roarm_moveit__srv__MovePointCmd_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
roarm_moveit__srv__MovePointCmd_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roarm_moveit__srv__MovePointCmd_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
roarm_moveit__srv__MovePointCmd_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roarm_moveit__srv__MovePointCmd_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_moveit__srv__MovePointCmd__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roarm_moveit__srv__MovePointCmd__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *roarm_moveit__srv__MovePointCmd_Event__get_individual_type_description_source(NULL);
    sources[3] = *roarm_moveit__srv__MovePointCmd_Request__get_individual_type_description_source(NULL);
    sources[4] = *roarm_moveit__srv__MovePointCmd_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_moveit__srv__MovePointCmd_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roarm_moveit__srv__MovePointCmd_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_moveit__srv__MovePointCmd_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roarm_moveit__srv__MovePointCmd_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_moveit__srv__MovePointCmd_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roarm_moveit__srv__MovePointCmd_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *roarm_moveit__srv__MovePointCmd_Request__get_individual_type_description_source(NULL);
    sources[3] = *roarm_moveit__srv__MovePointCmd_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
