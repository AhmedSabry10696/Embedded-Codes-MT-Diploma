/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  program takes three integers, and prints out the smallest number 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main()
{
    int input1,input2,input3;
    int Min;

    /* take 3 numbers from user */
    printf("Please enter the three numbers : ");
    scanf("%d%d%d",&input1,&input2,&input3);
    
    Min=input1;
    
    if(input2<=Min)
    {
        Min=input2;
    }
    if(input3<=Min)
    {
        Min=input3;
    }

    printf("the min number is: %d",Min);
    
    return 0;
}
