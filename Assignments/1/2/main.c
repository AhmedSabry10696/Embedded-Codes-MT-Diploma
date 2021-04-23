/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief program for converting temperature from Celsius to Fahrenheit 
 *        F = C x 9/5 + 32
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main(void)
{
    float temp_cel,temp_fah;
   
    printf("Please enter the temperature value in Celsius : ");
    scanf("%f",&temp_cel);

    temp_fah=((temp_cel*9)/5)+32;
    printf("\nThe temperature in Fahrenheit is : %f",temp_fah);
    
    return 0;
}
