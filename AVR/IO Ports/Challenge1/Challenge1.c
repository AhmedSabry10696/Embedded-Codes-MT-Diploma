/*
* two switches increase/decrease 7 seg
* 1st switch for 7 seg increament with no action when becomes 9
* 2nd switch for 7 seg decreament with no action when becomes 0
* switches is pull down
* fcpu  --> 1 MHZ
*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	unsigned char num = 0;      /* to print it on 7 seg */
	DDRA  = DDRA & (~(1<<PA0)); /* configure pin 0 of PORTA to be input pin */
	DDRA  = DDRA & (~(1<<PA1)); /* configure pin 1 of PORTA to be input pin */
	DDRD |= 0x0F; /* configure least 4 pins of PORTD as output pins */
	
	/* initialize the 7-segment to 0 */
	PORTD &= ~((1<<PD0) | (1<<PD1) | (1<<PD2) | (1<<PD3));
	
    while(1)
    {
		if(PINA & (1<<PA0)) /* check if the first push button is pressed or not */
		{
			_delay_ms(30);  /* debouncing delay */

			if(PINA & (1<<PA0))
			{
				if((PORTD & 0x0F) != 9)
				{
					num++;
					PORTD = (PORTD & 0xF0) | (num & 0x0F); 
				}
			}
			while(PINA & (1<<PA0)){}  /* wait until the switch is released */
		}
		
		else if(PINA & (1<<PA1))  /* check if the second push button is pressed or not */
		{
			_delay_ms(30);		/* debouncing delay */

			if(PINA & (1<<PA1))
			{
				if((PORTD & 0x0F) != 0)
				{
					num--;
					PORTD = (PORTD & 0xF0) | (num & 0x0F);
				}
			}
			while(PINA & (1<<PA1)){}  /* wait until switch released */
		}				       
    }
}
