/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief program reads a positive int and checks if it is a perfect square 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/* for sqrt function */
#include <math.h>

int main()
{
    int input;
    int root;
    
    /* take number from user */
    printf("Please enter the required number : ");
    scanf("%d",&input);
    
    root = sqrt(input);
    
    if( input == (root*root) )
    {
        printf("%d is the perfect square root of %d",root,input);
    }
    else
    {
        printf("perfect square root not exist");
    }
    
    return 0;
}
