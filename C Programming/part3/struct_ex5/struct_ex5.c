/**
 * @file struct_ex5.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief Pass struct by reference
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

/**
 * @brief edit struct element by value
 * 
 * @param id element to edit
 */
void Student_member_by_Value(int id)
{
    id = 2;
}

/**
 * @brief edit struct element by reference
 * 
 * @param ptr_id pointer to element to edit 
 */
void Student_member_by_Reference(int * ptr_id) 
{
   *ptr_id = 2;
}

int main()
{
    struct student s1={"Ahmed","Sabry",1,95.75}; 
    printf("Student 1 Information :\n");
    /* print student 1 data */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    /* pass s1.id by value */
    Student_member_by_Value(s1.id);
    printf("Student 1 Information :\n");

    /* print student 1 data after by value pass */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    /* pass s1.id by address */
    Student_member_by_Reference(&s1.id); 
    printf("Student 1 Information :\n");
    
    /* print student 1 data after by refrence pass */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);
    
    return 0;
}