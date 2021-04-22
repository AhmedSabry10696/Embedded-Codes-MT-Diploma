/**
 * @file MC1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief spi challenge
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "keypad.h"
#include "spi.h"

int main(void)
{
	uint8 key;

	/* intitialize Master MC */
	SPI_initMaster(); 
    
	for(;;)
    {
		/* get the pressed key */
		key = KeyPad_getPressedKey();

		/* send the pressed key to the second MC using spi */ 
		SPI_sendByte(key); 
		
		/* press time is 500msec */
		_delay_ms(500); 
    }
}


