/**
 * @file MC1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief send key number from keypad through uart
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "keypad.h"
#include "uart.h"

int main(void)
{
	uint8 key;

	/* uart initialization */
	UART_init();
    
	for(;;)
    {
		/* get the pressed key */
		key = KeyPad_getPressedKey();

		/* send the pressed key to the second MC using uart */ 
		UART_sendByte(key); 
	
		/* delay for each press */
		_delay_ms(500);
    }
}
