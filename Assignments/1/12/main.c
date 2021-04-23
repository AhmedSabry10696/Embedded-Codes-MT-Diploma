/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief program reads a positive int and checks if it is a prime
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int input;
    int i;
    int not_prime_num = FALSE;

    /* take number from user */
    printf("Please enter the required number : ");
    scanf("%d",&input);
    
    for(i=2;i<input;i++)
    {
        if( input%i == 0 ) 
        {
            not_prime_num = TRUE;
            printf("%d is not prime number\n",input);
        }
    }

    if(not_prime_num == FALSE)
    {
        printf("%d is prime number\n",input);
    }
    
    return 0;
}
