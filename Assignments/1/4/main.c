/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief program calculates area and circumference
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

#define PI 3.14

int main()
{
    float radious,area,circumference;

    printf("please enter the radious of the circle:");
    scanf("%f",&radious);

    area = PI*radious*radious;
    circumference = 2*PI*radious;
    
    printf("Circle Area=%f\nCircle Circumference=%f\n",area,circumference);
    
    return 0;
}
