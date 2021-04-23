/**
 * @file Ex1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  program creates star pattern 1 3 5 7 9
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main(void)
{
	int i,j;

	/* loop for all rows */ 
	for(i=0;i<5;i++) 
	{
		/* write the left speaces */
		for(j=i;j<4;j++) printf(" "); 

		/* write the stars */
		for(j=0;j<((2*i)+1);j++) printf("*");

		/* write the right spaces */ 
		for(j=i;j<4;j++) printf(" ");
		
		printf("\n");
	}
	return 0;
}


