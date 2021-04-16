/**
 * @file Exercise1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief configure INT0 as a pull down to toggle led as a negative logic
 * @version 0.1
 * @date 2021-04-16
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <avr/interrupt.h>

/**
 * @brief Construct a new ISR object
 * 
 */
ISR(INT0_vect)                   
{
	 /* toggle led state */
	PORTC = PORTC ^ (1<<PC0);  
}

/**
 * @brief External INT0 enable and configuration function 
 * 
 */
void INT0_Init(void)           
{
	/* Disable global interrupt by clearing I-bit */
	SREG  &= ~(1<<7);        

	/* Configure INT0/PD2 as input pin */
	DDRD  &= (~(1<<PD2));      

	 /* Enable external interrupt pin INT0 */
	GICR  |= (1<<INT0);       

	/* Trigger INT0 with the raising edge pull down switch */
	MCUCR |= (1<<ISC00) | (1<<ISC01); 
	
	/* Enable global interrupt by setting I-bit */
	SREG  |= (1<<7);           
}

int main(void)
{
	 /* Enable external INT0 */
	INT0_Init();

	/* Configure pin PC0 in PORTC as output pin */
	DDRC  = DDRC | (1<<PC0);  

	/* Initialization Led is off at the beginning(Negative Logic) */
	PORTC = PORTC | (1<<PC0); 
    
	while(1)
    {
		/* do no thing */				
	}					
}
