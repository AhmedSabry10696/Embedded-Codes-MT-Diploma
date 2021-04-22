/**
 * @file keypad.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief keypad driver
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "keypad.h"

uint8 KeyPad_getPressedKey(void)
{
	uint8 col,row;
	while(1)
	{
		 /* loop for columns */
		for( col=0 ; col<N_col ; col++)
		{ 
			/* 
			 * each time only one of the column pins will be output and 
			 * the rest will be input pins include the row pins 
			 */ 
			KEYPAD_PORT_DIR = (0b00010000<<col); 
			
			/* 
			 * clear the output pin column in this trace and enable the internal 
			 * pull up resistors for the rows pins
			 */ 
			KEYPAD_PORT_OUT = (~(0b00010000<<col)); 

			/* loop for rows */
			for(row=0 ; row<N_row ; row++)
			{
				/* if the switch is press in this row */ 
				if(BIT_IS_CLEAR(KEYPAD_PORT_IN,row))
				{
					#if (N_col == 3)  
						return KeyPad_4x3_adjustKeyNumber((row*N_col)+col+1); 
					#elif (N_col == 4)
						return KeyPad_4x4_adjustKeyNumber((row*N_col)+col+1);
					#endif				
				}
			}
		}
	}	
}

#if (N_col == 3) 

uint8 KeyPad_4x3_adjustKeyNumber(uint8 button_number)
{
	switch(button_number)
	{
		case 10: return '*'; /* ASCII Code of '*' */
				 break;
		case 11: return 0;
				 break;		
		case 12: return '#'; /* ASCII Code of '#' */
				 break;
		default: return button_number;								 						
	}
} 


#elif (N_col == 4)
 
uint8 KeyPad_4x4_adjustKeyNumber(uint8 button_number)
{
	switch(button_number)
	{
		case 1: return 7; 
				break;
		case 2: return 8; 
				break;
		case 3: return 9; 
				break;
		case 4: return 'A'; /* ASCII Code of 'A' */
				break;
		case 5: return 4; 
				break;
		case 6: return 5;
				break;
		case 7: return 6; 
				break;
		case 8: return 'B'; /* ASCII Code of 'B' */
				break;		
		case 9: return 1; 
				break;
		case 10: return 2; 
				break;
		case 11: return 3; 
				break;
		case 12: return 'C'; /* ASCII Code of 'C' */
				break;
		case 13: return '*';  /* ASCII of '*' */
				break;			
		case 14: return 0; 
				break;
		case 15: return '#'; /* ASCII Code of '#' */
				break;
		case 16: return 'D'; /* ASCII Code of 'D' */
				break;
		default: return button_number;								 						
	}
} 

#endif