/**
 * @file Ex9.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  linear search function to find specific number in array
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief find a certain number in array using Linear search algorithm
 * 
 * @param array array 
 * @param element element to search about
 * @param n array size
 * @return int 
 */
int Linear_Search(const int array[],int element,int n); 

int main( void )
{
    const int size = 10;
    int i;
    int array[size];
    int location;
    int element;

    /* take array elements from user */
    printf("Enter the required array: \n");
   
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    /* take element to search about it */
    printf("Enter element for search: ");
    scanf("%d",&element);

    /* call the funciton to find its location */
    location = Linear_Search(array,element,size);
    
    /* check the result */
    if(location == -1)
    {
        printf("\nElement not found\n");
    }

    else
    {
        printf("\nThe element at the location: %d",location);
    }

    return 0;

}

int Linear_Search(const int array[],int element,int n)
{    
    for(int i=0; i<n; i++)
    {
        if(element == array[i])
            /* index of the element if founded */
            return (i); 
    }

    /* element not found */
    return -1; 


