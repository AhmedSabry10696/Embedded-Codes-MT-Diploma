#include <stdio.h>
#include "common_macros.h" //include my macros file

int main()
{
	unsigned char var=0; // 8 bit variable
	SET_BIT(var,0); //set bit number 0
	SET_BIT(var,1); //set bit number 1
	SET_BIT(var,2); //set bit number 2
	printf("var=0x%x\n",var);

	CLEAR_BIT(var,2); //clear bit number 2
	printf("var=0x%x\n",var);

	TOGGLE_BIT(var,2); //toggle bit number 2
	printf("var=0x%x\n",var);

	ROR(var,1); //rotate left one time
	printf("var=0x%x\n",var);

	ROL(var,1); //rotate right one time
	printf("var=0x%x\n",var);

	if(BIT_IS_SET(var,2)) //check if bit number 2 is set
	{
		CLEAR_BIT(var,2);
		printf("var=0x%x\n",var);
	}

	if(BIT_IS_CLEAR(var,2)) //check if bit number 2 is cleared
	{
		SET_BIT(var,2);
		printf("var=0x%x\n",var);
	}

	return 0;
}
