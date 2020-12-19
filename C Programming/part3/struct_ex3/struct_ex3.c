// program explain the pointer to structure concept

#include <stdio.h>
#include <stdlib.h>

// struct declaration
struct student
{
    char *first_name;
    char *second_name;
    int id;
    float grade;
}st_arr[2],*s_ptr;  // define array of two structures and pointer to structure

int main()
{
    s_ptr = st_arr; // pointer to first array element (structure)
    int * pf; // pointer to integer data

    // write st_arr[0] values using s_ptr
    s_ptr->first_name = "Ahemd";
    s_ptr->second_name = "Sabry";
    s_ptr->id = 1;
    s_ptr->grade = 95.75;

    printf("Student 1 Information :\n");
    // print data of the first student using array name
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",st_arr[0].first_name,st_arr[0].second_name,st_arr[0].id,st_arr[0].grade);

    printf("Student 1 Information :\n");
    // print data of the first student using pointer to srucrure
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s_ptr->first_name,s_ptr->second_name,s_ptr->id,s_ptr->grade);
    
    // increament will increase pointer with the size of whole structure then it could point to the next struct
    s_ptr++; 

    // write st_arr[1] values using s_ptr
    s_ptr->first_name = "Ayman";
    s_ptr->second_name = "Hessuin";
    s_ptr->id = 2;
    s_ptr->grade = 90;

    printf("Student 2 Information :\n");
    // print data of student 2 using array name
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",st_arr[1].first_name,st_arr[1].second_name,st_arr[1].id,st_arr[1].grade);

    printf("Student 2 Information :\n");
    // print data of student 2 using pointer name
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s_ptr->first_name,s_ptr->second_name,s_ptr->id,s_ptr->grade);
    
    return 0;
}
