/* Write a program that count number of ones in an
entered integer - Modify it to count number of zeros */

#include <stdio.h>
#include <stdlib.h>

void print_number_of_ones_zeros(int num)
{
    int i,mask=0x80000000;
    int ones_count=0,zeros_count=0;
    
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
    
    /* display number of ones and zeros in the entered number */
    print_number_of_ones_zeros(input);
    
    return 0;
}
