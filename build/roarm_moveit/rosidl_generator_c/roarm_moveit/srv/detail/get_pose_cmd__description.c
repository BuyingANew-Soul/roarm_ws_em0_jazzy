// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roarm_moveit:srv/GetPoseCmd.idl
// generated code does not contain a copyright notice

#include "roarm_moveit/srv/detail/get_pose_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roarm_moveit
const rosidl_type_hash_t *
roarm_moveit__srv__GetPoseCmd__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0x59, 0x29, 0x87, 0xef, 0x61, 0x95, 0xe8,
      0x12, 0x20, 0xde, 0xc9, 0x50, 0x99, 0x62, 0x12,
      0x38, 0x06, 0xec, 0xaa, 0x98, 0xf7, 0x16, 0x3d,
      0x66, 0x02, 0xd7, 0x8a, 0x5f, 0xc8, 0x2f, 0x6e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_roarm_moveit
const rosidl_type_hash_t *
roarm_moveit__srv__GetPoseCmd_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0xe3, 0x1c, 0x74, 0xe0, 0xda, 0x4f, 0x17,
      0xc3, 0xff, 0x73, 0xa0, 0xf3, 0x84, 0x25, 0xab,
      0x56, 0xa6, 0x69, 0x5b, 0x57, 0x59, 0x0b, 0xd3,
      0x52, 0x0d, 0xc0, 0x88, 0x94, 0x51, 0xb0, 0x26,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_roarm_moveit
const rosidl_type_hash_t *
roarm_moveit__srv__GetPoseCmd_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0x0c, 0xde, 0x22, 0x32, 0x04, 0xfa, 0xd5,
      0xbd, 0xbb, 0xce, 0xd1, 0x2e, 0x7f, 0x8d, 0x0a,
      0x59, 0xc4, 0x41, 0x5f, 0x05, 0xbe, 0xd2, 0x4b,
      0x24, 0x6b, 0xa1, 0x8c, 0xac, 0x07, 0xcb, 0x09,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_roarm_moveit
const rosidl_type_hash_t *
roarm_moveit__srv__GetPoseCmd_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0xa8, 0x2c, 0xf0, 0xad, 0x01, 0x5e, 0x5a,
      0x35, 0x0f, 0xec, 0x9e, 0x60, 0x3c, 0xf5, 0xcc,
      0x41, 0x56, 0x71, 0x82, 0xa4, 0x6d, 0x72, 0x89,
      0x4f, 0xd2, 0x57, 0xe7, 0x7e, 0xc0, 0x2f, 0x44,
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

static char roarm_moveit__srv__GetPoseCmd__TYPE_NAME[] = "roarm_moveit/srv/GetPoseCmd";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char roarm_moveit__srv__GetPoseCmd_Event__TYPE_NAME[] = "roarm_moveit/srv/GetPoseCmd_Event";
static char roarm_moveit__srv__GetPoseCmd_Request__TYPE_NAME[] = "roarm_moveit/srv/GetPoseCmd_Request";
static char roarm_moveit__srv__GetPoseCmd_Response__TYPE_NAME[] = "roarm_moveit/srv/GetPoseCmd_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char roarm_moveit__srv__GetPoseCmd__FIELD_NAME__request_message[] = "request_message";
static char roarm_moveit__srv__GetPoseCmd__FIELD_NAME__response_message[] = "response_message";
static char roarm_moveit__srv__GetPoseCmd__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field roarm_moveit__srv__GetPoseCmd__FIELDS[] = {
  {
    {roarm_moveit__srv__GetPoseCmd__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {roarm_moveit__srv__GetPoseCmd_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {roarm_moveit__srv__GetPoseCmd_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {roarm_moveit__srv__GetPoseCmd_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription roarm_moveit__srv__GetPoseCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roarm_moveit__srv__GetPoseCmd__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roarm_moveit__srv__GetPoseCmd__TYPE_NAME, 27, 27},
      {roarm_moveit__srv__GetPoseCmd__FIELDS, 3, 3},
    },
    {roarm_moveit__srv__GetPoseCmd__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = roarm_moveit__srv__GetPoseCmd_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = roarm_moveit__srv__GetPoseCmd_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = roarm_moveit__srv__GetPoseCmd_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char roarm_moveit__srv__GetPoseCmd_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field roarm_moveit__srv__GetPoseCmd_Request__FIELDS[] = {
  {
    {roarm_moveit__srv__GetPoseCmd_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
roarm_moveit__srv__GetPoseCmd_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roarm_moveit__srv__GetPoseCmd_Request__TYPE_NAME, 35, 35},
      {roarm_moveit__srv__GetPoseCmd_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char roarm_moveit__srv__GetPoseCmd_Response__FIELD_NAME__x[] = "x";
static char roarm_moveit__srv__GetPoseCmd_Response__FIELD_NAME__y[] = "y";
static char roarm_moveit__srv__GetPoseCmd_Response__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field roarm_moveit__srv__GetPoseCmd_Response__FIELDS[] = {
  {
    {roarm_moveit__srv__GetPoseCmd_Response__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd_Response__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd_Response__FIELD_NAME__z, 1, 1},
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
roarm_moveit__srv__GetPoseCmd_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roarm_moveit__srv__GetPoseCmd_Response__TYPE_NAME, 36, 36},
      {roarm_moveit__srv__GetPoseCmd_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char roarm_moveit__srv__GetPoseCmd_Event__FIELD_NAME__info[] = "info";
static char roarm_moveit__srv__GetPoseCmd_Event__FIELD_NAME__request[] = "request";
static char roarm_moveit__srv__GetPoseCmd_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field roarm_moveit__srv__GetPoseCmd_Event__FIELDS[] = {
  {
    {roarm_moveit__srv__GetPoseCmd_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {roarm_moveit__srv__GetPoseCmd_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {roarm_moveit__srv__GetPoseCmd_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription roarm_moveit__srv__GetPoseCmd_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {roarm_moveit__srv__GetPoseCmd_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roarm_moveit__srv__GetPoseCmd_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roarm_moveit__srv__GetPoseCmd_Event__TYPE_NAME, 33, 33},
      {roarm_moveit__srv__GetPoseCmd_Event__FIELDS, 3, 3},
    },
    {roarm_moveit__srv__GetPoseCmd_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = roarm_moveit__srv__GetPoseCmd_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = roarm_moveit__srv__GetPoseCmd_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# GetPoseCmd\n"
  "# \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "---\n"
  "# \\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "float64 x    # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe7\\x9a\\x84x\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "float64 y    # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe7\\x9a\\x84y\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "float64 z    # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe7\\x9a\\x84z\\xe5\\x9d\\x90\\xe6\\xa0\\x87";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roarm_moveit__srv__GetPoseCmd__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roarm_moveit__srv__GetPoseCmd__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 103, 103},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
roarm_moveit__srv__GetPoseCmd_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roarm_moveit__srv__GetPoseCmd_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
roarm_moveit__srv__GetPoseCmd_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roarm_moveit__srv__GetPoseCmd_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
roarm_moveit__srv__GetPoseCmd_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roarm_moveit__srv__GetPoseCmd_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_moveit__srv__GetPoseCmd__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roarm_moveit__srv__GetPoseCmd__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *roarm_moveit__srv__GetPoseCmd_Event__get_individual_type_description_source(NULL);
    sources[3] = *roarm_moveit__srv__GetPoseCmd_Request__get_individual_type_description_source(NULL);
    sources[4] = *roarm_moveit__srv__GetPoseCmd_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_moveit__srv__GetPoseCmd_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roarm_moveit__srv__GetPoseCmd_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_moveit__srv__GetPoseCmd_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roarm_moveit__srv__GetPoseCmd_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_moveit__srv__GetPoseCmd_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roarm_moveit__srv__GetPoseCmd_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *roarm_moveit__srv__GetPoseCmd_Request__get_individual_type_description_source(NULL);
    sources[3] = *roarm_moveit__srv__GetPoseCmd_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
