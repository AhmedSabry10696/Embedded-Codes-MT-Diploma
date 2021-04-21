/**
 * @file Exercise1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief uart example
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "uart.h"

int main(void)
{
	uint8 Str[20];
	uint8 data;
	UART_init();

	for(;;)
    { 
		/* Receive Byte from Terminal1 */ 
		/* data = UART_recieveByte(); */

		/* Resend the received byte to Terminal */
		/* UART_sendByte(data); */
		
		/* Receive String from Terminal */
		UART_receiveString(Str);

		/* Resend the string to Terminal */ 
		UART_sendString(Str); 
    }
}
