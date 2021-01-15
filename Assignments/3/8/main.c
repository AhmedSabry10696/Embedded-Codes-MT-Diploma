/*
 * Ex8.c
 * program to add two complex numbers by passing two struct to function and display the result
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

typedef struct complex
{
    float real;
    float imag;
} complex;

/* function that takes two struct and return struct */
complex add(complex n1,complex n2);

int main()
{
    complex n1, n2, temp;

    printf("For 1st complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    /* take 1st struct data */
    scanf("%f %f", &n1.real, &n1.imag);

    printf("\nFor 2nd complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    /* take 2nd struct data */
    scanf("%f %f", &n2.real, &n2.imag);

    temp = add(n1, n2);
    /* calculate the sum */
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
