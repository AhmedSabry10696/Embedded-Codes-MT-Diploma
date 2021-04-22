/**
 * @file spi.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief spi driver implementation
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "spi.h"

void SPI_initMaster(void) 
{
	/******** Configure SPI Master Pins *********
	 * SS(PB4)   --> Output 
	 * MOSI(PB5) --> Output 
	 * MISO(PB6) --> Input
	 * SCK(PB7) --> Output
	 ********************************************/
	DDRB = DDRB | (1<<PB4);
	DDRB = DDRB | (1<<PB5);
	DDRB = DDRB & ~(1<<PB6);
	DDRB = DDRB | (1<<PB7);
	
	/* enable SPI + enable Master + choose SPI clock = Fosc/4 */
	SPCR = (1<<SPE) | (1<<MSTR);
}

void SPI_initSlave(void)
{ 
	/******** Configure SPI Slave Pins *********
	 * SS(PB4)   --> Input
	 * MOSI(PB5) --> Input
	 * MISO(PB6) --> Output
	 * SCK(PB7) --> Input
	 ********************************************/
	DDRB = DDRB & (~(1<<PB4));  
	DDRB = DDRB & (~(1<<PB5));
	DDRB = DDRB | (1<<PB6);
	DDRB = DDRB & (~(1<<PB7));

	/* just enable SPI + choose SPI clock = Fosc/4 */
	SPCR = (1<<SPE); 
}

void SPI_sendByte(const uint8 data) 
{

	/* send data by SPI */
	SPDR = data; 

	/* wait until SPI interrupt flag =1 (data is sent correctly) */
	while(BIT_IS_CLEAR(SPSR,SPIF)){} 
}

uint8 SPI_recieveByte(void)
{
	/* wait until SPI interrupt flag=1(data is receive correctly) */
	while(BIT_IS_CLEAR(SPSR,SPIF)){}

	/* return the received byte from SPI data register */
	return SPDR; 
}

void SPI_SendString(const uint8 *Str)
{
	uint8 i = 0;

	/* loop on string till null */
	while(Str[i] != '\0')
	{	
		/* send byte by byte */
		SPI_sendByte(Str[i]);
		i++;
	}
}

void SPI_ReceiveString(char *Str)
{
	unsigned char i = 0;

	Str[i] = SPI_recieveByte();

	/* receive till '#' */
	while(Str[i] != '#')
	{
		i++;
		Str[i] = SPI_recieveByte();
	}
	
	Str[i] = '\0';
}
