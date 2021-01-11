/* Write a program that takes three integers, and prints out the smallest number */

#include <stdio.h>

int main()
{
    int input1,input2,input3;
    int Min;

    printf("Please enter the three numbers : ");
    scanf("%d%d%d",&input1,&input2,&input3);
    
    Min=input1;
    
    if(input2<=Min)
    {
        Min=input2;
    }
    if(input3<=Min)
    {
        Min=input3;
    }

    printf("the min number is: %d",Min);
    
    return 0;
}
