/* pointer with 2D arrays
 * pointer to array
*/
#include <stdio.h>

int main()
{
	long i,j;
	long Arr2D[2][2] = { {1,2} , {3,4} };  /* 2D arr init */
	long (*Arr2D_ptr)[2] = Arr2D; /* pointer to array of 2 elements (pointer to pointer) */

	printf("Start Address of the first Array : %p\n", &Arr2D[0][0]);
	printf("Start Address of the first Array : %p\n", Arr2D);
	printf("Start Address of the first Array : %p\n", *Arr2D);
	printf("Start Address of the first Array : %p\n", Arr2D[0]);
	printf("Start Address of the first Array : %p\n", *Arr2D_ptr);
	
	/* very important!!
	 * increament or decreament with pointer isn't arthmatic increament or decreament
	*/
	
	Arr2D_ptr++; /* increamented by array size to point to the next array of the 2D arr */

	printf("Start Address of the second Array : %p\n", &Arr2D[1][0]);
	printf("Start Address of the second Array : %p\n", Arr2D+1);
	printf("Start Address of the second Array : %p\n", *(Arr2D+1));
	printf("Start Address of the second Array : %p\n", Arr2D[1]);
	printf("Start Address of the second Array : %p\n", Arr2D_ptr);
    
	return 0 ;
}


