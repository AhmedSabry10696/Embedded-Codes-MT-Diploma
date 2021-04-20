/**
 * @file Challenge.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief Display pressed key from keypad to LCD screen
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "lcd.h"
#include "keypad.h"

int main(void)
{
	uint8 key;
	LCD_init();
	LCD_displayStringRowColumn(0,0,"Challenge");
	LCD_displayStringRowColumn(1,0,"Keypad 4x4");
	LCD_displayStringRowColumn(2,0,"LCD");
	LCD_goToRowColumn(3,0);
	
    while(1)
    {		
		/* get the pressed key */
		key = KeyPad_getPressedKey(); 
		if((key <= 9) && (key >= 0))
		{
			/* display the pressed keypad switch */
			LCD_intgerToString(key); 
		}
		else
		{
			/* display the pressed keypad switch */ 
			LCD_displayCharacter(key); 
		}
		/* Press time */
		_delay_ms(500); 
    }
}
