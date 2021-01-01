/* array of strings and pointer to strings */

#include <stdio.h>

int main()
{
	char str1[] = { 'A', 'B', 'C', 'D', 'E' };
	char str2[] = "ABCDE";
	char *str3  = "ABCDE";
	char *cPtr  = str1;

	short sArr[] = {1, 2, 3, 4, 5};
	short sArr2D[][5] = { {1, 2, 3, 4, 5} , {6, 7, 8, 9, 10} };
	short *sPtr1 = sArr;

	short (*sPtr2)[5] = sArr2D;     /* pointer to array of 5 elements (pointer to pointer) */
	short *sPtr3[5];                /* array of 5 pointer to short data */

	printf("sizeof(str1) = %u\n", sizeof(str1)); /* 5 bytes */ 
	printf("sizeof(str2) = %u\n", sizeof(str2)); /* 5 bytes + 1 for null '\0' */
	printf("sizeof(str3) = %u\n", sizeof(str3)); /* 8 bytes means 64 bit address bus (address bus depondant) */
	printf("sizeof(cPtr) = %u\n", sizeof(cPtr)); /* 8 bytes */
	printf("\n");

	printf("sizeof(sArr) = %u\n", sizeof(sArr));     /* 5 * 2 bytes */
	printf("sizeof(sPtr1) = %u\n", sizeof(sPtr1));   /* 8 byte */
	printf("sizeof(sArr2D) = %u\n", sizeof(sArr2D)); /* 10 * 2 bytes */	
	printf("sizeof(sPtr2) = %u\n", sizeof(sPtr2));   /* 8 bytes */
	printf("sizeof(*sPtr2) = %u\n", sizeof(*sPtr2)); /* 10 bytes --> pointer to the 1st array in 2D array */
	printf("sizeof(sPtr3) = %u\n", sizeof(sPtr3));   /* 5 * 8 bytes --> array of five pointers */
	printf("\n");

	printf("sArr2D[1][2] = %d\n", sArr2D[1][2]);
	printf("sPtr2[0][0] = %d, sPtr2[1][2] = %d\n", sPtr2[0][0], sPtr2[1][2]);
	printf("*(* (sArr2D + 1) + 2) = %d\n", *(* (sArr2D + 1) + 2)); /* same as sArr2D[1][2] */
	printf("*(*(sArr2D) + 1*5 + 2) = %d\n\n", *(*(sArr2D) + 1*5 + 2)); /* same as sArr2D[1][2] */
	return 0;
}
