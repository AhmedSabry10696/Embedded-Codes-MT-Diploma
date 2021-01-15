/*
 * Ex1.c
 * create star pattern 1 3 5 7 9
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

int main(void)
{
	int i,j;
	for(i=0;i<5;i++) /* loop for all rows */ 
	{
		for(j=i;j<4;j++) printf(" "); /* write the left speaces */
		for(j=0;j<((2*i)+1);j++) printf("*"); /* write the stars */
		for(j=i;j<4;j++) printf(" "); /* write the right spaces */
		printf("\n");
	}
	return 0;
}


