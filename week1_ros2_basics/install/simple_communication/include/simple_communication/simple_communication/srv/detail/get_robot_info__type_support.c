// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simple_communication:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simple_communication/srv/detail/get_robot_info__rosidl_typesupport_introspection_c.h"
#include "simple_communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simple_communication/srv/detail/get_robot_info__functions.h"
#include "simple_communication/srv/detail/get_robot_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simple_communication__srv__GetRobotInfo_Request__init(message_memory);
}

void simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_fini_function(void * message_memory)
{
  simple_communication__srv__GetRobotInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_communication__srv__GetRobotInfo_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_members = {
  "simple_communication__srv",  // message namespace
  "GetRobotInfo_Request",  // message name
  1,  // number of fields
  sizeof(simple_communication__srv__GetRobotInfo_Request),
  false,  // has_any_key_member_
  simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_member_array,  // message members
  simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle = {
  0,
  &simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_members,
  get_message_typesupport_handle_function,
  &simple_communication__srv__GetRobotInfo_Request__get_type_hash,
  &simple_communication__srv__GetRobotInfo_Request__get_type_description,
  &simple_communication__srv__GetRobotInfo_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Request)() {
  if (!simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle.typesupport_identifier) {
    simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simple_communication/srv/detail/get_robot_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simple_communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simple_communication/srv/detail/get_robot_info__functions.h"
// already included above
// #include "simple_communication/srv/detail/get_robot_info__struct.h"


// Include directives for member types
// Member `robot_name`
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simple_communication__srv__GetRobotInfo_Response__init(message_memory);
}

void simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_fini_function(void * message_memory)
{
  simple_communication__srv__GetRobotInfo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_member_array[3] = {
  {
    "robot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_communication__srv__GetRobotInfo_Response, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_communication__srv__GetRobotInfo_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_communication__srv__GetRobotInfo_Response, battery_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_members = {
  "simple_communication__srv",  // message namespace
  "GetRobotInfo_Response",  // message name
  3,  // number of fields
  sizeof(simple_communication__srv__GetRobotInfo_Response),
  false,  // has_any_key_member_
  simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_member_array,  // message members
  simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle = {
  0,
  &simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_members,
  get_message_typesupport_handle_function,
  &simple_communication__srv__GetRobotInfo_Response__get_type_hash,
  &simple_communication__srv__GetRobotInfo_Response__get_type_description,
  &simple_communication__srv__GetRobotInfo_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Response)() {
  if (!simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle.typesupport_identifier) {
    simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simple_communication/srv/detail/get_robot_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simple_communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simple_communication/srv/detail/get_robot_info__functions.h"
// already included above
// #include "simple_communication/srv/detail/get_robot_info__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "simple_communication/srv/get_robot_info.h"
// Member `request`
// Member `response`
// already included above
// #include "simple_communication/srv/detail/get_robot_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simple_communication__srv__GetRobotInfo_Event__init(message_memory);
}

void simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_fini_function(void * message_memory)
{
  simple_communication__srv__GetRobotInfo_Event__fini(message_memory);
}

size_t simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Event__request(
  const void * untyped_member)
{
  const simple_communication__srv__GetRobotInfo_Request__Sequence * member =
    (const simple_communication__srv__GetRobotInfo_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__request(
  const void * untyped_member, size_t index)
{
  const simple_communication__srv__GetRobotInfo_Request__Sequence * member =
    (const simple_communication__srv__GetRobotInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__request(
  void * untyped_member, size_t index)
{
  simple_communication__srv__GetRobotInfo_Request__Sequence * member =
    (simple_communication__srv__GetRobotInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simple_communication__srv__GetRobotInfo_Request * item =
    ((const simple_communication__srv__GetRobotInfo_Request *)
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__request(untyped_member, index));
  simple_communication__srv__GetRobotInfo_Request * value =
    (simple_communication__srv__GetRobotInfo_Request *)(untyped_value);
  *value = *item;
}

void simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simple_communication__srv__GetRobotInfo_Request * item =
    ((simple_communication__srv__GetRobotInfo_Request *)
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__request(untyped_member, index));
  const simple_communication__srv__GetRobotInfo_Request * value =
    (const simple_communication__srv__GetRobotInfo_Request *)(untyped_value);
  *item = *value;
}

bool simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Event__request(
  void * untyped_member, size_t size)
{
  simple_communication__srv__GetRobotInfo_Request__Sequence * member =
    (simple_communication__srv__GetRobotInfo_Request__Sequence *)(untyped_member);
  simple_communication__srv__GetRobotInfo_Request__Sequence__fini(member);
  return simple_communication__srv__GetRobotInfo_Request__Sequence__init(member, size);
}

size_t simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Event__response(
  const void * untyped_member)
{
  const simple_communication__srv__GetRobotInfo_Response__Sequence * member =
    (const simple_communication__srv__GetRobotInfo_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__response(
  const void * untyped_member, size_t index)
{
  const simple_communication__srv__GetRobotInfo_Response__Sequence * member =
    (const simple_communication__srv__GetRobotInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__response(
  void * untyped_member, size_t index)
{
  simple_communication__srv__GetRobotInfo_Response__Sequence * member =
    (simple_communication__srv__GetRobotInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simple_communication__srv__GetRobotInfo_Response * item =
    ((const simple_communication__srv__GetRobotInfo_Response *)
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__response(untyped_member, index));
  simple_communication__srv__GetRobotInfo_Response * value =
    (simple_communication__srv__GetRobotInfo_Response *)(untyped_value);
  *value = *item;
}

void simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simple_communication__srv__GetRobotInfo_Response * item =
    ((simple_communication__srv__GetRobotInfo_Response *)
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__response(untyped_member, index));
  const simple_communication__srv__GetRobotInfo_Response * value =
    (const simple_communication__srv__GetRobotInfo_Response *)(untyped_value);
  *item = *value;
}

bool simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Event__response(
  void * untyped_member, size_t size)
{
  simple_communication__srv__GetRobotInfo_Response__Sequence * member =
    (simple_communication__srv__GetRobotInfo_Response__Sequence *)(untyped_member);
  simple_communication__srv__GetRobotInfo_Response__Sequence__fini(member);
  return simple_communication__srv__GetRobotInfo_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_communication__srv__GetRobotInfo_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(simple_communication__srv__GetRobotInfo_Event, request),  // bytes offset in struct
    NULL,  // default value
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Event__request,  // size() function pointer
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__request,  // get_const(index) function pointer
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__request,  // get(index) function pointer
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Event__request,  // fetch(index, &value) function pointer
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Event__request,  // assign(index, value) function pointer
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(simple_communication__srv__GetRobotInfo_Event, response),  // bytes offset in struct
    NULL,  // default value
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Event__response,  // size() function pointer
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__response,  // get_const(index) function pointer
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__response,  // get(index) function pointer
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Event__response,  // fetch(index, &value) function pointer
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Event__response,  // assign(index, value) function pointer
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_members = {
  "simple_communication__srv",  // message namespace
  "GetRobotInfo_Event",  // message name
  3,  // number of fields
  sizeof(simple_communication__srv__GetRobotInfo_Event),
  false,  // has_any_key_member_
  simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_member_array,  // message members
  simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_type_support_handle = {
  0,
  &simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_members,
  get_message_typesupport_handle_function,
  &simple_communication__srv__GetRobotInfo_Event__get_type_hash,
  &simple_communication__srv__GetRobotInfo_Event__get_type_description,
  &simple_communication__srv__GetRobotInfo_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Event)() {
  simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Request)();
  simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Response)();
  if (!simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_type_support_handle.typesupport_identifier) {
    simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simple_communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "simple_communication/srv/detail/get_robot_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers simple_communication__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_members = {
  "simple_communication__srv",  // service namespace
  "GetRobotInfo",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // simple_communication__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle,
  NULL,  // response message
  // simple_communication__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle
  NULL  // event_message
  // simple_communication__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle
};


static rosidl_service_type_support_t simple_communication__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_type_support_handle = {
  0,
  &simple_communication__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_members,
  get_service_typesupport_handle_function,
  &simple_communication__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle,
  &simple_communication__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle,
  &simple_communication__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    simple_communication,
    srv,
    GetRobotInfo
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    simple_communication,
    srv,
    GetRobotInfo
  ),
  &simple_communication__srv__GetRobotInfo__get_type_hash,
  &simple_communication__srv__GetRobotInfo__get_type_description,
  &simple_communication__srv__GetRobotInfo__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_communication
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo)(void) {
  if (!simple_communication__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_type_support_handle.typesupport_identifier) {
    simple_communication__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)simple_communication__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_communication, srv, GetRobotInfo_Event)()->data;
  }

  return &simple_communication__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_type_support_handle;
}
