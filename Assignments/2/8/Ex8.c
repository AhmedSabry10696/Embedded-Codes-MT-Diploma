/*
 * Ex8.c
 * selection sort function to sort array of integers ascending
 * Created on: Jul 20, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

void selection_sorting(int a[], int n)
{
	int i,j,temp,min;

	for(i=0;i<n-1;i++) /* loop till the element before the last element */
	{
		min=i;
	    for(j=i+1;j<n;j++) /* loop till the element before the last element */
	    {
			if(a[min]>a[j]) /* compare each element with the following elements */
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
    printf("Enter the required numbers to be sorted:\n");
    /* take numbers from user to sort it */
    for(i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array Before Sorting: \n");
    /* print array elements before sorting operaion */
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    /* call the function to sort array elements */
    selection_sorting(arr,arr_size);
    
    printf("Array After Sorting: \n");
    /* print array elements after sorting operaion */
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
