/*
* button used to toggle led state
* switch use internal pull up resistors
* led is negative logic
* fcpu --> 1 MHz
*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	unsigned char button = 0;
	DDRB = DDRB & (~(1<<PB0));  /* configure pin 0 of PORTB to be input pin */
	PORTB |= (1<<PB0);          /* activate the internal pull up resistor of PB0 */
	
	DDRC = DDRC | (1<<PC0);    /* configure pin 0 of PORTC to be output pin */
	PORTC = PORTC | (1<<PC0);  /* led is off at the beginning (negative logic) */
	
    while(1)
    {

		if(!(PINB & (1<<PB0)))     /* check if the push button is pressed or not */
		{
			_delay_ms(30);        /* second check due to switch de-bouncing (20:30 ms) */

			if(!(PINB & (1<<PB0)))
			{
				if(button == 0) /* used because if switch is stilled pressed */
 				{
					PORTC = PORTC ^ (1<<PC0); /* toggle the led */
					button = 1;					
				}
			}
		}
		else button = 0;
    }
}
