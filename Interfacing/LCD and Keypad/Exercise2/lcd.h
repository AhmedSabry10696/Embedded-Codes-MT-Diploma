/**
 * @file lcd.h
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief LCD configurations header file
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef LCD_H_
#define LCD_H_

#include "STD_TYPES.h"
#include "COMMON_MACROS.h"
#include "MICRO_CONFIG.h"

/* LCD HW Pins */
#define RS PD4
#define RW PD5
#define E  PD6
#define LCD_CTRL_PORT PORTD
#define LCD_CTRL_PORT_DIR DDRD
#define LCD_DATA_PORT PORTC
#define LCD_DATA_PORT_DIR DDRC

/* LCD Commands */
#define CLEAR_COMMAND 0x01
#define TWO_LINE_LCD_Eight_BIT_MODE 0x38
#define CURSOR_OFF 0x0C
#define CURSOR_ON 0x0E
#define SET_CURSOR_LOCATION 0x80 

/**
 * @brief send command to LCD
 * 
 * @param command command to send
 */
void LCD_sendCommand(uint8 command);

/**
 * @brief display character on LCD
 * 
 * @param data character to display
 */
void LCD_displayCharacter(uint8 data);

/**
 * @brief display string on LCD 
 * 
 * @param Str string to display 
 */
void LCD_displayString(const char *Str);

/**
 * @brief LCD initialization
 * 
 */
void LCD_init(void);

/**
 * @brief clear LCD display
 * 
 */
void LCD_clearScreen(void);

/**
 * @brief display string on LCD at specific row and column
 * 
 * @param row row number to display string on
 * @param col column number to display string on
 * @param Str string to display on LCD
 */
void LCD_displayStringRowColumn(uint8 row,uint8 col,const char *Str);

/**
 * @brief go to specific row and column on LCD display 1*16 or 2*16 or 4*16 
 * 
 * @param row row number
 * @param col column number
 */
void LCD_goToRowColumn(uint8 row,uint8 col);

/**
 * @brief convert int number to string and display on LCD
 * 
 * @param data integer number to display
 */
void LCD_intgerToString(int data);

#endif /* LCD_H_ */
