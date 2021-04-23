/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief print number of zero's and one's in binary representation of int number
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief print number of one's and zero's in binary representation of an int number    
 * 
 * @param num number to print number of one's and zero's
 */
void print_number_of_ones_zeros(int num)
{
    int i,mask=0x80000000;
    int ones_count=0,zeros_count=0;
    
    /* loop for all bits */
    for(i=0;i<32;i++)
    {
        ((num<<i) & mask) ? ++ones_count:++zeros_count;
    }
    
    printf("Number of ones inside the integer number %d is %d\n",num,ones_count);
    printf("Number of zeros inside the integer number %d is %d\n",num,zeros_count);
}

int main()
{
    int input;

    /* enter the required number */    
    printf("Please Enter Number : ");
    scanf("%d",&input);
   
    printf("\n");
    
    /* display number of ones and zeros in the entered number */
    print_number_of_ones_zeros(input);
    
    return 0;
}
