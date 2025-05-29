// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from printer_system:srv/PrintJob.idl
// generated code does not contain a copyright notice

#ifndef PRINTER_SYSTEM__SRV__DETAIL__PRINT_JOB__STRUCT_H_
#define PRINTER_SYSTEM__SRV__DETAIL__PRINT_JOB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'document_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PrintJob in the package printer_system.
typedef struct printer_system__srv__PrintJob_Request
{
  rosidl_runtime_c__String document_name;
} printer_system__srv__PrintJob_Request;

// Struct for a sequence of printer_system__srv__PrintJob_Request.
typedef struct printer_system__srv__PrintJob_Request__Sequence
{
  printer_system__srv__PrintJob_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} printer_system__srv__PrintJob_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PrintJob in the package printer_system.
typedef struct printer_system__srv__PrintJob_Response
{
  bool accepted;
} printer_system__srv__PrintJob_Response;

// Struct for a sequence of printer_system__srv__PrintJob_Response.
typedef struct printer_system__srv__PrintJob_Response__Sequence
{
  printer_system__srv__PrintJob_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} printer_system__srv__PrintJob_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PRINTER_SYSTEM__SRV__DETAIL__PRINT_JOB__STRUCT_H_
