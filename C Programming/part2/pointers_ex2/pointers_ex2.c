/**
 * @file pointers_ex2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief difference between passing variables by value and by reference
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

/**
 * @brief swap two numbers by refrence funtion 

 * 
 * @param num1_ptr first number
 * @param num2_ptr second number
 */
void swap_pass_by_reference(int *num1_ptr , int *num2_ptr)
{
    int temp;
    /* swap operation */
    temp = *num1_ptr;
    *num1_ptr = *num2_ptr;
    *num2_ptr = temp;
}

/**
 * @brief swap two numbers by value function
 * 
 * @param x first number
 * @param y second number
 */
void swap_pass_by_value(int x,int y)
{   
    /* swap operation */
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("%d %d\n", x,y);

    /* swap may be done using bitwise operations :
     * x = x ^ y;
     * y = x ^ y;
     * x = x ^ y;
    */
}

int main()
{
    int num1=5,num2=3;
    /* print two numbers before swapping */
    printf("The two numbers before swapping : %d %d\n",num1,num2);
    
    swap_pass_by_value(num1,num2);
    /* print two numbers after swapping */
    printf("The two numbers after using swapping by Value : %d %d\n",num1,num2);
    
    swap_pass_by_reference(&num1,&num2);
    /* print two numbers after swapping */
    printf("The two numbers after using swapping by reference : %d %d\n",num1,num2);
    
    return 0;
}
