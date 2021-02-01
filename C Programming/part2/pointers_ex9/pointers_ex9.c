/* program explains pointer to functions */

#include <stdio.h>

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int division(int a,int b)
{
	return a/b;
}

int main()
{
    int result;
    int (*ptr_func)(int,int) = add; /* pointer to add function */
    
    result = (*ptr_func)(3,2);      /* result = ptr_func(3,2); */
    printf("result=%d\n",result);

    return 0;
}

