/**
 * @file temp_sensor.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief LM35 temperature sensor
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "adc.h"
#include "lcd.h"

int main(void)
{
	uint32 ADC_value;

	/* initialize LCD driver */
	LCD_init(); 

	/* initialize ADC driver */
	ADC_init(); 

	/* clear LCD at the beginning */
	LCD_clearScreen(); 
	
	/* display this string "Temp =    " only once at LCD */
	LCD_displayString("Temp = ");
	LCD_goToRowColumn(0,10);
	LCD_displayCharacter('C');
	
    for(;;)
    {
		/* display the number every time at this position */
		LCD_goToRowColumn(0,7); 

		/* read channel two where the temp sensor is connect value (0:1023)*/
		ADC_value = ADC_readChannel(2); 

		/***************************************** 
		 *	5(v) -----> 1023
		 * x(v) -----> ADC_value
		 * ---------------------------------------
		 * x(v) = (ADC_value*5)/1023 (v)
		 * ---------------------------------------
		 * temperature c:
		 * ---------------------------------------
		 * 10 (mv) -----> 1(C) Sensor datasheet
		 *  x (v)  -----> T (C)
		 * ---------------------------------------
		 *  T (C) = (x*1) / (10/1000) = x * 100     
		******************************************/

		/* calculate the temp from the ADC value*/
		ADC_value = (ADC_value*500)/(1023); 

		/* display the temp on LCD screen */
		LCD_intgerToString(ADC_value); 
    }
}
