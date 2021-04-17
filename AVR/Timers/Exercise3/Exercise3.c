/**
 * @file Exercise3.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief timer 0 compare mode to generate 2 KHZ clock
		  Duty cycle 50%  |--|__|--|__| , FCPU --> 1 MHZ, no prescaler
 * @version 0.1
 * @date 2021-04-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

/**
 * @brief T for out clock = 1/2 KHZ = 500 us
 		  so half of T = 250 us (50% duty cycle)
		  T for timer = 1/1 MHZ = 1 us 
 */
void Timer0_CTC_Square_Wave_Init(void)
{
	/* timer initial value 0 */
	TCNT0 = 0; 

	/* compare value */
	OCR0 = 250;

	/* OC0 Pin as output pin */
	DDRB = DDRB | (1<<PB3); 

	/* Configure timer control register 
	 * 1. Non PWM mode FOC0 =1
	 * 2. CTC Mode WGM01 =1 & WGM00=0
	 * 3. Toggle OC0 on compare match COM00 =1 & COM01 =0 
	 * 4. clock = CPU clock CS00 =1 CS01 =0 CS02 =0
	 */ 
	TCCR0 = (1<<FOC0) | (1<<WGM01) | (1<<COM00) | (1<<CS00);
}

void main(void)
{
	Timer0_CTC_Square_Wave_Init();

    while(1)
    {
		/* do no thing */
    }
}
