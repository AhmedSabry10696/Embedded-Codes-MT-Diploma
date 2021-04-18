/**
 * @file binary_tricks_ex.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief print binary representation and num of zeros and ones in int number
 * @version 0.1
 * @date 2021-04-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief print binary representation for any int num
 * 
 * @param num 
 */
void print_binary(int num)
{
    /* mask = 0b1000..... */
    int i,mask=0x80000000; 
    printf("The Binary Representation of number %d is : ",num);
    
    /* size of int is 32 bit */
    for(i=0;i<32;i++) 
    {
        ((num<<i) & mask) ? printf("1"):printf("0");
    }
    
    printf("\n");
}

/**
 * @brief print the number of zeros and ones in a binary representation of int number
 * 
 * @param num 
 */
void print_number_of_ones_zeros(int num)
{
    /* mask = 0b10000... */
    int i,mask=0x80000000;  
    int ones_count = 0,zeros_count = 0;
    
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
    printf("Please Enter Number : ");
    
    /* enter the required number */
    scanf("%d",&input);
    printf("\n");
    
    /* display number binay representation */
    print_binary(input);
    
    /* display number of ones and zeros in the entered number */
    print_number_of_ones_zeros(input);
    
    return 0;
}
