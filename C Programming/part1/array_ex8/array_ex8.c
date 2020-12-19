//Program to sort the array elements using selection sorting algorithm.

#include <stdio.h>

void selection_sorting(int array[],const int size)
{
    int i,j,min,temp;
    for(i=0 ; i<size-1 ; i++) // loop till the element before the last element 
    {
        min=i;
        for(j=i+1 ; j<size ; j++)   // loop from the second element  to the last element
        {
            if(array[min]>array[j]) // compare each element with the following elements 
                min=j;
        }
        // swap operation 
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
    // take numbers from user to sort it
    for(i=0;i<arr_size;i++)
    {
        fflush(stdout);
        scanf("%d",&arr[i]);
    }

    printf("Array Before Sorting: \n");
    // print numbers before sorting operation
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    selection_sorting(arr,arr_size);

    printf("Array After Sorting: \n");
    //print numbers after sort operation
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}
