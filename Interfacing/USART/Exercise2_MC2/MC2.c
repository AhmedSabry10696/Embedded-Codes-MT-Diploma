/**
 * @file MC2.c
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
	uint8 key_num;
	
	/* configure PORTC as output port */
	DDRC  = 0xFF;

	/* All leds are off */ 
	PORTC = 0;  
	
	UART_init();
	
    for(;;)
    {
		/* Receive LED number that required to be ON */
        key_num = UART_recieveByte(); 

		/* turn led on */
		PORTC = (1<<key_num); 
    }
}
