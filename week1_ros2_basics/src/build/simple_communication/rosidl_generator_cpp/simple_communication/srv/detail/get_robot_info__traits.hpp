// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_communication:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simple_communication/srv/get_robot_info.hpp"


#ifndef SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__TRAITS_HPP_
#define SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_communication/srv/detail/get_robot_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_communication
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotInfo_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotInfo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace simple_communication

namespace rosidl_generator_traits
{

[[deprecated("use simple_communication::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_communication::srv::GetRobotInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_communication::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_communication::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_communication::srv::GetRobotInfo_Request & msg)
{
  return simple_communication::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_communication::srv::GetRobotInfo_Request>()
{
  return "simple_communication::srv::GetRobotInfo_Request";
}

template<>
inline const char * name<simple_communication::srv::GetRobotInfo_Request>()
{
  return "simple_communication/srv/GetRobotInfo_Request";
}

template<>
struct has_fixed_size<simple_communication::srv::GetRobotInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simple_communication::srv::GetRobotInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simple_communication::srv::GetRobotInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace simple_communication
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotInfo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace simple_communication

namespace rosidl_generator_traits
{

[[deprecated("use simple_communication::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_communication::srv::GetRobotInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_communication::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_communication::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_communication::srv::GetRobotInfo_Response & msg)
{
  return simple_communication::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_communication::srv::GetRobotInfo_Response>()
{
  return "simple_communication::srv::GetRobotInfo_Response";
}

template<>
inline const char * name<simple_communication::srv::GetRobotInfo_Response>()
{
  return "simple_communication/srv/GetRobotInfo_Response";
}

template<>
struct has_fixed_size<simple_communication::srv::GetRobotInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_communication::srv::GetRobotInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simple_communication::srv::GetRobotInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace simple_communication
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotInfo_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotInfo_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotInfo_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace simple_communication

namespace rosidl_generator_traits
{

[[deprecated("use simple_communication::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_communication::srv::GetRobotInfo_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_communication::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_communication::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_communication::srv::GetRobotInfo_Event & msg)
{
  return simple_communication::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_communication::srv::GetRobotInfo_Event>()
{
  return "simple_communication::srv::GetRobotInfo_Event";
}

template<>
inline const char * name<simple_communication::srv::GetRobotInfo_Event>()
{
  return "simple_communication/srv/GetRobotInfo_Event";
}

template<>
struct has_fixed_size<simple_communication::srv::GetRobotInfo_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_communication::srv::GetRobotInfo_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<simple_communication::srv::GetRobotInfo_Request>::value && has_bounded_size<simple_communication::srv::GetRobotInfo_Response>::value> {};

template<>
struct is_message<simple_communication::srv::GetRobotInfo_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simple_communication::srv::GetRobotInfo>()
{
  return "simple_communication::srv::GetRobotInfo";
}

template<>
inline const char * name<simple_communication::srv::GetRobotInfo>()
{
  return "simple_communication/srv/GetRobotInfo";
}

template<>
struct has_fixed_size<simple_communication::srv::GetRobotInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<simple_communication::srv::GetRobotInfo_Request>::value &&
    has_fixed_size<simple_communication::srv::GetRobotInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<simple_communication::srv::GetRobotInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<simple_communication::srv::GetRobotInfo_Request>::value &&
    has_bounded_size<simple_communication::srv::GetRobotInfo_Response>::value
  >
{
};

template<>
struct is_service<simple_communication::srv::GetRobotInfo>
  : std::true_type
{
};

template<>
struct is_service_request<simple_communication::srv::GetRobotInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simple_communication::srv::GetRobotInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__TRAITS_HPP_
