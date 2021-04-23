/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  program stores information of student and then display it (struct) 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief student data
 * 
 */
struct student
{
    char name[50];
    int roll;
    float marks;
}s;

int main()
{
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);


    printf("Displaying Information:\n");

    printf("Name: ");
    puts(s.name);

    printf("Roll number: %d\n",s.roll);

    printf("Marks: %.1f\n", s.marks);

    return 0;
}
