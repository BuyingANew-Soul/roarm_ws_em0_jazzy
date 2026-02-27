// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2web_interfaces:msg/ContentType.idl
// generated code does not contain a copyright notice

#include "ros2web_interfaces/msg/detail/content_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2web_interfaces
const rosidl_type_hash_t *
ros2web_interfaces__msg__ContentType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0xab, 0x87, 0x04, 0xa8, 0xfa, 0x4c, 0x22,
      0x72, 0xfe, 0x4b, 0x7d, 0xbf, 0x45, 0x73, 0x32,
      0xe9, 0xea, 0x3d, 0x46, 0x90, 0x98, 0x76, 0x37,
      0x30, 0xf8, 0xa2, 0x8d, 0xf2, 0xcb, 0x35, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2web_interfaces__msg__ContentType__TYPE_NAME[] = "ros2web_interfaces/msg/ContentType";

// Define type names, field names, and default values
static char ros2web_interfaces__msg__ContentType__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field ros2web_interfaces__msg__ContentType__FIELDS[] = {
  {
    {ros2web_interfaces__msg__ContentType__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
ros2web_interfaces__msg__ContentType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2web_interfaces__msg__ContentType__TYPE_NAME, 34, 34},
      {ros2web_interfaces__msg__ContentType__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# https://developer.mozilla.org/ja/docs/Web/HTTP/Basics_of_HTTP/MIME_types/Common_types\n"
  "\n"
  "## application\n"
  "string APPLICATION_JSON='application/json'\n"
  "string APPLICATION_MSWORD='application/msword'\n"
  "string APPLICATION_MSWORD_OPEN_XML='application/vnd.openxmlformats-officedocument.wordprocessingml.document'\n"
  "string APPLICATION_OCTET_STREAM ='application/octet-stream'\n"
  "string APPLICATION_VND_AMAZON_EBOOK='application/vnd.amazon.ebook'\n"
  "string APPLICATION_X_ABIWORD='application/x-abiword'\n"
  "string APPLICATION_X_BZIP2='application/x-bzip2'\n"
  "string APPLICATION_X_BZIP='application/x-bzip'\n"
  "string APPLICATION_X_CSH='application/x-csh'\n"
  "string APPLICATION_X_FREEARC='application/x-freearc'\n"
  "string APPLICATION_X_WWW_FORM_URLENCODED='application/x-www-form-urlencoded'\n"
  "\n"
  "# application/epub+zip\n"
  "# application/gzip\n"
  "# application/java-archive\n"
  "# application/ld+json\n"
  "# application/ogg\n"
  "# application/pdf\n"
  "# application/rtf\n"
  "# application/vnd.apple.installer+xml\n"
  "# application/vnd.mozilla.xul+xml\n"
  "# application/vnd.ms-excel\n"
  "# application/vnd.ms-fontobject\n"
  "# application/vnd.ms-powerpoint\n"
  "# application/vnd.oasis.opendocument.presentation\n"
  "# application/vnd.oasis.opendocument.spreadsheet\n"
  "# application/vnd.oasis.opendocument.text\n"
  "# application/vnd.openxmlformats-officedocument.presentationml.presentation\n"
  "# application/vnd.rar\n"
  "# application/vnd.visio\n"
  "# application/x-7z-compressed\n"
  "# application/x-httpd-php\n"
  "# application/x-sh\n"
  "# application/x-shockwave-flash\n"
  "# application/x-tar\n"
  "# application/xhtml+xml\n"
  "# application/xml\n"
  "# application/zip\n"
  "\n"
  "## audio\n"
  "string AUDIO_AAC='audio/aac'\n"
  "# audio/3gpp\n"
  "# audio/3gpp2\n"
  "# audio/midi\n"
  "# audio/mpeg\n"
  "# audio/ogg\n"
  "# audio/opus\n"
  "# audio/wav\n"
  "# audio/webm\n"
  "# audio/x-midi\n"
  "\n"
  "## font\n"
  "# font/otf\n"
  "# font/ttf\n"
  "# font/woff\n"
  "# font/woff2\n"
  "\n"
  "## image\n"
  "string IMAGE_BMP='image/bmp'\n"
  "string IMAGE_JPEG='image/jpeg'\n"
  "string IMAGE_PNG='image/png'\n"
  "# image/gif\n"
  "# image/svg+xml\n"
  "# image/tiff\n"
  "# image/vnd.microsoft.icon\n"
  "# image/webp\n"
  "\n"
  "string MULTIPART_FORM_DATA='multipart/form-data'\n"
  "\n"
  "# pplication/vnd.openxmlformats-officedocument.spreadsheetml.sheet\n"
  "\n"
  "## text\n"
  "string TEXT_CSS='text/css'\n"
  "string TEXT_CSV='text/csv'\n"
  "string TEXT_HTML='text/html'\n"
  "string TEXT_JAVASCRIPT='text/javascript'\n"
  "string TEXT_PLAIN='text/plain'\n"
  "string TEXT_XML='text/xml'\n"
  "\n"
  "# text/calendar\n"
  "\n"
  "## video\n"
  "string VIDEO_X_MSVIDEO='video/x-msvideo'\n"
  "\n"
  "# video/3gpp\n"
  "# video/3gpp2\n"
  "# video/mp2t\n"
  "# video/mpeg\n"
  "# video/ogg\n"
  "# video/webm\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2web_interfaces__msg__ContentType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2web_interfaces__msg__ContentType__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2364, 2364},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2web_interfaces__msg__ContentType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2web_interfaces__msg__ContentType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
