/**
 * @file MC1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief uart example
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "uart.h"

#define M2_READY 0x10

int main(void)
{
    /* initialize UART */
	UART_init();

    /* wait until MC2 is ready */
	while(UART_recieveByte() != M2_READY){} 
	
    /* send the required string to MC2 */
    UART_sendString("I am Micro1#");       
	
    for(;;)
    {
		 /* do nothing */
    }
}
