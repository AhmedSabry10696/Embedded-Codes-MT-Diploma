/**
 * @file MC2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief spi challenge
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
	uint8 key;

	/* lcd initialization */
	LCD_init();

	/* initialize salve MC */
	SPI_initSlave();
    
	for(;;)
    {
		/* receive the pressed key from spi */
		key = SPI_recieveByte();  

		/* check if the key is digit */
		if((key>=0) && (key<=9))
		{
			LCD_intgerToString(key); 
		}
		else
		{
			LCD_displayCharacter(key);
		}
    }
}


