/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief program reads a positive int and computes the factorial
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main()
{
    int input;
    int fact = 1;
    int i;

    /* take number from user */
    printf("Please enter the required number : ");
    scanf("%d",&input);
    
    for(i=1;i<=input;i++)
    {
        fact = fact * i;
    }
    printf("\nfactorial of %d is: %d",input,fact);
    
    return 0;
}
