/**
 * @file inline_ex.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief inline funtions
 * @version 0.1
 * @date 2021-04-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

inline void MAX(int X,int Y)
{
    if(X>Y)
    {
        printf("The Greater Number Is : %d\n",X);
    }
    else
    {
        printf("The Greater Number Is : %d\n",Y);
    }
}

int main()
{
    int a =10 , b =5;

    /* get the maximum number */
    MAX(a,b);
    
    return 0;
}
