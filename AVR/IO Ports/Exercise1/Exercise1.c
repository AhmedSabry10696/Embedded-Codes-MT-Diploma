/**
 * @file Exercise1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief Flash led every 1 second
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
	/* configure pin 6 in PORTD as output pin */
	DDRD = DDRD | (1<<PD6);  
	
	/* LED Off (negative logic) */
	PORTD |= (1<<PD6);       

	while(1)
    {
		/* LED On (0) */
		PORTD = PORTD & (~(1<<PD6)); 
		_delay_ms(1000);
		
		/* LED off (1) */
		PORTD = PORTD | (1<<PD6);   
		_delay_ms(1000);

		/************ Another Method *************
		PORTD = PORTD ^ (1<<PD6); // Toggle LED
		_delay_ms(1000);
		******************************************/
    }
}
