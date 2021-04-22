/**
 * @file MC2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief spi example 1
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "spi.h"

#define SWITCH_PRESSED 1
#define SWITCH_NOT_PRESSED 0

int main(void)
{
	uint8 data_received;

	/* slave initialization */
	SPI_initSlave();

	/* configure PC3 as output pin for led */
	SET_BIT(DDRC,PC3); 

	for(;;)
    {
		/* receive data from the master Micro-controller */
		data_received = SPI_recieveByte(); 
		
		if(data_received == SWITCH_PRESSED)
		{
			/* Led on */
			SET_BIT(PORTC,PC3); 
		}
		else if(data_received == SWITCH_NOT_PRESSED)
		{
			/* Led off */
			CLEAR_BIT(PORTC,PC3);
		}						
    }
}
