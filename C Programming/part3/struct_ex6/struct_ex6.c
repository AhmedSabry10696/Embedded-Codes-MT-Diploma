/* pointer to structures */

#include <stdio.h>

/* struct declaration */
struct student{
    char *first_name;
    char *second_name;
    int id;
    float grade;
    struct student *struct_ptr; /* allowed to make pointer to struct inside itslef */
    /* struct student s1;
     * not allowed to define struct inside itself
    */
}s1,s2; /* define to stuctures */

int main()
{
    /* write s1 values using s_ptr */
    s1.first_name = "Ahmed";
    s1.second_name = "Sabry";
    s1.id = 1;
    s1.grade = 95.75;
    s1.struct_ptr = &s2; /* pointer to s2 student structure object */

    /* change s2 values using the pointer in s1 */
    s1.struct_ptr->first_name = "Ahmed";   /* (*s1.struct_ptr).first_name = "Ahmed"; */
    s1.struct_ptr->second_name = "Khaled";
    s1.struct_ptr->id = s1.id+1;
    s1.struct_ptr->grade = 70;

    printf("Student 1 Information :\n");
    /* print s1 data */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    printf("Student 2 Information :\n");
    /* print s2 data */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s2.first_name,s2.second_name,s2.id,s2.grade);

    return 0;
}

