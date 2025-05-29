// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from printer_system:srv/PrintJob.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "printer_system/srv/detail/print_job__struct.h"
#include "printer_system/srv/detail/print_job__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace printer_system
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _PrintJob_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PrintJob_Request_type_support_ids_t;

static const _PrintJob_Request_type_support_ids_t _PrintJob_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PrintJob_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PrintJob_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PrintJob_Request_type_support_symbol_names_t _PrintJob_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, printer_system, srv, PrintJob_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, printer_system, srv, PrintJob_Request)),
  }
};

typedef struct _PrintJob_Request_type_support_data_t
{
  void * data[2];
} _PrintJob_Request_type_support_data_t;

static _PrintJob_Request_type_support_data_t _PrintJob_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PrintJob_Request_message_typesupport_map = {
  2,
  "printer_system",
  &_PrintJob_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PrintJob_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PrintJob_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PrintJob_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PrintJob_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace printer_system

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, printer_system, srv, PrintJob_Request)() {
  return &::printer_system::srv::rosidl_typesupport_c::PrintJob_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "printer_system/srv/detail/print_job__struct.h"
// already included above
// #include "printer_system/srv/detail/print_job__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace printer_system
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _PrintJob_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PrintJob_Response_type_support_ids_t;

static const _PrintJob_Response_type_support_ids_t _PrintJob_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PrintJob_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PrintJob_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PrintJob_Response_type_support_symbol_names_t _PrintJob_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, printer_system, srv, PrintJob_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, printer_system, srv, PrintJob_Response)),
  }
};

typedef struct _PrintJob_Response_type_support_data_t
{
  void * data[2];
} _PrintJob_Response_type_support_data_t;

static _PrintJob_Response_type_support_data_t _PrintJob_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PrintJob_Response_message_typesupport_map = {
  2,
  "printer_system",
  &_PrintJob_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PrintJob_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PrintJob_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PrintJob_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PrintJob_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace printer_system

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, printer_system, srv, PrintJob_Response)() {
  return &::printer_system::srv::rosidl_typesupport_c::PrintJob_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "printer_system/srv/detail/print_job__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace printer_system
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _PrintJob_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PrintJob_type_support_ids_t;

static const _PrintJob_type_support_ids_t _PrintJob_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PrintJob_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PrintJob_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PrintJob_type_support_symbol_names_t _PrintJob_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, printer_system, srv, PrintJob)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, printer_system, srv, PrintJob)),
  }
};

typedef struct _PrintJob_type_support_data_t
{
  void * data[2];
} _PrintJob_type_support_data_t;

static _PrintJob_type_support_data_t _PrintJob_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PrintJob_service_typesupport_map = {
  2,
  "printer_system",
  &_PrintJob_service_typesupport_ids.typesupport_identifier[0],
  &_PrintJob_service_typesupport_symbol_names.symbol_name[0],
  &_PrintJob_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PrintJob_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PrintJob_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace printer_system

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, printer_system, srv, PrintJob)() {
  return &::printer_system::srv::rosidl_typesupport_c::PrintJob_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
