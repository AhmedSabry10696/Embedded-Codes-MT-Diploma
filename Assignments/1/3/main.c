/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief Print sum of first 100 integers(with data validation)
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main(void)
{
    int sum=0;
    int i;
    
    for(i=0;i<100;i++)
    {
        sum += i;
    }
    printf("sum of the first 100 integer numbers equals : %d\n",sum);

    /* if sum is correct */
    if(sum == 4950)
    {
        printf("sum of the first 100 integer numbers is correct\n");
    }
  
    /* sum is wrong */
    else
    {
        printf("sum of the first 100 integer numbers is not correct\n");
    }
    return 0;
}
