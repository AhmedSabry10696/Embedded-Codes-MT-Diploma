/**
 * @file Challenge1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief two buttons increase/decrease 7 segment number 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	 /* to print it on 7 seg */
	unsigned char num = 0;     

	/* configure pin 0 of PORTA to be input pin */
	DDRA  = DDRA & (~(1<<PA0)); 

	 /* configure pin 1 of PORTA to be input pin */
	DDRA  = DDRA & (~(1<<PA1));
	
	/* configure least 4 pins of PORTD as output pins */
	DDRD |= 0x0F; 

	/* initialize the 7-segment to 0 */
	PORTD &= ~((1<<PD0) | (1<<PD1) | (1<<PD2) | (1<<PD3));
	
    while(1)
    {
		/* check if the first push button is pressed or not */
		if(PINA & (1<<PA0)) 
		{
			/* debouncing delay */
			_delay_ms(30); 

			if(PINA & (1<<PA0))
			{
				if((PORTD & 0x0F) != 9)
				{
					num++;
					PORTD = (PORTD & 0xF0) | (num & 0x0F); 
				}
			}
			/* wait until the switch is released */
			while(PINA & (1<<PA0)){}  
		}
		
		 /* check if the second push button is pressed or not */
		else if(PINA & (1<<PA1)) 
		{
			/* debouncing delay */
			_delay_ms(30);		

			if(PINA & (1<<PA1))
			{
				if((PORTD & 0x0F) != 0)
				{
					num--;
					PORTD = (PORTD & 0xF0) | (num & 0x0F);
				}
			}
			 /* wait until switch released */
			while(PINA & (1<<PA1)){} 
		}				       
    }
}
