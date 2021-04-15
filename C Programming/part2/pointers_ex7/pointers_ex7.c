/**
 * @file pointers_ex7.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief pointer to array 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main()
{
	long i,j;
	
	/* 2D array init */
	long Arr2D[2][2] = { {1,2} , {3,4} };

	/* pointer to array of 2 elements (pointer to pointer) */
	long (*Arr2D_ptr)[2] = Arr2D; 

	printf("Start Address of the first Array : %p\n", &Arr2D[0][0]);
	printf("Start Address of the first Array : %p\n", Arr2D);
	printf("Start Address of the first Array : %p\n", *Arr2D);
	printf("Start Address of the first Array : %p\n", Arr2D[0]);
	printf("Start Address of the first Array : %p\n", *Arr2D_ptr);
	
	/* very important!!
	 * increament or decreament with pointer isn't arthmatic increament or decreament
	*/
	
	/* increamented by array size to point to the next array of the 2D arr */
	Arr2D_ptr++;

	printf("Start Address of the second Array : %p\n", &Arr2D[1][0]);
	printf("Start Address of the second Array : %p\n", Arr2D+1);
	printf("Start Address of the second Array : %p\n", *(Arr2D+1));
	printf("Start Address of the second Array : %p\n", Arr2D[1]);
	printf("Start Address of the second Array : %p\n", Arr2D_ptr);
    
	return 0 ;
}


