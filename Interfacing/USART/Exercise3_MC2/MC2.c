/**
 * @file MC2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief uart and lcd example
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "uart.h"
#include "lcd.h"

#define M2_READY 0x10

int main(void)
{
	uint8 Str[20];

	/* initialize UART driver */
	UART_init(); 	

	/* initialize LCD driver */
	LCD_init(); 	

	/* MC2 is ready */
	UART_sendByte(M2_READY); 	

	/* receive the string */
	UART_receiveString(Str); 	

	/* display the string on LCD */
	LCD_displayString(Str); 	

	for(;;)
    {
		/* do nothing */
    }
}
