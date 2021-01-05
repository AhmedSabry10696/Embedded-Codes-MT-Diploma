#include <stdio.h>

/* Description :
 * MUL Macro it should be like that
 * #define MUL(X,Y) ( (X) * (Y) )
 * to avoid any errors
 */

#define MUL(X,Y) (X*Y)

#define MUL_MODIFIED(X,Y) ((X) * (Y))

int main()
{
    int a = 5,b = 3;
    int c;

    c = MUL(a,b);
    printf("c=%d\n",c);

    c = MUL(a+1,b+2); /* a+1*b+2 */
    /* error in macro because there is no ( ) around each argument ( a+1 * b+2 )*/
    printf("c=%d\n",c);

    c = MUL_MODIFIED(a+1,b+2);
    printf("c=%d\n",c);

    return 0;
}
