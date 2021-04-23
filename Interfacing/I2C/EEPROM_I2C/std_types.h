/**
 * @file STD_TYPES.h
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief standard types file
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
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

typedef enum
{
    E_OK, E_NOK, PENDING
} ERROR_t;

typedef union
{
	unsigned char Data;
	struct
	{
		unsigned char BIT0:1;
		unsigned char BIT1:1;
		unsigned char BIT2:1;
		unsigned char BIT3:1;
		unsigned char BIT4:1;
		unsigned char BIT5:1;
		unsigned char BIT6:1;
		unsigned char BIT7:1;
	}BITS; /* share the same values that is in Data var */
}Reg_8bit;

#endif /* STD_TYPE_H_ */
