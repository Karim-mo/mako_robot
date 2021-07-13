// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mako_nolang_interfaces:srv/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__MOTOR_CONTROL__FUNCTIONS_H_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__MOTOR_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mako_nolang_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mako_nolang_interfaces/srv/detail/motor_control__struct.h"

/// Initialize srv/MotorControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mako_nolang_interfaces__srv__MotorControl_Request
 * )) before or use
 * mako_nolang_interfaces__srv__MotorControl_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
bool
mako_nolang_interfaces__srv__MotorControl_Request__init(mako_nolang_interfaces__srv__MotorControl_Request * msg);

/// Finalize srv/MotorControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
void
mako_nolang_interfaces__srv__MotorControl_Request__fini(mako_nolang_interfaces__srv__MotorControl_Request * msg);

/// Create srv/MotorControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mako_nolang_interfaces__srv__MotorControl_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
mako_nolang_interfaces__srv__MotorControl_Request *
mako_nolang_interfaces__srv__MotorControl_Request__create();

/// Destroy srv/MotorControl message.
/**
 * It calls
 * mako_nolang_interfaces__srv__MotorControl_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
void
mako_nolang_interfaces__srv__MotorControl_Request__destroy(mako_nolang_interfaces__srv__MotorControl_Request * msg);


/// Initialize array of srv/MotorControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * mako_nolang_interfaces__srv__MotorControl_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
bool
mako_nolang_interfaces__srv__MotorControl_Request__Sequence__init(mako_nolang_interfaces__srv__MotorControl_Request__Sequence * array, size_t size);

/// Finalize array of srv/MotorControl messages.
/**
 * It calls
 * mako_nolang_interfaces__srv__MotorControl_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
void
mako_nolang_interfaces__srv__MotorControl_Request__Sequence__fini(mako_nolang_interfaces__srv__MotorControl_Request__Sequence * array);

/// Create array of srv/MotorControl messages.
/**
 * It allocates the memory for the array and calls
 * mako_nolang_interfaces__srv__MotorControl_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
mako_nolang_interfaces__srv__MotorControl_Request__Sequence *
mako_nolang_interfaces__srv__MotorControl_Request__Sequence__create(size_t size);

/// Destroy array of srv/MotorControl messages.
/**
 * It calls
 * mako_nolang_interfaces__srv__MotorControl_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
void
mako_nolang_interfaces__srv__MotorControl_Request__Sequence__destroy(mako_nolang_interfaces__srv__MotorControl_Request__Sequence * array);

/// Initialize srv/MotorControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mako_nolang_interfaces__srv__MotorControl_Response
 * )) before or use
 * mako_nolang_interfaces__srv__MotorControl_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
bool
mako_nolang_interfaces__srv__MotorControl_Response__init(mako_nolang_interfaces__srv__MotorControl_Response * msg);

/// Finalize srv/MotorControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
void
mako_nolang_interfaces__srv__MotorControl_Response__fini(mako_nolang_interfaces__srv__MotorControl_Response * msg);

/// Create srv/MotorControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mako_nolang_interfaces__srv__MotorControl_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
mako_nolang_interfaces__srv__MotorControl_Response *
mako_nolang_interfaces__srv__MotorControl_Response__create();

/// Destroy srv/MotorControl message.
/**
 * It calls
 * mako_nolang_interfaces__srv__MotorControl_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
void
mako_nolang_interfaces__srv__MotorControl_Response__destroy(mako_nolang_interfaces__srv__MotorControl_Response * msg);


/// Initialize array of srv/MotorControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * mako_nolang_interfaces__srv__MotorControl_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
bool
mako_nolang_interfaces__srv__MotorControl_Response__Sequence__init(mako_nolang_interfaces__srv__MotorControl_Response__Sequence * array, size_t size);

/// Finalize array of srv/MotorControl messages.
/**
 * It calls
 * mako_nolang_interfaces__srv__MotorControl_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
void
mako_nolang_interfaces__srv__MotorControl_Response__Sequence__fini(mako_nolang_interfaces__srv__MotorControl_Response__Sequence * array);

/// Create array of srv/MotorControl messages.
/**
 * It allocates the memory for the array and calls
 * mako_nolang_interfaces__srv__MotorControl_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
mako_nolang_interfaces__srv__MotorControl_Response__Sequence *
mako_nolang_interfaces__srv__MotorControl_Response__Sequence__create(size_t size);

/// Destroy array of srv/MotorControl messages.
/**
 * It calls
 * mako_nolang_interfaces__srv__MotorControl_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mako_nolang_interfaces
void
mako_nolang_interfaces__srv__MotorControl_Response__Sequence__destroy(mako_nolang_interfaces__srv__MotorControl_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__MOTOR_CONTROL__FUNCTIONS_H_
