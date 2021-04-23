/**
 * @file Ex11.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief calculate the nth term in the geometric series 1,3,9,27
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

    /* take the nth element to calculate it */
    printf("Please enter the element index : ");
    scanf("%d",&num_index);
    
    arr[0] = 1;

    /* fill the 100 array elements */
    for(i=1;i<ARR_SIZE;i++) 
    {
        /* each element equals to the previous one *3 */
    	arr[i]=arr[i-1]*3; 
    }

    /* print their result */
    printf("\nThe %dth term is:%d",num_index,arr[num_index-1]);
   
    return 0;
}

