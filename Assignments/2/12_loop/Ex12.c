/*
 * Ex12.c
 * Fibonacci numbers each numbers equal to the sum of the two previous numbers
 * like 1,1,2,3,5,8,13,..
 * write a program to find nth term in this series using while or for loop
 * Created on: Jul 20, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

#define ARR_SIZE 100

int main()
{
    int arr[ARR_SIZE],i;
    int num_index;

    printf("Please enter the element index : ");
    /* take the nth term to calculte it */
    scanf("%d",&num_index);
    arr[0] = 1;
    arr[1] = 1;
    
    for(i=2;i<ARR_SIZE;i++) /* fill the 100 array elements */
    {
    	arr[i]=arr[i-1] + arr[i-2]; /* each element equals to the sum of the previous two elements */
    }
    /* print the result */
    printf("\nThe %dth term is:%d",num_index,arr[num_index-1]);
    
    return 0;
}

