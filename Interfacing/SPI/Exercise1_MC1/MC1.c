/**
 * @file MC1.c
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
	/* master initialization */
	SPI_initMaster();

	/* configure PA0 as input pin for button */
	CLEAR_BIT(DDRA,PA0); 

    for(;;)
    {
		/* if switch is pressed pull down switch */
		if(BIT_IS_SET(PINA,PA0)) 
		{
			SPI_sendByte(SWITCH_PRESSED);
		}
		else
		{
			SPI_sendByte(SWITCH_NOT_PRESSED);
		}						
    }
}
