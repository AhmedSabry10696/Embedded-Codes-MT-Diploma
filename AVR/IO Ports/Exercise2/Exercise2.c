/**
 * @file Exercise2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief two switches pull down controls two Leds postive logic
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

int main(void)
{
	/* configure pin 0 of PORTB to be input pin */
	DDRB = DDRB & (~(1<<PB0)); 

	/* configure pin 1 of PORTB to be input pin */
	DDRB = DDRB & (~(1<<PB1)); 

	/* configure pin 0 of PORTC to be output pin */
	DDRC = DDRC | (1<<PC0);  
	/* configure pin 1 of PORTC to be output pin */  
	DDRC = DDRC | (1<<PC1);    
	
	/* initialize leds */

	/* led1 is off at the beginning */
	PORTC = PORTC & (~(1<<PC0)); 
	 /* led2 is off at the beginning */ 
	PORTC = PORTC & (~(1<<PC1)); 
	
    while(1)
    {
		/* Check if the first switch is pressed */
    	if(PINB & (1<<PB0)) 
    	{
			/* LED1 ON */
    		PORTC |= (1<<PC0); 
    	}
    	else
    	{
			 /* LED1 OFF */
    		PORTC &= (~(1<<PC0));
    	}

		/* Check if the second switch is pressed */
    	if(PINB & (1<<PB1)) 
    	{
			/* LED2 ON */
    		PORTC |= (1<<PC1); 
    	}
    	else
    	{
			/* LED2 OFF */
    		PORTC &= (~(1<<PC1)); 
    	}
    }
}
