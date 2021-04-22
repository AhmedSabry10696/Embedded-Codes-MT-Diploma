/**
 * @file MC2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief spi example 2
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "spi.h"
#include "lcd.h"

int main(void)
{
	/* array to receive string data */
	uint8 str[20];
	
	/* lcd initialization */
	LCD_init();
	
	/* Initialize Salve SPI */
	SPI_initSlave();
	
	/* Receive String from MC1 */
	SPI_ReceiveString(str);
	
	/* Display the received string on the LCD display */
	LCD_displayString(str);
    
	for(;;)
    {
		/* do nothing */	
    }
}

