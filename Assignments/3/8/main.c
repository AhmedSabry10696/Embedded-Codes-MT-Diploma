/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  add two complex numbers by passing two struct to function and display the result
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

typedef struct complex
{
    float real;
    float imag;
} complex;

/**
 * @brief /* function add two complex numbers
 * 
 * @param n1 first number
 * @param n2 second number
 * @return complex sum of two complex numbers
 */
complex add(complex n1,complex n2);

int main()
{
    complex n1, n2, temp;

    printf("For 1st complex number \n");

    /* take 1st struct data */
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("\nFor 2nd complex number \n");

    /* take 2nd struct data */
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n2.real, &n2.imag);

    /* calculate the sum */
    temp = add(n1, n2);

    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);

    return 0;
}

complex add(complex n1, complex n2)
{
      complex temp;

      temp.real = n1.real + n2.real;
      temp.imag = n1.imag + n2.imag;

      return(temp);
}
