/**
 * @file struct_ex2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief structure and array of structure
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>

/**
 * @brief struct declaration
 * 
 */
struct student
{
    int id;
    char name[30];
}record[2],s1;    
/* define arr of two stuctures and sruct called s1 */

void main()
{
    /* init the first structure in array */
    record[0].id=1;
    strcpy(record[0].name, "Khaled"); 

    /* init the second structure in array */
    record[1].id=2;
    strcpy(record[1].name, "Ayman");

    /* print the data in array of structure */
    printf("%d %s\n%d %s\n", record[0].id, record[0].name,record[1].id, record[1].name);

    printf("%u\n",sizeof(s1.id)+sizeof(s1.name)); /* 4 bytes + 30 bytes */
    
    /* 36 compiler added 2 bytes padding for alignment requirements */
    printf("%u",sizeof(s1));  
}
