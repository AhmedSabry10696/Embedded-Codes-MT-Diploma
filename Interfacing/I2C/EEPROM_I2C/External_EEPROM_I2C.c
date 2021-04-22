/**
 * @file External_EEPROM_I2C.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief External EEPROM
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"External_EEPROM.h"

int main(void)
{
	uint8 val = 0;
	
	/* portd output */
	DDRD  = 0xFF;

	/* portd off at the beginning */
	PORTD = 0x00;

	/* Init EEPROM */
	EEPROM_Init();

	/* Write 0x0F in the external EEPROM */
	EEPROM_Write_Byte(0x0311, 0x0F); 

	_delay_ms(10);

	/* Read 0x0F from the external EEPROM */
	EEPROM_Read_Byte(0x0311, &val);  
	
	for(;;)
	{
		/* out the read value from the external EEPROM */
		PORTD = val; 
	}
	
	return 0;
}
