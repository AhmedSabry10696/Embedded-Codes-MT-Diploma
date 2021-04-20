/**
 * @file Exercise1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief display pressed key from keypad on 7 segment
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "keypad.h"

int main(void)
{
	uint8 key;

	/* 7-segment pins as output pins */
	DDRC  |= 0x0F; 

	/* 7-segment displays Zero at the beginning */
	PORTC  = 0;    

    while(1)
    {
		/* get the pressed button from keypad */
        key = KeyPad_getPressedKey(); 
	    
		if((key >= 0) && (key <= 9))
		{ 
			 PORTC = key;
		}						
    }
}
