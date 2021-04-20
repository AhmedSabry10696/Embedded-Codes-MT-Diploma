/**
 * @file Exercise3.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief LCD driver example
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

	LCD_displayString("Welcome To LCD");
	LCD_displayStringRowColumn(1,0,"4 Bits Data Mode");
	
    for(;;)
    {
		/* do nothing */
    }
	
}
