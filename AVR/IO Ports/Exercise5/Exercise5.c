/**
 * @file Exercise5.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief three pull down control DC motor connected to L293D driver
 * @version 0.1
 * @date 2021-04-16
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
int main(void)
{
	/* configure pin PA0, PA1 and PA2 as input pins */ 
	DDRA &= ~(1<<PA0);
	DDRA &= ~(1<<PA1);
	DDRA &= ~(1<<PA2);
	
	/* configure pin PC0 and PC1 as output pins */
	DDRC |= (1<<PC0);
	DDRC |= (1<<PC1);
	
	/* Motor is stop at the beginning */
	PORTC &= ~(1<<PC0);
	PORTC &= ~(1<<PC1);
	 
    while(1)
    {
		/* check if the first switch is pressed (Rotate clock wise) */
		if(PINA & (1<<PA0))
		{
			PORTC &= (~(1<<PC0));
			PORTC |= (1<<PC1);
		}
		
		/* check if the second switch is pressed (Rotate anti-clock wise) */
		else if(PINA & (1<<PA1))
		{
			PORTC |= (1<<PC0);
			PORTC &= (~(1<<PC1));	
		}
				
		/* check if the third switch is pressed (turn off the motor) */
		else if(PINA & (1<<PA2))
		{
			PORTC &= (~(1<<PC0));
			PORTC &= (~(1<<PC1));
		}				    
    }
}
