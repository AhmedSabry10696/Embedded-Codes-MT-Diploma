/* program provide some operation on string */

#include <stdio.h>
#include <string.h>

int main()
{
    int len1,len2,comp;
    char str1[20]="Hello",str2[20];
    strcpy(str2,"world");            /* to assign str to array of char use strcpy(dest,source) */
    printf("%s %s\n",str1,str2);     /* print str1 beside str2 */

    /* concatenate or combine both str1 & str2 to str1 */
    strcat(str1,str2);
    printf("%s %s\n",str1,str2);

    /* get the length of both str1 & str2 without the NULL terminator */
    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("length of string 1 is :%d\nLength of string 2 is : %d\n",len1,len2);

    /* compare between str1 & str2 */

    comp = strcmp(str1,str2);
    if(comp>0)      printf("Str1 is larger\n");
    else if(comp<0) printf("Str2 is larger\n");
    else printf("both are equal\n");
    return 0;
}
