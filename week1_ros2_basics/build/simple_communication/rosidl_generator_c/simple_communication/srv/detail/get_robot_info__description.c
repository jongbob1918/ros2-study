// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simple_communication:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

#include "simple_communication/srv/detail/get_robot_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simple_communication
const rosidl_type_hash_t *
simple_communication__srv__GetRobotInfo__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0x43, 0xe2, 0xe3, 0xff, 0x9d, 0x34, 0x5d,
      0x66, 0xfd, 0xda, 0x91, 0x1e, 0x41, 0x16, 0x40,
      0x37, 0xbb, 0xdc, 0xa9, 0x9e, 0x6a, 0xbf, 0x39,
      0xa9, 0x77, 0xc7, 0xca, 0xe4, 0x1b, 0xcd, 0x23,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simple_communication
const rosidl_type_hash_t *
simple_communication__srv__GetRobotInfo_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0xac, 0xc0, 0x08, 0x37, 0xb4, 0x1f, 0x70,
      0x01, 0xc8, 0x30, 0x72, 0x66, 0xd0, 0x16, 0x91,
      0x21, 0x50, 0xec, 0xa7, 0x55, 0xe7, 0x02, 0x80,
      0x10, 0xbe, 0x86, 0x80, 0x4d, 0x36, 0x7c, 0xa3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simple_communication
const rosidl_type_hash_t *
simple_communication__srv__GetRobotInfo_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x7e, 0x61, 0x06, 0xd7, 0x63, 0x78, 0xab,
      0x47, 0x09, 0xf4, 0x0f, 0xa3, 0x34, 0x42, 0x9c,
      0x22, 0xb2, 0x10, 0x9d, 0x37, 0x2a, 0xc7, 0x12,
      0x6f, 0x74, 0xee, 0x10, 0x5f, 0x30, 0x41, 0x80,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simple_communication
const rosidl_type_hash_t *
simple_communication__srv__GetRobotInfo_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0xbf, 0xb9, 0x6f, 0x3c, 0x34, 0x2a, 0xfc,
      0x4a, 0xf0, 0x2f, 0xde, 0x96, 0x4f, 0x8c, 0x54,
      0xb7, 0x0d, 0x2b, 0x27, 0x0d, 0xf3, 0x94, 0x2c,
      0xde, 0x68, 0x1a, 0xe3, 0x07, 0x1c, 0x71, 0x56,
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

static char simple_communication__srv__GetRobotInfo__TYPE_NAME[] = "simple_communication/srv/GetRobotInfo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simple_communication__srv__GetRobotInfo_Event__TYPE_NAME[] = "simple_communication/srv/GetRobotInfo_Event";
static char simple_communication__srv__GetRobotInfo_Request__TYPE_NAME[] = "simple_communication/srv/GetRobotInfo_Request";
static char simple_communication__srv__GetRobotInfo_Response__TYPE_NAME[] = "simple_communication/srv/GetRobotInfo_Response";

// Define type names, field names, and default values
static char simple_communication__srv__GetRobotInfo__FIELD_NAME__request_message[] = "request_message";
static char simple_communication__srv__GetRobotInfo__FIELD_NAME__response_message[] = "response_message";
static char simple_communication__srv__GetRobotInfo__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simple_communication__srv__GetRobotInfo__FIELDS[] = {
  {
    {simple_communication__srv__GetRobotInfo__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simple_communication__srv__GetRobotInfo_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simple_communication__srv__GetRobotInfo_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simple_communication__srv__GetRobotInfo_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simple_communication__srv__GetRobotInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simple_communication__srv__GetRobotInfo__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simple_communication__srv__GetRobotInfo__TYPE_NAME, 37, 37},
      {simple_communication__srv__GetRobotInfo__FIELDS, 3, 3},
    },
    {simple_communication__srv__GetRobotInfo__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = simple_communication__srv__GetRobotInfo_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = simple_communication__srv__GetRobotInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = simple_communication__srv__GetRobotInfo_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simple_communication__srv__GetRobotInfo_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field simple_communication__srv__GetRobotInfo_Request__FIELDS[] = {
  {
    {simple_communication__srv__GetRobotInfo_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
simple_communication__srv__GetRobotInfo_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simple_communication__srv__GetRobotInfo_Request__TYPE_NAME, 45, 45},
      {simple_communication__srv__GetRobotInfo_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simple_communication__srv__GetRobotInfo_Response__FIELD_NAME__robot_name[] = "robot_name";
static char simple_communication__srv__GetRobotInfo_Response__FIELD_NAME__status[] = "status";
static char simple_communication__srv__GetRobotInfo_Response__FIELD_NAME__battery_level[] = "battery_level";

static rosidl_runtime_c__type_description__Field simple_communication__srv__GetRobotInfo_Response__FIELDS[] = {
  {
    {simple_communication__srv__GetRobotInfo_Response__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo_Response__FIELD_NAME__battery_level, 13, 13},
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
simple_communication__srv__GetRobotInfo_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simple_communication__srv__GetRobotInfo_Response__TYPE_NAME, 46, 46},
      {simple_communication__srv__GetRobotInfo_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simple_communication__srv__GetRobotInfo_Event__FIELD_NAME__info[] = "info";
static char simple_communication__srv__GetRobotInfo_Event__FIELD_NAME__request[] = "request";
static char simple_communication__srv__GetRobotInfo_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simple_communication__srv__GetRobotInfo_Event__FIELDS[] = {
  {
    {simple_communication__srv__GetRobotInfo_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simple_communication__srv__GetRobotInfo_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simple_communication__srv__GetRobotInfo_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simple_communication__srv__GetRobotInfo_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {simple_communication__srv__GetRobotInfo_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simple_communication__srv__GetRobotInfo_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simple_communication__srv__GetRobotInfo_Event__TYPE_NAME, 43, 43},
      {simple_communication__srv__GetRobotInfo_Event__FIELDS, 3, 3},
    },
    {simple_communication__srv__GetRobotInfo_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = simple_communication__srv__GetRobotInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = simple_communication__srv__GetRobotInfo_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# srv/GetRobotInfo.srv\n"
  "\n"
  "---\n"
  "string robot_name\n"
  "string status\n"
  "float64 battery_level";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simple_communication__srv__GetRobotInfo__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simple_communication__srv__GetRobotInfo__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simple_communication__srv__GetRobotInfo_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simple_communication__srv__GetRobotInfo_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simple_communication__srv__GetRobotInfo_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simple_communication__srv__GetRobotInfo_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simple_communication__srv__GetRobotInfo_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simple_communication__srv__GetRobotInfo_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simple_communication__srv__GetRobotInfo__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simple_communication__srv__GetRobotInfo__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simple_communication__srv__GetRobotInfo_Event__get_individual_type_description_source(NULL);
    sources[4] = *simple_communication__srv__GetRobotInfo_Request__get_individual_type_description_source(NULL);
    sources[5] = *simple_communication__srv__GetRobotInfo_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simple_communication__srv__GetRobotInfo_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simple_communication__srv__GetRobotInfo_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simple_communication__srv__GetRobotInfo_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simple_communication__srv__GetRobotInfo_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simple_communication__srv__GetRobotInfo_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simple_communication__srv__GetRobotInfo_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simple_communication__srv__GetRobotInfo_Request__get_individual_type_description_source(NULL);
    sources[4] = *simple_communication__srv__GetRobotInfo_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
