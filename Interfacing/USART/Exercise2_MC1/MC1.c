/**
 * @file MC1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief uart and keypad example
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "uart.h"
#include "keypad.h"

int main(void)
{
	uint8 key_num;
	UART_init();

    for(;;)
    {
         key_num = KeyPad_getPressedKey();

		 if((key_num >= 0) && (key_num <= 7))
		 {
			 UART_sendByte(key_num);
		 }
		 /* new button every 500 ms */
		 _delay_ms(500); 			 
    }
}
