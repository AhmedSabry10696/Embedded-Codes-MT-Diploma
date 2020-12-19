//Program to find a certain number in array using Linear search algorithm

#include <stdio.h>

int Linear_Search(int array[],int element,int n); // linear search declaration

int main( void )
{
    const int size = 5; // const stored in program memory
    int i;
    int array[size];
    int location;
    int element;

    printf("Enter the required array: \n");
    // take array elements form user
    for(i=0;i<size;i++)
    {
    	fflush(stdout);
        scanf("%d",&array[i]);
    }
    // take a num to search for it in array
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

int Linear_Search(int array[],int element,int n){
    int i;
    for(i=0;i<n;i++)
    {
        if(element==array[i])
            return (i);         // return index of element if founded in array
    }
    return -1;                  // if not founded return -1 
}
