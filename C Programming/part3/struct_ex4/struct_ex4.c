/**
 * @file struct_ex4.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>

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

/**
 * @brief init struct using pass by value
 * 
 * @param s struct to intitialize
 */
void Student_By_Value(struct student s)
{
    s.first_name = "Ahmed";
    s.second_name = "khaled";
    s.grade = 50;
    s.id = 2;
}

/**
 * @brief init struct using pass by refrence
 * 
 * @param s_ptr pointer to structure to receive add of struct to initialize it
 */
void Student_By_Reference(struct student *s_ptr)
{
    s_ptr->first_name = "Ahmed";
    s_ptr->second_name = "khaled";
    s_ptr->grade = 50;
    s_ptr->id = 2;
}

int main()
{
    struct student s1={"Ahmed","Sabry",1,95.75};
    printf("Student 1 Information :\n");
    /* print student 1 data */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    /* pass s1 by value */
    Student_By_Value(s1);
    printf("Student 1 Information :\n");
    /* print student 1 data after call by value (doesn't change) */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    /* pass s1 by address */
    Student_By_Reference(&s1);
    printf("Student 1 Information :\n");
    /* print student 1 data after call by refrence (will change) */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);
   
    return 0;
}
