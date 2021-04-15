/**
 * @file struct_ex1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief explain structure
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

/**
 * @brief struct declaration
 * 
 */
struct student
{
    char *first_name;
    char *second_name;
    int id;
    float grade;
};

int main()
{
    
    struct student s1={ "Ahmed", "Sabry" , 1 , 95.75 };
    struct student s2,s3;

    s2.first_name = "Ahmed";
    s2.second_name = "Khaled";
    s2.id = s1.id+1;
    s2.grade = 70;

    s3=s2;
    s3.grade = 80;

    printf("Student 1 Information :\n");
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    printf("Student 2 Information :\n");
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s2.first_name,s2.second_name,s2.id,s2.grade);

    printf("Student 3 Information :\n");
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s3.first_name,s3.second_name,s3.id,s3.grade);

    return 0;
}
