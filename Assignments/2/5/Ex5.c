/**
 * @file Ex5.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  program calculates the sum of array elements
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

#define ARR_SIZE 5

/**
 * @brief calculate sum of array elements
 * 
 * @param a array
 * @param n array size
 */
void total(int a[],int n)
{
	int i;
	int sum = 0;
	
	/* loop for all the array elements to calculate the sum */
	for(i=0;i<n;i++)
	{
		/* calculate sum */ 
		sum += a[i];
	}

	printf("sum of all array elements : %d\n",sum);
}

int main(void)
{
	int arr[ARR_SIZE];
	int i;
	printf("Please enter the arrat elements : \n");
	
	/* loop for all the array size to fill the array elements */
	for(i=0;i<ARR_SIZE;i++) 
	{
		scanf("%d",&arr[i]);
	}
	
	total(arr,ARR_SIZE);
	
	return 0;
}


