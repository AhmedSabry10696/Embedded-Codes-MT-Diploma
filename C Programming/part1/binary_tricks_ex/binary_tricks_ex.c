/**
 * @file binary_tricks_ex.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief prints binary representation and number of 1's and 0's in a var
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

/**
 * @brief print binary representation of an integer number
 * 
 * @param num num to print its binary representation
 */
void print_binary(int num)
{
     /* mask =  0b100000000.... */
    int i,mask=0x80000000; 
    printf("The Binary Representation of number %d is : ",num);
    
    for(i=0;i<32;i++)
    {
        ((num<<i) & mask) ? printf("1"):printf("0");
    }
    printf("\n");
}

/**
 * @brief print number of ones and zeros in a binay number of an integer number
 * 
 * @param num number to print its number on ones and zeros.
 */
void print_number_of_ones_zeros(int num)
{
     /* mask = 0b 100000.... */
    int i,mask=0x80000000;  
    int ones_count=0,zeros_count=0;
    
    for(i=0;i<32;i++)
    {
        ((num<<i) & mask) ? ones_count++:zeros_count++;
    }
    /* print num of ones in bin */
    printf("Number of ones inside the integer number %d is %d\n",num,ones_count); 
    /* print num of zeros in bin */
    printf("Number of zeros inside the integer number %d is %d\n",num,zeros_count); 
}

int main()
{
    int input;
    
    /* take integer value from user */
    printf("Please Enter Number : ");
    fflush(stdout);
    scanf("%d",&input);
    printf("\n");
    
    print_binary(input);
    print_number_of_ones_zeros(input);
    
    return 0;
}
