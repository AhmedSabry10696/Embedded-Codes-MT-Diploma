/**
 * @file keypad.h
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief keypad configurations header file
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "STD_TYPES.h"
#include "micro_config.h"
#include "COMMON_MACROS.h"

/* number of rows and columns used in keypad */
#define N_col 3
#define N_row 4

/* Keypad Port Configurations */
#define KEYPAD_PORT_OUT PORTA
#define KEYPAD_PORT_IN  PINA
#define KEYPAD_PORT_DIR DDRA 

/**
 * @brief get the pressed key index in keypad
 * 
 * @return uint8 keypad pressed key index
 */
uint8 KeyPad_getPressedKey(void);

/************* KeyPad Key Index ***************/                         
/*         Col_0    Col_1   Col_2   Col_3     */
/**********************************************/
/* row_0      1        2       3       4      */
/*	                                          */
/* row_1  	  5        6       7       8      */
/*	                                          */
/* row_2	  9        10      11      12     */
/*	                                          */
/* row_3	  13       14      15      16     */
/**********************************************/

#if (N_col == 3)
    /**
     * @brief map the pressed key index to its actual value
     *  like '*' and '#' in 4*3 keypad
     * 
     * @param button_number pressed key index
     * @return uint8 mapped keypad number
     */
    uint8 KeyPad_4x3_adjustKeyNumber(uint8 button_number);

    /********* KeyPad Key Index **********/                         
    /*         Col_0    Col_1   Col_2    */
    /*************************************/
    /* row_0      1        2       3     */
    /*	                                 */
    /* row_1  	  5        6       7     */
    /*	                                 */
    /* row_2	  9        10      11    */
    /*	                                 */
    /* row_3	  *        0       #     */
    /*************************************/

#elif (N_col == 4)
    /**
     * @brief map the pressed index to its actual value
     * like '*' and '#' in 4*4 keypad
     * 
     * @param button_number pressed key index
     * @return uint8 mapped keypad number
     */
    uint8 KeyPad_4x4_adjustKeyNumber(uint8 button_number);

    /************* KeyPad Key Index ***************/                         
    /*         Col_0    Col_1   Col_2   Col_3     */
    /**********************************************/
    /* row_0      7        8       9       A      */
    /*	                                          */
    /* row_1  	  4        5       6       B      */
    /*	                                          */
    /* row_2	  1        2       3       C      */
    /*	                                          */
    /* row_3	  *        0       #        D     */
    /**********************************************/
#endif

#endif /* KEYPAD_H_ */
