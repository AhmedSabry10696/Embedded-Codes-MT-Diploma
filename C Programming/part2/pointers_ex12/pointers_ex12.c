/* pointer to functions */

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
    int result,operation,x,y;
    /* arr of 4 pointers to functions each one for function */
    int (*ptr_func[4])(int,int) ={add,sub,mul,division}; 
    
    printf("please enter the required operation : \n0:add\t1:sub\t2:mul\t3:division\n");
    /* take the operation from user */
    fflush(stdout);
    scanf("%d",&operation);
    
    printf("please enter two number for the operation: \n");
    /* take two numbers from the user */
    fflush(stdout);
    scanf("%d %d",&x,&y);

    result = (*ptr_func[operation])(x,y); /* operation will specify the function to do */
    printf("result=%d\n",result);
    
    return 0;
}
