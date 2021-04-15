/** @file    STD_TYPE.h
 ** @brief   Standard Types header file for this program 
 ** @author  Ahmed Sabry
 ** @date    22/1/2014
 ** @version 1.0
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

typedef unsigned char uint8;
typedef signed char sint8;

typedef unsigned short uint16;
typedef signed short sint16;

typedef unsigned long uint32;
typedef signed long sint32;

typedef float  f32;
typedef double f64;

typedef enum {E_OK, E_NOK, PENDING} ERROR_t;

#endif /* STD_TYPE_H_ */
