// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from printer_system:srv/PrintJob.idl
// generated code does not contain a copyright notice
#include "printer_system/srv/detail/print_job__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `document_name`
#include "rosidl_runtime_c/string_functions.h"

bool
printer_system__srv__PrintJob_Request__init(printer_system__srv__PrintJob_Request * msg)
{
  if (!msg) {
    return false;
  }
  // document_name
  if (!rosidl_runtime_c__String__init(&msg->document_name)) {
    printer_system__srv__PrintJob_Request__fini(msg);
    return false;
  }
  return true;
}

void
printer_system__srv__PrintJob_Request__fini(printer_system__srv__PrintJob_Request * msg)
{
  if (!msg) {
    return;
  }
  // document_name
  rosidl_runtime_c__String__fini(&msg->document_name);
}

bool
printer_system__srv__PrintJob_Request__are_equal(const printer_system__srv__PrintJob_Request * lhs, const printer_system__srv__PrintJob_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // document_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->document_name), &(rhs->document_name)))
  {
    return false;
  }
  return true;
}

bool
printer_system__srv__PrintJob_Request__copy(
  const printer_system__srv__PrintJob_Request * input,
  printer_system__srv__PrintJob_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // document_name
  if (!rosidl_runtime_c__String__copy(
      &(input->document_name), &(output->document_name)))
  {
    return false;
  }
  return true;
}

printer_system__srv__PrintJob_Request *
printer_system__srv__PrintJob_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  printer_system__srv__PrintJob_Request * msg = (printer_system__srv__PrintJob_Request *)allocator.allocate(sizeof(printer_system__srv__PrintJob_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(printer_system__srv__PrintJob_Request));
  bool success = printer_system__srv__PrintJob_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
printer_system__srv__PrintJob_Request__destroy(printer_system__srv__PrintJob_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    printer_system__srv__PrintJob_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
printer_system__srv__PrintJob_Request__Sequence__init(printer_system__srv__PrintJob_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  printer_system__srv__PrintJob_Request * data = NULL;

  if (size) {
    data = (printer_system__srv__PrintJob_Request *)allocator.zero_allocate(size, sizeof(printer_system__srv__PrintJob_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = printer_system__srv__PrintJob_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        printer_system__srv__PrintJob_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
printer_system__srv__PrintJob_Request__Sequence__fini(printer_system__srv__PrintJob_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      printer_system__srv__PrintJob_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

printer_system__srv__PrintJob_Request__Sequence *
printer_system__srv__PrintJob_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  printer_system__srv__PrintJob_Request__Sequence * array = (printer_system__srv__PrintJob_Request__Sequence *)allocator.allocate(sizeof(printer_system__srv__PrintJob_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = printer_system__srv__PrintJob_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
printer_system__srv__PrintJob_Request__Sequence__destroy(printer_system__srv__PrintJob_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    printer_system__srv__PrintJob_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
printer_system__srv__PrintJob_Request__Sequence__are_equal(const printer_system__srv__PrintJob_Request__Sequence * lhs, const printer_system__srv__PrintJob_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!printer_system__srv__PrintJob_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
printer_system__srv__PrintJob_Request__Sequence__copy(
  const printer_system__srv__PrintJob_Request__Sequence * input,
  printer_system__srv__PrintJob_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(printer_system__srv__PrintJob_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    printer_system__srv__PrintJob_Request * data =
      (printer_system__srv__PrintJob_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!printer_system__srv__PrintJob_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          printer_system__srv__PrintJob_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!printer_system__srv__PrintJob_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
printer_system__srv__PrintJob_Response__init(printer_system__srv__PrintJob_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  return true;
}

void
printer_system__srv__PrintJob_Response__fini(printer_system__srv__PrintJob_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
}

bool
printer_system__srv__PrintJob_Response__are_equal(const printer_system__srv__PrintJob_Response * lhs, const printer_system__srv__PrintJob_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  return true;
}

bool
printer_system__srv__PrintJob_Response__copy(
  const printer_system__srv__PrintJob_Response * input,
  printer_system__srv__PrintJob_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  return true;
}

printer_system__srv__PrintJob_Response *
printer_system__srv__PrintJob_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  printer_system__srv__PrintJob_Response * msg = (printer_system__srv__PrintJob_Response *)allocator.allocate(sizeof(printer_system__srv__PrintJob_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(printer_system__srv__PrintJob_Response));
  bool success = printer_system__srv__PrintJob_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
printer_system__srv__PrintJob_Response__destroy(printer_system__srv__PrintJob_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    printer_system__srv__PrintJob_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
printer_system__srv__PrintJob_Response__Sequence__init(printer_system__srv__PrintJob_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  printer_system__srv__PrintJob_Response * data = NULL;

  if (size) {
    data = (printer_system__srv__PrintJob_Response *)allocator.zero_allocate(size, sizeof(printer_system__srv__PrintJob_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = printer_system__srv__PrintJob_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        printer_system__srv__PrintJob_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
printer_system__srv__PrintJob_Response__Sequence__fini(printer_system__srv__PrintJob_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      printer_system__srv__PrintJob_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

printer_system__srv__PrintJob_Response__Sequence *
printer_system__srv__PrintJob_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  printer_system__srv__PrintJob_Response__Sequence * array = (printer_system__srv__PrintJob_Response__Sequence *)allocator.allocate(sizeof(printer_system__srv__PrintJob_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = printer_system__srv__PrintJob_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
printer_system__srv__PrintJob_Response__Sequence__destroy(printer_system__srv__PrintJob_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    printer_system__srv__PrintJob_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
printer_system__srv__PrintJob_Response__Sequence__are_equal(const printer_system__srv__PrintJob_Response__Sequence * lhs, const printer_system__srv__PrintJob_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!printer_system__srv__PrintJob_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
printer_system__srv__PrintJob_Response__Sequence__copy(
  const printer_system__srv__PrintJob_Response__Sequence * input,
  printer_system__srv__PrintJob_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(printer_system__srv__PrintJob_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    printer_system__srv__PrintJob_Response * data =
      (printer_system__srv__PrintJob_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!printer_system__srv__PrintJob_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          printer_system__srv__PrintJob_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!printer_system__srv__PrintJob_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
