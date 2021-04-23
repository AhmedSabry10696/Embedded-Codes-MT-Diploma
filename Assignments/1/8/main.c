/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief program reads two integers and checks if the first is multiply of the second 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main()
{
    int input1,input2;

    /* take two integers from user */
    printf("Please enter the two numbers : ");
    scanf("%d %d",&input1,&input2);
    
    if( input1 % input2 == 0 )
    {
        printf("\n%d is multiply of %d\n",input1,input2);
    }
    
    else
    {
        printf("\n%d is not multiply of %d\n",input1,input2);
    }

    return 0;
}
