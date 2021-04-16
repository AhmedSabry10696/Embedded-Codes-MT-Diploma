/**
 * @file Exercise3.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief button with internal pull up resistor toggle negative logic led
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
	/* button state variable */
	unsigned char button = 0;

	/* configure pin 0 of PORTB to be input pin */
	DDRB = DDRB & (~(1<<PB0));  

	/* activate the internal pull up resistor of PB0 */
	PORTB |= (1<<PB0);          
	
	/* configure pin 0 of PORTC to be output pin */
	DDRC = DDRC | (1<<PC0);    

	/* led is off at the beginning (negative logic) */
	PORTC = PORTC | (1<<PC0);  
	
    while(1)
    {
		/* check if the push button is pressed or not */
		if(!(PINB & (1<<PB0)))     
		{
			/* second check due to switch de-bouncing (20:30 ms) */
			_delay_ms(30);        

			if(!(PINB & (1<<PB0)))
			{
				/* used because if switch is stilled pressed */
				if(button == 0) 
 				{
					/* toggle the led */
					PORTC = PORTC ^ (1<<PC0); 
					button = 1;					
				}
			}
		}
		else button = 0;
    }
}
