/**
 * @file Challenge2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief confugire timer 0 to generate 4 KHZ clock, duty cycle = 50 %, F_CPU = 8 Mhz
 * 		  TPWM = 1/ 4 KHZ = 250 us for 50 duty cycle 125 us
 * 		  125 us -----------> 128
 * 		  N/ 8 MHZ ---------> 1         so that --> N = 8
 * @version 0.1
 * @date 2021-04-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief PWM initialization
 * 
 * @param set_duty_cycle 
 */
void Timer0_PWM_Init(unsigned char set_duty_cycle)
{	
	/* Timer initial value */
	TCNT0 = 0; 

	/* compare value */
	OCR0  = set_duty_cycle; 

	/* set OC0 as output pin --> pin where the PWM signal is generated from MC */
	DDRB  = DDRB | (1<<PB3); 

	/* configure the timer
	 * 1. Fast PWM mode FOC0=0
	 * 2. Fast PWM Mode WGM01=1 & WGM00=1
	 * 3. Clear OC0 when match occurs (non inverted mode) COM00=0 & COM01=1
	 * 4. clock = F_CPU/8 CS00=0 CS01=1 CS02=0
	 */ 
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS01);
}

int main(void)
{
	/* 50% duty cycle */
    Timer0_PWM_Init(128); 
	
	while(1)
	{
		/* do no thing */
	}
}
