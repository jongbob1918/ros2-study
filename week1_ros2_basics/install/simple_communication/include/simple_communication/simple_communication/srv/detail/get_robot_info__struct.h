// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_communication:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simple_communication/srv/get_robot_info.h"


#ifndef SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_H_
#define SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetRobotInfo in the package simple_communication.
typedef struct simple_communication__srv__GetRobotInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} simple_communication__srv__GetRobotInfo_Request;

// Struct for a sequence of simple_communication__srv__GetRobotInfo_Request.
typedef struct simple_communication__srv__GetRobotInfo_Request__Sequence
{
  simple_communication__srv__GetRobotInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_communication__srv__GetRobotInfo_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'robot_name'
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRobotInfo in the package simple_communication.
typedef struct simple_communication__srv__GetRobotInfo_Response
{
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String status;
  double battery_level;
} simple_communication__srv__GetRobotInfo_Response;

// Struct for a sequence of simple_communication__srv__GetRobotInfo_Response.
typedef struct simple_communication__srv__GetRobotInfo_Response__Sequence
{
  simple_communication__srv__GetRobotInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_communication__srv__GetRobotInfo_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  simple_communication__srv__GetRobotInfo_Event__request__MAX_SIZE = 1
};
// response
enum
{
  simple_communication__srv__GetRobotInfo_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetRobotInfo in the package simple_communication.
typedef struct simple_communication__srv__GetRobotInfo_Event
{
  service_msgs__msg__ServiceEventInfo info;
  simple_communication__srv__GetRobotInfo_Request__Sequence request;
  simple_communication__srv__GetRobotInfo_Response__Sequence response;
} simple_communication__srv__GetRobotInfo_Event;

// Struct for a sequence of simple_communication__srv__GetRobotInfo_Event.
typedef struct simple_communication__srv__GetRobotInfo_Event__Sequence
{
  simple_communication__srv__GetRobotInfo_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_communication__srv__GetRobotInfo_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_H_
