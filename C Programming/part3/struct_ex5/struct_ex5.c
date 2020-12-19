// pass structure members by values or refrence

#include <stdio.h>

// stucture declaration
struct student
{
    char *first_name;
    char *second_name;
    int id;
    float grade;
};

// function to edit struct element by value
void Student_member_by_Value(int id)
{
    id = 2;
}

// function to edit struct element by refrence
void Student_member_by_Reference(int * ptr_id) // pointer to int
{
   *ptr_id = 2;
}

int main()
{
    struct student s1={"Ahmed","Sabry",1,95.75}; //initialization like array must be in th
    printf("Student 1 Information :\n");
    // print student 1 data
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    Student_member_by_Value(s1.id); //pass s1.id by value
    printf("Student 1 Information :\n");
    // print student 1 data after by value pass
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    Student_member_by_Reference(&s1.id); //pass s1.id by address
    printf("Student 1 Information :\n");
    // print student 1 data after by refrence pass
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);
    return 0;
}
