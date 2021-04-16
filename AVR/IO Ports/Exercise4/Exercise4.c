/**
 * @file Exercise4.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief pull down button increament 7 segment number
 * @version 0.1
 * @date 2021-04-16
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h> 
/* Clock is 1Mhz by Default */
#include <util/delay.h>   

int main(void)
{
	/* var to pass it to 7 seg */
	unsigned char num = 0; 

	/* configure pin 4 of PORTD to be input pin */      
	DDRD  = DDRD & (~(1<<PD4));  

	/* configure least 4 pins of PORTC as output pins */
	DDRC |= 0x0F; 
	
	/* initialize the 7-segment */
	PORTC &= ~((1<<PC0) | (1<<PC1) | (1<<PC2) | (1<<PC3));
	
    while(1)
    {
		/* check if the push button is pressed or not */
		if( PIND & (1<<PD4) )
		{
			  /* debouncing delay */
			_delay_ms(30);

			if( PIND & (1<<PD4) )
			{
				if((PORTC & 0x0F) == 9)
				{
					/* if overflow occurs */
					num = 0;
				}
				else
				{
					/* increment 7-segment every press */
					num++;
				}
				PORTC = (PORTC & 0xF0) | (num & 0x0F);

			}
			/* wait until switch is released */
			while( PIND & (1<<PD4) ){} 
		}									   
    }
}
