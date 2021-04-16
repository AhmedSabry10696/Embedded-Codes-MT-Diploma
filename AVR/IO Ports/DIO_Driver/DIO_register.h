/**
 * @file DIO_register.h
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief DIO registers addresses
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _DIO_REG_H
#define _DIO_REG_H

/* Group A Registers */
#define PORTA_Reg  *((volatile uint8*)0x3B)
#define DDRA_Reg   *((volatile uint8*)0x3A)
#define PINA_Reg   *((volatile uint8*)0x39)

/* Group B Registers */
#define PORTB_Reg  *((volatile uint8*)0x38)
#define DDRB_Reg   *((volatile uint8*)0x37)
#define PINB_Reg   *((volatile uint8*)0x36)

/* Group C Registers */
#define PORTC_Reg  *((volatile uint8*)0x35)
#define DDRC_Reg   *((volatile uint8*)0x34)
#define PINC_Reg   *((volatile uint8*)0x33)

/* Group D Registers */
#define PORTD_Reg  *((volatile uint8*)0x32)
#define DDRD_Reg   *((volatile uint8*)0x31)
#define PIND_Reg   *((volatile uint8*)0x30)


#endif
