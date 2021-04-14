/**
 * @file array_ex3.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief displays the maximum number in array
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#define arr_size 5

int main()
{
    int arr[arr_size];
    int i,max_num;
   
    /* take array elements from user */
    for(i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    /* get the max value from array elements */
    max_num = arr[0];
    
    for(i=1;i<arr_size;i++)
    {
        if(arr[i] > max_num)
        {
            max_num = arr[i];
        }
    }
    printf("The maximum number in the array is : %d",max_num);
    
    return 0;
}
