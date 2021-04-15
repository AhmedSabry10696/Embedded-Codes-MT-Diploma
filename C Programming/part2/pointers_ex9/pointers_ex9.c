/**
 * @file pointers_ex9.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief pointer to function
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief add two integer numbers
 * 
 * @param a first number
 * @param b second number
 * @return int 
 */
int add(int a,int b)
{
	return a+b;
}

/**
 * @brief subtract two numbers
 * 
 * @param a first number
 * @param b second number
 * @return int 
 */
int sub(int a,int b)
{
	return a-b;
}

/**
 * @brief multiply two numbers
 * 
 * @param a first number
 * @param b second number
 * @return int 
 */
int mul(int a, int b)
{
	return a*b;
}

/**
 * @brief divide two numbers
 * 
 * @param a first number
 * @param b second number
 * @return int 
 */
int division(int a,int b)
{
	return a/b;
}

int main()
{
    int result;
    /* pointer to add function */
    int (*ptr_func)(int,int) = add; 
    
    /* result = ptr_func(3,2); */
    result = (*ptr_func)(3,2);    
    printf("result=%d\n",result);

    return 0;
}

