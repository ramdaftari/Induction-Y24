// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from printer_system:srv/PrintJob.idl
// generated code does not contain a copyright notice

#ifndef PRINTER_SYSTEM__SRV__DETAIL__PRINT_JOB__BUILDER_HPP_
#define PRINTER_SYSTEM__SRV__DETAIL__PRINT_JOB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "printer_system/srv/detail/print_job__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace printer_system
{

namespace srv
{

namespace builder
{

class Init_PrintJob_Request_document_name
{
public:
  Init_PrintJob_Request_document_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::printer_system::srv::PrintJob_Request document_name(::printer_system::srv::PrintJob_Request::_document_name_type arg)
  {
    msg_.document_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::printer_system::srv::PrintJob_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::printer_system::srv::PrintJob_Request>()
{
  return printer_system::srv::builder::Init_PrintJob_Request_document_name();
}

}  // namespace printer_system


namespace printer_system
{

namespace srv
{

namespace builder
{

class Init_PrintJob_Response_accepted
{
public:
  Init_PrintJob_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::printer_system::srv::PrintJob_Response accepted(::printer_system::srv::PrintJob_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::printer_system::srv::PrintJob_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::printer_system::srv::PrintJob_Response>()
{
  return printer_system::srv::builder::Init_PrintJob_Response_accepted();
}

}  // namespace printer_system

#endif  // PRINTER_SYSTEM__SRV__DETAIL__PRINT_JOB__BUILDER_HPP_
