/**
 * @file add_integer.h
 * @author Rithu (you@domain.com)
 * @brief Interface for Adding Two Integer Numbers with Underflow and Overflow Checks
 * @version 0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _ADD_INTEGER_H_
#define _ADD_INTEGER_H_

#include "stdio.h"
#include <limits.h>

typedef enum function_status_t
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW
}function_status_t;

/**
 * @brief Function to add 2 integer numbers
 * 
 * @param param1 [in] Operand 1 to be added
 * @param param2 [in] Operand 2 to be added
 * @param result [out] Result of add operation if success
 * @return function_status_t Result of function execution
 */

function_status_t add_integers(int param1, int param2, int* result);

#endif /* _ADD_INTEGER_H_ */