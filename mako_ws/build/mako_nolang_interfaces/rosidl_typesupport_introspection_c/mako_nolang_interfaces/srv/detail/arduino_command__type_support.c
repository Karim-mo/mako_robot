// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mako_nolang_interfaces:srv/ArduinoCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mako_nolang_interfaces/srv/detail/arduino_command__rosidl_typesupport_introspection_c.h"
#include "mako_nolang_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mako_nolang_interfaces/srv/detail/arduino_command__functions.h"
#include "mako_nolang_interfaces/srv/detail/arduino_command__struct.h"


// Include directives for member types
// Member `cmd_type`
// Member `led_exp_type`
// Member `servo_expression`
// Member `motor_direction`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mako_nolang_interfaces__srv__ArduinoCommand_Request__init(message_memory);
}

void ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_fini_function(void * message_memory)
{
  mako_nolang_interfaces__srv__ArduinoCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_message_member_array[4] = {
  {
    "cmd_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mako_nolang_interfaces__srv__ArduinoCommand_Request, cmd_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led_exp_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mako_nolang_interfaces__srv__ArduinoCommand_Request, led_exp_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_expression",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mako_nolang_interfaces__srv__ArduinoCommand_Request, servo_expression),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mako_nolang_interfaces__srv__ArduinoCommand_Request, motor_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_message_members = {
  "mako_nolang_interfaces__srv",  // message namespace
  "ArduinoCommand_Request",  // message name
  4,  // number of fields
  sizeof(mako_nolang_interfaces__srv__ArduinoCommand_Request),
  ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_message_member_array,  // message members
  ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_message_type_support_handle = {
  0,
  &ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mako_nolang_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mako_nolang_interfaces, srv, ArduinoCommand_Request)() {
  if (!ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_message_type_support_handle.typesupport_identifier) {
    ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ArduinoCommand_Request__rosidl_typesupport_introspection_c__ArduinoCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mako_nolang_interfaces/srv/detail/arduino_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mako_nolang_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mako_nolang_interfaces/srv/detail/arduino_command__functions.h"
// already included above
// #include "mako_nolang_interfaces/srv/detail/arduino_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mako_nolang_interfaces__srv__ArduinoCommand_Response__init(message_memory);
}

void ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_fini_function(void * message_memory)
{
  mako_nolang_interfaces__srv__ArduinoCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mako_nolang_interfaces__srv__ArduinoCommand_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_message_members = {
  "mako_nolang_interfaces__srv",  // message namespace
  "ArduinoCommand_Response",  // message name
  1,  // number of fields
  sizeof(mako_nolang_interfaces__srv__ArduinoCommand_Response),
  ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_message_member_array,  // message members
  ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_message_type_support_handle = {
  0,
  &ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mako_nolang_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mako_nolang_interfaces, srv, ArduinoCommand_Response)() {
  if (!ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_message_type_support_handle.typesupport_identifier) {
    ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ArduinoCommand_Response__rosidl_typesupport_introspection_c__ArduinoCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mako_nolang_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mako_nolang_interfaces/srv/detail/arduino_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mako_nolang_interfaces__srv__detail__arduino_command__rosidl_typesupport_introspection_c__ArduinoCommand_service_members = {
  "mako_nolang_interfaces__srv",  // service namespace
  "ArduinoCommand",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mako_nolang_interfaces__srv__detail__arduino_command__rosidl_typesupport_introspection_c__ArduinoCommand_Request_message_type_support_handle,
  NULL  // response message
  // mako_nolang_interfaces__srv__detail__arduino_command__rosidl_typesupport_introspection_c__ArduinoCommand_Response_message_type_support_handle
};

static rosidl_service_type_support_t mako_nolang_interfaces__srv__detail__arduino_command__rosidl_typesupport_introspection_c__ArduinoCommand_service_type_support_handle = {
  0,
  &mako_nolang_interfaces__srv__detail__arduino_command__rosidl_typesupport_introspection_c__ArduinoCommand_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mako_nolang_interfaces, srv, ArduinoCommand_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mako_nolang_interfaces, srv, ArduinoCommand_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mako_nolang_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mako_nolang_interfaces, srv, ArduinoCommand)() {
  if (!mako_nolang_interfaces__srv__detail__arduino_command__rosidl_typesupport_introspection_c__ArduinoCommand_service_type_support_handle.typesupport_identifier) {
    mako_nolang_interfaces__srv__detail__arduino_command__rosidl_typesupport_introspection_c__ArduinoCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mako_nolang_interfaces__srv__detail__arduino_command__rosidl_typesupport_introspection_c__ArduinoCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mako_nolang_interfaces, srv, ArduinoCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mako_nolang_interfaces, srv, ArduinoCommand_Response)()->data;
  }

  return &mako_nolang_interfaces__srv__detail__arduino_command__rosidl_typesupport_introspection_c__ArduinoCommand_service_type_support_handle;
}
