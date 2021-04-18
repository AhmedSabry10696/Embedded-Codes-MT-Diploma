/**
 * @file bitwise_ex.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief common macros
 * @version 0.1
 * @date 2021-04-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

/* include my macros file */
#include "common_macros.h" 

int main()
{
	/* 8 bit variable */
	unsigned char var=0;  

	/* set bit number 0 */
	SET_BIT(var,0);        

	/* set bit number 1 */
	SET_BIT(var,1); 	  

	/* set bit number 2 */ 
	SET_BIT(var,2);       
	
	printf("var=0x%x\n",var);

	/* clear bit number 2 */
	CLEAR_BIT(var,2);      
	printf("var=0x%x\n",var);

	/* toggle bit number 2 */
	TOGGLE_BIT(var,2); 	   
	printf("var=0x%x\n",var);

	/* rotate left one time */
	ROR(var,1); 		   
	printf("var=0x%x\n",var);

	/* rotate right one time */
	ROL(var,1); 		   
	printf("var=0x%x\n",var);

	/* check if bit number 2 is set */
	if(BIT_IS_SET(var,2))  
	{
		CLEAR_BIT(var,2);
		printf("var=0x%x\n",var);
	}

	/* check if bit number 2 is cleared */
	if(BIT_IS_CLEAR(var,2)) 
	{
		SET_BIT(var,2);
		printf("var=0x%x\n",var);
	}

	return 0;
}
