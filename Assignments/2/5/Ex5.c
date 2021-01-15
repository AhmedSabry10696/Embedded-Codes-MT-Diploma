/*
 * Ex5.c
 * function to calculate the sum of array elements
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

#define ARR_SIZE 5

void total(int a[],int n)
{
	int i;
	int sum = 0;
	
	for(i=0;i<n;i++) /* loop for all the array elements to calculate the sum */
	{
		sum += a[i]; /* calculate the sum */
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


