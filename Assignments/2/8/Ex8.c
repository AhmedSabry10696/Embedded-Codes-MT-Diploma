/**
 * @file Ex8.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief program to sort array elements
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief sort array elements
 * 
 * @param a array to sort its elements
 * @param n array size
 */
void selection_sorting(int a[], int n)
{
	int i,j,temp,min;

    /* loop till the element before the last element */
	for(i=0; i<n-1; i++) 
	{
		min=i;

        /* loop till the element before the last element */
	    for(j=i+1; j<n; j++) 
	    {
            /* compare each element with the following elements */
			if(a[min] > a[j]) 
			{
				min=j;
			}
            /* swap operation */ 
	        temp = a[i];
	        a[i] = a[min];
	        a[min] = temp;
	    }
	}
}

int main()
{
    const int arr_size = 5;
    int arr[arr_size],i;
    
    /* take numbers from user to sort it */
    printf("Enter the required numbers to be sorted:\n");

    for(i=0; i<arr_size; i++)
    {
        scanf("%d",&arr[i]);
    }

    /* print array elements before sorting operaion */
    printf("Array Before Sorting: \n");
   
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    /* call the function to sort array elements */
    selection_sorting(arr,arr_size);
    
    /* print array elements after sorting operaion */
    printf("Array After Sorting: \n");
    
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
