/**
 * @file Ex12.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  Fibonacci numbers each numbers equal to the sum of the two previous numbers
 *         like 1,1,2,3,5,8,13,..
 *         write a program to find nth term in this series
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

#define ARR_SIZE 100

int main()
{
    int arr[ARR_SIZE],i;
    int num_index;

    /* take the nth term to calculte it */
    printf("Please enter the element index : ");
    scanf("%d",&num_index);

    arr[0] = 1;
    arr[1] = 1;
    
    /* fill the 100 array elements */
    for(i=2;i<ARR_SIZE;i++) 
    {
        /* each element equals to the sum of the previous two elements */
    	arr[i]=arr[i-1] + arr[i-2]; 
    }
    
    /* print the result */
    printf("\nThe %dth term is:%d",num_index,arr[num_index-1]);
    
    return 0;
}

