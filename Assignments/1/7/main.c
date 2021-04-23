/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief program that checks if an integer is even or odd
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
    printf("Please enter the required number : ");
    scanf("%d",&input);
    
    if((input%2)==0)
    {
        printf("\n%d is an even number",input);
    }
    
    else
    {
        printf("\n%d is an odd number",input);
    }
    
    /******** Another method ********
     * if(input&1)                  *
     *  printf("odd");              *   
     * else                         *
     *  printf("even");             *
     * *****************************/

    return 0;
}
