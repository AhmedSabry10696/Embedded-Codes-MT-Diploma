/**
 * @file macro_ex2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief macros to swap two numbers
 * @version 0.1
 * @date 2021-04-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief macros to swap two numbers
 * 
 */
#define SWAP(X,Y)\
{\
	/* we can declare variables inside the macro normally as local variables */ \
	int temp;\
	temp = X;\
    X = Y;\
    Y = temp;\
}

/**
 * @brief macros to get the max number of two numbers
 * 
 */
#define MAX(X,Y){\
    if(X>Y)\
    {\
        printf("The Greater Number Is : %d\n",X);\
    }\
    else\
    {\
        printf("The Greater Number Is : %d\n",Y);\
    }\
}

int main()
{
    int a= 10,b= 5;
    printf("Values before swapping : a=%d\t b=%d\n",a,b);
    
    /* swap the two numbers */
    SWAP(a,b);
    printf("Values after swapping  : a=%d\t b=%d\n",a,b);
    
    /* get the maximum number */
    MAX(a,b);
    
    return 0;
}
