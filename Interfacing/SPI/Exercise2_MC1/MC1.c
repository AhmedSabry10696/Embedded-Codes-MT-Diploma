/**
 * @file MC1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com) 
 * @brief spi example 2
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "spi.h"

int main(void)
{
    /* Master Initialization */
	SPI_initMaster();

    /* delay until MC2 finish its initialization task */ 
	_delay_ms(50); 
	
    SPI_SendString("I am Micro1#");
    
    for(;;)
    {
        /* do nothing */
    }
}


