/**
 * @file ex10.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief explains how pointer to function works
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

int division(int a,int b)
{
    return a/b;
}

int main()
{
    int x,y;
    int result;
    int operation;

    /* pointer to function that take 2 int and return int value */    
    int (*ptr_func)(int,int); 
    
    /* take the required operation from the user */
    printf("please enter the required operation : \n0:add\t1:sub\t2:mul\t3:division\n");
    fflush(stdout);
    scanf("%d",&operation);

    /* check which operation that user enter and assign pointer to the required function */
    switch(operation)
    {
        case 0: ptr_func = add;
                break;
        case 1: ptr_func = sub;
        	break;
        case 2: ptr_func = mul;
                break;
        case 3: ptr_func = division;
                break;
        default: printf("Invalid input\n");
                 break;
    }

    printf("please enter two number for the operation: \n");
    /* take to numbers from the user to perform operation */
    fflush(stdout);
    scanf("%d %d",&x,&y);
    
    /* call a function using pointer to function */
    /* Another method -->  result = ptr_func(x,y) */
    result = (*ptr_func)(x,y);
    printf("result=%d\n",result);
    
    return 0;
}
