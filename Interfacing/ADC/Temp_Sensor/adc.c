/**
 * @file adc.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief ADC driver
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "adc.h"

void ADC_init(void)
{
	/* ADMUX Register Bits Description:
	 * REFS1:0 = 00 to choose to connect external reference voltage by input this voltage through AREF pin
	 * ADLAR   = 0 right adjusted for adc data registers ------xx xxxxxxxx
	 * MUX4:0  = 00000 to choose channel (0) as initialization
	 */
	ADMUX = 0;

	/* ADCSRA Register Bits Description:
	 * ADEN    = 1 Enable ADC
	 * ADIE    = 0 Disable ADC Interrupt
	 * ADPS2:0 = 011 to choose ADC_Clock= F_CPU/8 = 1Mhz/8= 125Khz --> ADC must operate in range 50-200Khz
	 */
	ADCSRA = (1<<ADEN) | (1<<ADPS1) | (1<<ADPS0);
}

uint16 ADC_readChannel(uint8 channel_num)
{
	/* channel number must be from (0 --> 7)  0x0000 0111 */
	channel_num &= 0x07; 

	/* clear first 5 bits in the ADMUX (channel number) before set the required channel 0x1110 0000 */
	ADMUX &= 0xE0; 

	/* choose the correct channel by setting the channel number in MUX4:0 bits */
	ADMUX = ADMUX | channel_num;

	/* start conversion write '1' to ADSC */ 
	SET_BIT(ADCSRA,ADSC); 

	/* wait for conversion to complete ADIF becomes '1' */
	while(BIT_IS_CLEAR(ADCSRA,ADIF)); 
	
	/* clear ADIF by write '1' to it :) */
	SET_BIT(ADCSRA,ADIF); 

	/* return the data register */
	return ADC; 
}
