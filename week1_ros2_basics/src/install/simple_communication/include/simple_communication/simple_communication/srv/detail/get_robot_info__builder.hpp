// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_communication:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simple_communication/srv/get_robot_info.hpp"


#ifndef SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__BUILDER_HPP_
#define SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_communication/srv/detail/get_robot_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_communication
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_communication::srv::GetRobotInfo_Request>()
{
  return ::simple_communication::srv::GetRobotInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace simple_communication


namespace simple_communication
{

namespace srv
{

namespace builder
{

class Init_GetRobotInfo_Response_battery_level
{
public:
  explicit Init_GetRobotInfo_Response_battery_level(::simple_communication::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  ::simple_communication::srv::GetRobotInfo_Response battery_level(::simple_communication::srv::GetRobotInfo_Response::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_communication::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_status
{
public:
  explicit Init_GetRobotInfo_Response_status(::simple_communication::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_battery_level status(::simple_communication::srv::GetRobotInfo_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetRobotInfo_Response_battery_level(msg_);
  }

private:
  ::simple_communication::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_robot_name
{
public:
  Init_GetRobotInfo_Response_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotInfo_Response_status robot_name(::simple_communication::srv::GetRobotInfo_Response::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_GetRobotInfo_Response_status(msg_);
  }

private:
  ::simple_communication::srv::GetRobotInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_communication::srv::GetRobotInfo_Response>()
{
  return simple_communication::srv::builder::Init_GetRobotInfo_Response_robot_name();
}

}  // namespace simple_communication


namespace simple_communication
{

namespace srv
{

namespace builder
{

class Init_GetRobotInfo_Event_response
{
public:
  explicit Init_GetRobotInfo_Event_response(::simple_communication::srv::GetRobotInfo_Event & msg)
  : msg_(msg)
  {}
  ::simple_communication::srv::GetRobotInfo_Event response(::simple_communication::srv::GetRobotInfo_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_communication::srv::GetRobotInfo_Event msg_;
};

class Init_GetRobotInfo_Event_request
{
public:
  explicit Init_GetRobotInfo_Event_request(::simple_communication::srv::GetRobotInfo_Event & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Event_response request(::simple_communication::srv::GetRobotInfo_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetRobotInfo_Event_response(msg_);
  }

private:
  ::simple_communication::srv::GetRobotInfo_Event msg_;
};

class Init_GetRobotInfo_Event_info
{
public:
  Init_GetRobotInfo_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotInfo_Event_request info(::simple_communication::srv::GetRobotInfo_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetRobotInfo_Event_request(msg_);
  }

private:
  ::simple_communication::srv::GetRobotInfo_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_communication::srv::GetRobotInfo_Event>()
{
  return simple_communication::srv::builder::Init_GetRobotInfo_Event_info();
}

}  // namespace simple_communication

#endif  // SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__BUILDER_HPP_
