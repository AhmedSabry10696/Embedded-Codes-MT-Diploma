/**
 * @file Exercise4.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief Application to generate a PWM signal with frequency 500 Hz 
 *		  duty cycle --> 50% and 25%, prescaller --> ?? , FCPU --> 1 MHZ 
 * 		  F_PWM = (F_CPU)/(256*N) => (10^6)/(256*N) = 500 Hz so N = 8 or use coming method
 * 		  1/FPWM = 2 ms  for duty cycle 50 need (128 tick to give 1 ms)
 * 		  1 ms ---------> 128
 * 		  N/FCPU -------> 1     so that N =~ 8
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
 * @param set_duty_cycle it can be 0:255 0--> 0% and 255--> 100% duty cycle
 */
void Timer0_PWM_Init(unsigned char set_duty_cycle)
{	
	/* Timer initial value */
	TCNT0 = 0;

	/* compare value deponding on duty cycle */
	OCR0  = set_duty_cycle; 

	/* set OC0 as output pin --> pin where the PWM signal is generated from MC */
	DDRB  = DDRB | (1<<PB3); 
	
	/* Configure timer control register 
	 * 1. Fast PWM mode FOC0=0
	 * 2. Fast PWM Mode WGM01=1 & WGM00=1
	 * 3. Clear OC0 when match occurs (non inverted mode) COM00=0 & COM01=1
	 * 4. clock = F_CPU/8 CS00=0 CS01=1 CS02=0
	 */ 
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS01);
}

void main(void)
{
	/* 50% duty cycle */
    Timer0_PWM_Init(128); 

	/* wait 5 seconds */
	_delay_ms(5000);     

	/* 25% duty cycle */ 
	Timer0_PWM_Init(64); 
	
	while(1)
	{
		/* do no thing */
	}
}
