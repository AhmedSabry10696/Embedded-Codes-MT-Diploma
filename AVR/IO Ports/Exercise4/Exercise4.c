/*
* switch increase the numbers appears on 7 seg and overflow after 9
* 7 seg is connected to decoder so could control using 4 lines only
* switch is pull down
* fcpu --> 1 MHZ
*/

#include <avr/io.h> 
#include <util/delay.h>         /* Clock is 1Mhz by Default */

int main(void)
{
	unsigned char num = 0;       /* for pass it to 7 seg */
	DDRD  = DDRD & (~(1<<PD4));  /* configure pin 4 of PORTD to be input pin */
	DDRC |= 0x0F; /* configure least 4 pins of PORTC as output pins */
	
	/* initialize the 7-segment */
	PORTC &= ~((1<<PC0) | (1<<PC1) | (1<<PC2) | (1<<PC3));
	
    while(1)
    {
		/* check if the push button is pressed or not */
		if( PIND & (1<<PD4) )
		{
			_delay_ms(30);  /* debouncing delay */

			if( PIND & (1<<PD4) )
			{
				if((PORTC & 0x0F) == 9)
				{
					/* if overflow occurs */
					num = 0;
					PORTC = (PORTC & 0xF0) | (num & 0x0F);
				}
				else
				{
					/* increment 7-segment every press */
					num++;
					PORTC = (PORTC & 0xF0) | (num & 0x0F);
				}
			}
			while( PIND & (1<<PD4) ){} /* wait until switch is released */
		}									   
    }
}
