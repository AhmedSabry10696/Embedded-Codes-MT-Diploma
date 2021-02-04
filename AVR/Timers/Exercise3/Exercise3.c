/*
* timer 0 compare mode to generate 2 KHZ clock
* Duty cycle 50%  |--|__|--|__|
* FCPU --> 1 MHZ
* no prescaler
*/
#include <avr/io.h>

/*
* T for out clock = 1/2 KHZ = 500 us
* so half of T = 250 us (50% duty cycle)
* T for timer = 1/1 MHZ = 1 us 
*/
void Timer0_CTC_Square_Wave_Init(void)
{
	TCNT0 = 0; /* initial value 0 */
	OCR0 = 250; /* compare value */
	DDRB = DDRB | (1<<PB3); /* OC0 Pin as output pin */

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
