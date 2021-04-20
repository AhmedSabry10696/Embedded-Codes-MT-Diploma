/**
 * @file adc.h
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief ADC diver header file
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ADC_H_
#define ADC_H_

#include "MICRO_CONFIG.h"
#include "STD_TYPES.h"
#include "COMMON_MACROS.h"

/**
 * @brief ADC initialization
 * 
 */
void ADC_init(void);

/**
 * @brief read analog data from a certain ADC channel
 *  
 * @param channel_num channel number  0:7
 * @return uint16 ADC value
 */
uint16 ADC_readChannel(uint8 channel_num);

#endif /* ADC_H_ */
