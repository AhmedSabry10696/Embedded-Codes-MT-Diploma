/**
 * @file MC2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief receive number from uart and display it on LCD
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "uart.h"
#include "lcd.h"

int main(void)
{
	uint8 key;

	/* uart initialization */
	UART_init();

	/* lcd initialization */
	LCD_init();
    
	for(;;)
    {
		/* receive the pressed key from uart */
		key = UART_recieveByte();	

		if( (key >= 0) && (key <= 9) )
		{
			/* display the pressed keypad switch */
			LCD_intgerToString(key); 	
		}
		else
		{
			/* display the pressed keypad switch */
			LCD_displayCharacter(key); 	
		}		 
    }
}
