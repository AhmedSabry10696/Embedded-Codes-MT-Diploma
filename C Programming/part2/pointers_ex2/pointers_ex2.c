/* App demonstarates the difference between passing variables by value and by reference */
#include <stdio.h>

/* swap by refrence funtion */
void swap_pass_by_reference(int *num1_ptr , int *num2_ptr)
{
    int temp;
    /* swap operation */
    temp = *num1_ptr;
    *num1_ptr = *num2_ptr;
    *num2_ptr = temp;
}

/* swap by value function */
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
     * x = x ^y;
    */
}

int main()
{
    int num1=5,num2=3;
    printf("The two numbers before swapping : %d %d\n",num1,num2);
    
    swap_pass_by_value(num1,num2);
    printf("The two numbers after using swapping by Value : %d %d\n",num1,num2);
    
    swap_pass_by_reference(&num1,&num2);
    printf("The two numbers after using swapping by reference : %d %d\n",num1,num2);
    
    return 0;
}
