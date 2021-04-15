/**
 * @file pointers_ex12.c
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
    int result,operation,x,y;
    /* arr of 4 pointers to functions each one for function */
    int (*ptr_func[4])(int,int) ={add,sub,mul,division}; 
    
    printf("please enter the required operation : \n0:add\t1:sub\t2:mul\t3:division\n");
    /* take the operation from user */
    fflush(stdout);
    scanf("%d",&operation);
    
    printf("please enter two number for the operation: \n");
    /* take two numbers from the user */
    fflush(stdout);
    scanf("%d %d",&x,&y);

    /* operation will specify the function to do */
    result = (*ptr_func[operation])(x,y); 
    printf("result=%d\n",result);
    
    return 0;
}
