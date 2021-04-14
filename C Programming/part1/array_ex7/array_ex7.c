/**
 * @file array_ex7.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief finds a certain number in array using Linear search algorithm
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int Linear_Search(int array[],int element,int n);

int main( void )
{
    /* const stored in program memory (slow) it's prefarable to use #define */
    const int size = 5; 
    int i;
    int array[size];
    int location;
    int element;

    printf("Enter the required array: \n");
    /* take array elements form user */
    for(i=0;i<size;i++)
    {
    	fflush(stdout);
        scanf("%d",&array[i]);
    }

    /* take a num to search for it in array */
    printf("Enter element for search: ");
    fflush(stdout);
    scanf("%d",&element);

    location = Linear_Search(array,element,size);
    
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

/**
 * @brief get index of of certain element in array
 * 
 * @param array array name
 * @param element  element to search about
 * @param n array size
 * @return int 
 */
int Linear_Search(int array[],int element,int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(element == array[i])
        {
            /* return index of element if founded in array */
            return (i);         
        }
    }
    /* if not founded return -1 */ 
    return -1;               
}
