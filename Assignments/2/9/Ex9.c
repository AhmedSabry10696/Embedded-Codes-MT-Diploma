/*
 * Ex9.c
 * linear search function to find specific number in array
 * Created on: Jul 20, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

/*
 * Description:
 * Program to find a certain number in array using Linear search algorithm
 */

int Linear_Search(const int array[],int element,int n); 

int main( void )
{
    const int size = 10;
    int i;
    int array[size];
    int location;
    int element;

    printf("Enter the required array: \n");
    /* take array elements from user */
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter element for search: ");
    /* take element to search about it */
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
    int i;
    for(i=0;i<n;i++)
    {
        if(element == array[i])
            return (i); /* index of the element if founded */
    }
    return -1; /* element not found */
}


