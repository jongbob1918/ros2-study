// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_communication:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simple_communication/srv/get_robot_info.hpp"


#ifndef SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_HPP_
#define SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simple_communication__srv__GetRobotInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__simple_communication__srv__GetRobotInfo_Request __declspec(deprecated)
#endif

namespace simple_communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotInfo_Request_
{
  using Type = GetRobotInfo_Request_<ContainerAllocator>;

  explicit GetRobotInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetRobotInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_communication__srv__GetRobotInfo_Request
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_communication__srv__GetRobotInfo_Request
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotInfo_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotInfo_Request_

// alias to use template instance with default allocator
using GetRobotInfo_Request =
  simple_communication::srv::GetRobotInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_communication


#ifndef _WIN32
# define DEPRECATED__simple_communication__srv__GetRobotInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__simple_communication__srv__GetRobotInfo_Response __declspec(deprecated)
#endif

namespace simple_communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotInfo_Response_
{
  using Type = GetRobotInfo_Response_<ContainerAllocator>;

  explicit GetRobotInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->status = "";
      this->battery_level = 0.0;
    }
  }

  explicit GetRobotInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_name(_alloc),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->status = "";
      this->battery_level = 0.0;
    }
  }

  // field types and members
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _battery_level_type =
    double;
  _battery_level_type battery_level;

  // setters for named parameter idiom
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__battery_level(
    const double & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_communication__srv__GetRobotInfo_Response
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_communication__srv__GetRobotInfo_Response
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotInfo_Response_ & other) const
  {
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->battery_level != other.battery_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotInfo_Response_

// alias to use template instance with default allocator
using GetRobotInfo_Response =
  simple_communication::srv::GetRobotInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_communication


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simple_communication__srv__GetRobotInfo_Event __attribute__((deprecated))
#else
# define DEPRECATED__simple_communication__srv__GetRobotInfo_Event __declspec(deprecated)
#endif

namespace simple_communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotInfo_Event_
{
  using Type = GetRobotInfo_Event_<ContainerAllocator>;

  explicit GetRobotInfo_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetRobotInfo_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simple_communication::srv::GetRobotInfo_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simple_communication::srv::GetRobotInfo_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_communication__srv__GetRobotInfo_Event
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_communication__srv__GetRobotInfo_Event
    std::shared_ptr<simple_communication::srv::GetRobotInfo_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotInfo_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotInfo_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotInfo_Event_

// alias to use template instance with default allocator
using GetRobotInfo_Event =
  simple_communication::srv::GetRobotInfo_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_communication

namespace simple_communication
{

namespace srv
{

struct GetRobotInfo
{
  using Request = simple_communication::srv::GetRobotInfo_Request;
  using Response = simple_communication::srv::GetRobotInfo_Response;
  using Event = simple_communication::srv::GetRobotInfo_Event;
};

}  // namespace srv

}  // namespace simple_communication

#endif  // SIMPLE_COMMUNICATION__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_HPP_
