/* 
 * flash led every 1 second
 * fcpu --> 8 MHZ
*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = DDRD | (1<<PD6);  /* configure pin 6 in PORTD as output pin */
	PORTD |= (1<<PD6);       /* LED Off (negative logic) */

	while(1)
    {
		PORTD = PORTD & (~(1<<PD6)); /* LED On (0) */
		_delay_ms(1000);
		
		PORTD = PORTD | (1<<PD6);    /* LED off (1) */
		_delay_ms(1000);

		/************ Another Method *************
		PORTD = PORTD ^ (1<<PD6); // Toggle LED
		_delay_ms(1000);
		******************************************/
    }
}
