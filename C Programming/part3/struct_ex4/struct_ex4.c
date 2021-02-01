/* pass structure by value and refrence */
#include <stdio.h>
#include <stdlib.h>

/* struct declaration */
struct student
{
    char *first_name;
    char *second_name;
    int id;
    float grade;
};

/* function to init struct using pass by value */
void Student_By_Value(struct student s)
{
    s.first_name = "Ahmed";
    s.second_name = "khaled";
    s.grade = 50;
    s.id = 2;
}

/* function to init struct using pass by refrence */
void Student_By_Reference(struct student *s_ptr)  /* receive data in pointer to struct */
{
    s_ptr->first_name = "Ahmed";
    s_ptr->second_name = "khaled";
    s_ptr->grade = 50;
    s_ptr->id = 2;
}

int main()
{
    struct student s1={"Ahmed","Sabry",1,95.75}; /* init like array must be in th */
    printf("Student 1 Information :\n");
    /* print student 1 data */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    Student_By_Value(s1); /* pass s1 by value */
    printf("Student 1 Information :\n");
    /* print student 1 data after call by value (doesn't change) */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    Student_By_Reference(&s1); /* pass s1 by address */
    printf("Student 1 Information :\n");
    /* print student 1 data after call by refrence (will change) */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);
   
    return 0;
}
