#include <stdio.h>
#include <stdlib.h>

/* Description :
 * function responsible for printing the binary representation for any integer number
 */
void print_binary(int num)
{
    int i,mask=0x80000000;  // mask = 0b1000.....
    printf("The Binary Representation of number %d is : ",num);
    for(i=0;i<32;i++)
    {
        ((num<<i) & mask) ? printf("1"):printf("0");
    }
    printf("\n");
}

/* Description :
 * function responsible for printing the number of ones and zeros in the binay number
 */
void print_number_of_ones_zeros(int num)
{
    int i,mask=0x80000000;   //mask = 0b10000...
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
    
    /* display number binay representation */
    print_binary(input);
    
    /* display number of ones and zeros in the entered number */
    print_number_of_ones_zeros(input);
    
    return 0;
}
