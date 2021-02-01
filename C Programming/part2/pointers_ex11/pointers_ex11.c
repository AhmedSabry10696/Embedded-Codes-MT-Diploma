/* poiner to functions */
#include <stdio.h>

int add(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

int division(int a,int b){
	return a/b;
}

/* function receive function name (pointer to function) and two nums to perform operation */
int operation(int (*ptr_func)(int,int),int a,int b)
{
    return (*ptr_func)(a,b);
}

int main()
{
    int x=10,y=5;
    int result;

    /* call add function using pointer to function */
    result = operation(add,x,y);
    printf("result of x+y = %d\n",result);

    /* call mul funtion using pointer to function */
    result = operation(mul,x,y);
    printf("result of x*y = %d\n",result);
    
    return 0;
}
