/**
 * @file pointers_ex3.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief find and display a certain number in array
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/* preprocessor operation just text replacement */
#define size 10   

int Linear_Search(int *arr_ptr,int element,int n);

int main( void )
{
    int i;
    int array[size];
    int location;
    int element;
    
    printf("Enter the required array: \n");
    /* take array elements from the user */
    for(i=0;i<size;i++)
    {
    	fflush(stdout);
        scanf("%d",&array[i]);
    }

    /* take the element to search for it */
    printf("Enter element for search: ");
    fflush(stdout);
    scanf("%d",&element);

    location = Linear_Search(array,element,size);
    if(location == -1)
    {
        printf("\nElement not found\n");
    }
    else {
        printf("\nThe element at the location: %d",location);
    }
    return 0;

}

/**
 * @brief find a certain element in array
 * 
 * @param arr_ptr array name
 * @param element element to search for
 * @param n array size
 * @return int 
 */
int Linear_Search(int *arr_ptr,int element,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(element == arr_ptr[i])
        {
            /* retuen index of element if founded in the stack */
            return (i);
        }
    }
    /* element not found */
    return -1; 
}
