/**
 * @file Challenge1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief timer 0 normal mode to icreament 7 seg each 1 second and overflow after 9
	      prescaler --> 256, FCPU --> 8 MHZ
 * @version 0.1
 * @date 2021-04-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define NUMBER_OF_OVERFLOWS_PER_SECOND 123

/* global variable */
unsigned char tick=0;

/**
 * @brief clock = 8 Mhz and prescale= 256 every count will take 32 us
 * so put initial timer counter=0  0 --> 255 (255 * 32us = 8.16 ms per overflow)
 * so we need timer to overflow 123 times to get a 1 second 
 * 
 */
void Timer_init_Normal_Mode(void)
{
	/* timer initial value */
	TCNT0 = 0;

	/* enable timer overflow interrupt */
	TIMSK = (1<<TOIE0); 
	
	/* configure the timer
	 * 1. Non PWM mode FOC0=1
	 * 2. Normal Mode WGM01=0 & WGM00=0
	 * 3. Normal Mode COM00=0 & COM01=0 
	 * 4. clock = F_CPU/256 CS00=0 CS01=0 CS02=1
	 */
	TCCR0 = (1<<FOC0) | (1<<CS02);
}

/**
 * @brief Construct a new ISR object
 * 
 */
ISR(TIMER0_OVF_vect)
{
	tick++;
	if(tick == NUMBER_OF_OVERFLOWS_PER_SECOND)
	{
		tick=0;
		if(PORTC == 9)
			PORTC=0;
		else
			PORTC++;
	}	
}

void main(void)
{
	/* Configure all pins in PORTC as output pins for 7 segment */
	DDRC  = 0xFF;   

	/* Initialize the 7-seg display zero at the beginning */
	PORTC = 0;       

	/* Enable global interrupts in MC */
	SREG |= (1<<7);  

	/* start the timer */
	Timer_init_Normal_Mode(); 

    while(1)
    {			
    	/* do no thing */
    }
}
