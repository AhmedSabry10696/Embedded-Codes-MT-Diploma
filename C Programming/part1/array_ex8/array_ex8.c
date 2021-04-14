/**
 * @file array_ex8.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief sort the array elements using selection sort algorithm
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

/**
 * @brief sort array elements using selection sort algorithm
 * 
 * @param array array name
 * @param size array size
 */
void selection_sorting(int array[],const int size)
{
    int i,j,min,temp;
    
    /* loop till the element before the last element */
    for(i=0 ; i<size-1 ; i++) 
    {
        min=i;
        /* loop from the second element  to the last element */
        for(j=i+1 ; j<size ; j++)  
        {
            /* compare each element with the following elements */ 
            if(array[min]>array[j]) 
                min=j;
        }
        /* swap operation */ 
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

int main()
{
    const int arr_size = 5;
    int arr[arr_size],i,j;

    printf("Enter the required numbers to be sorted:\n");
    /* take numbers from user to sort it */
    for(i=0;i<arr_size;i++)
    {
        fflush(stdout);
        scanf("%d",&arr[i]);
    }

    printf("Array Before Sorting: \n");
    /* print numbers before sorting operation */
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    selection_sorting(arr,arr_size);

    printf("Array After Sorting: \n");
    /* print numbers after sort operation */
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}
