/**
 * @file array_ex9.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief provide some operation on string
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int len1,len2,comp;
    char str1[20]="Hello",str2[20];
   
    /* to assign str to array of char use strcpy(dest,source) */
    strcpy(str2,"world"); 
    /* print str1 beside str2 */
    printf("%s %s\n",str1,str2);   

    /* concatenate or combine both str1 & str2 to str1 */
    strcat(str1,str2);
    printf("%s %s\n",str1,str2);

    /* get the length of both str1 & str2 without the NULL terminator */
    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("length of string 1 is :%d\nLength of string 2 is : %d\n",len1,len2);

    /* compare between str1 & str2 */
    comp = strcmp(str1,str2);

    if(comp>0)      
        printf("Str1 is larger\n");
    else if(comp<0) 
        printf("Str2 is larger\n");
    else 
        printf("both are equal\n");
    
    return 0;
}
