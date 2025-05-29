// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from printer_system:srv/PrintJob.idl
// generated code does not contain a copyright notice

#ifndef PRINTER_SYSTEM__SRV__DETAIL__PRINT_JOB__TRAITS_HPP_
#define PRINTER_SYSTEM__SRV__DETAIL__PRINT_JOB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "printer_system/srv/detail/print_job__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace printer_system
{

namespace srv
{

inline void to_flow_style_yaml(
  const PrintJob_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: document_name
  {
    out << "document_name: ";
    rosidl_generator_traits::value_to_yaml(msg.document_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrintJob_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: document_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "document_name: ";
    rosidl_generator_traits::value_to_yaml(msg.document_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrintJob_Request & msg, bool use_flow_style = false)
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

}  // namespace printer_system

namespace rosidl_generator_traits
{

[[deprecated("use printer_system::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const printer_system::srv::PrintJob_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  printer_system::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use printer_system::srv::to_yaml() instead")]]
inline std::string to_yaml(const printer_system::srv::PrintJob_Request & msg)
{
  return printer_system::srv::to_yaml(msg);
}

template<>
inline const char * data_type<printer_system::srv::PrintJob_Request>()
{
  return "printer_system::srv::PrintJob_Request";
}

template<>
inline const char * name<printer_system::srv::PrintJob_Request>()
{
  return "printer_system/srv/PrintJob_Request";
}

template<>
struct has_fixed_size<printer_system::srv::PrintJob_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<printer_system::srv::PrintJob_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<printer_system::srv::PrintJob_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace printer_system
{

namespace srv
{

inline void to_flow_style_yaml(
  const PrintJob_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrintJob_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrintJob_Response & msg, bool use_flow_style = false)
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

}  // namespace printer_system

namespace rosidl_generator_traits
{

[[deprecated("use printer_system::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const printer_system::srv::PrintJob_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  printer_system::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use printer_system::srv::to_yaml() instead")]]
inline std::string to_yaml(const printer_system::srv::PrintJob_Response & msg)
{
  return printer_system::srv::to_yaml(msg);
}

template<>
inline const char * data_type<printer_system::srv::PrintJob_Response>()
{
  return "printer_system::srv::PrintJob_Response";
}

template<>
inline const char * name<printer_system::srv::PrintJob_Response>()
{
  return "printer_system/srv/PrintJob_Response";
}

template<>
struct has_fixed_size<printer_system::srv::PrintJob_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<printer_system::srv::PrintJob_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<printer_system::srv::PrintJob_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<printer_system::srv::PrintJob>()
{
  return "printer_system::srv::PrintJob";
}

template<>
inline const char * name<printer_system::srv::PrintJob>()
{
  return "printer_system/srv/PrintJob";
}

template<>
struct has_fixed_size<printer_system::srv::PrintJob>
  : std::integral_constant<
    bool,
    has_fixed_size<printer_system::srv::PrintJob_Request>::value &&
    has_fixed_size<printer_system::srv::PrintJob_Response>::value
  >
{
};

template<>
struct has_bounded_size<printer_system::srv::PrintJob>
  : std::integral_constant<
    bool,
    has_bounded_size<printer_system::srv::PrintJob_Request>::value &&
    has_bounded_size<printer_system::srv::PrintJob_Response>::value
  >
{
};

template<>
struct is_service<printer_system::srv::PrintJob>
  : std::true_type
{
};

template<>
struct is_service_request<printer_system::srv::PrintJob_Request>
  : std::true_type
{
};

template<>
struct is_service_response<printer_system::srv::PrintJob_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PRINTER_SYSTEM__SRV__DETAIL__PRINT_JOB__TRAITS_HPP_
