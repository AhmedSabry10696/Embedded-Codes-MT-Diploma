/*
* confugire timer 0 to generate 4 KHZ clock
* duty cycle = 50 %
* F_CPU = 8 Mhz
* TPWM = 1/ 4 KHZ = 250 us for 50 duty cycle 125 us
* 125 us -----------> 128
* N/ 8 MHZ ---------> 1
* N = 8
*/ 

#include <avr/io.h>
#include <util/delay.h>

void Timer0_PWM_Init(unsigned char set_duty_cycle){
	
	TCNT0 = 0; // Timer initial value
	OCR0  = set_duty_cycle;  // compare value
	DDRB  = DDRB | (1<<PB3); // set OC0 as output pin --> pin where the PWM signal is generated from MC.

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
    Timer0_PWM_Init(128); // 50% duty cycle
	
	while(1)
	{
		// do no thing
	}
}
