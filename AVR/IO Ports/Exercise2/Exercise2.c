/*
* two switches (pull down) control two leds (postive logic)
* switch1 pressed led1 only on
* switch2 pressed led2 only on
* both switches pressed both leds on
* fcpu --> 8 MHZ
*/
#include <avr/io.h>

int main(void)
{
	DDRB = DDRB & (~(1<<PB0)); /* configure pin 0 of PORTB to be input pin */
	DDRB = DDRB & (~(1<<PB1)); /* configure pin 1 of PORTB to be input pin */

	DDRC = DDRC | (1<<PC0);    /* configure pin 0 of PORTC to be output pin */
	DDRC = DDRC | (1<<PC1);    /* configure pin 1 of PORTC to be output pin */
	
	/* initialize leds */
	PORTC = PORTC & (~(1<<PC0));  /* led1 is off at the beginning */
	PORTC = PORTC & (~(1<<PC1));  /* led2 is off at the beginning */
	
    while(1)
    {
    	if(PINB & (1<<PB0)) /* Check if the first switch is pressed */
    	{
    		PORTC |= (1<<PC0); /* LED1 ON */
    	}
    	else
    	{
    		PORTC &= (~(1<<PC0)); /* LED1 OFF */
    	}

    	if(PINB & (1<<PB1)) /* Check if the second switch is pressed */
    	{
    		PORTC |= (1<<PC1); /* LED2 ON */
    	}
    	else
    	{
    		PORTC &= (~(1<<PC1)); /* LED2 OFF */
    	}
    }
}
