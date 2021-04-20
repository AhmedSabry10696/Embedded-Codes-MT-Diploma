/**
 * @file micro_config.h
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief microcontroller configurations
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef MICRO_CONFIG_H_
#define MICRO_CONFIG_H_

#ifndef F_CPU
#define F_CPU 1000000UL
#endif  

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#endif /* MICRO_CONFIG_H_ */