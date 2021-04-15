/**
 * @file pointers_ex11.c
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
 * @brief add two numbers  
 * 
 * @param a firest number
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

/**
 * @brief take pointer to function and two parameters
 * 
 * @param ptr_func pointer to function
 * @param a first number
 * @param b second number
 * @return int 
 */
int operation(int (*ptr_func)(int,int),int a,int b)
{
    return (*ptr_func)(a,b);
}

int main()
{
    int x=10,y=5;
    int result;

    /* call add function using pointer to function */
    result = operation(add,x,y);
    printf("result of x+y = %d\n",result);

    /* call mul funtion using pointer to function */
    result = operation(mul,x,y);
    printf("result of x*y = %d\n",result);
    
    return 0;
}
