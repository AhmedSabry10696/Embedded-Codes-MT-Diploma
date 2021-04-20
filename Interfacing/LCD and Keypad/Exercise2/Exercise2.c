/**
 * @file Exercise2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief LCD example
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "lcd.h"

int main(void)
{
	/* initialize LCD */
	LCD_init();
	LCD_displayStringRowColumn(0,2,"My LCD Driver");
	LCD_displayStringRowColumn(1,3,"Embedded WS");
	
	/* wait four seconds */
	_delay_ms(4000); 

	/* clear the LCD display */
	LCD_clearScreen();
	
	LCD_displayString("Interf. Course");
	LCD_displayStringRowColumn(1,5,"Group ");
	LCD_intgerToString(15);
	
    for(;;)
    {
		/* do nothing */
    }
	
}
