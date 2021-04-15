/**
 * @file struct_ex3.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief explain pointer to structure
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief structure declaration
 * 
 */
struct student
{
    char *first_name;
    char *second_name;
    int id;
    float grade;
}st_arr[2],*s_ptr;
/* define array of two structures and pointer to structure */

int main()
{
     /* pointer to first array element (structure) */
    s_ptr = st_arr;
    
    /* pointer to integer data */
    int * pf; 

    /* write st_arr[0] values using s_ptr */
    s_ptr->first_name = "Ahemd";
    s_ptr->second_name = "Sabry";
    s_ptr->id = 1;
    s_ptr->grade = 93;

    printf("Student 1 Information :\n");
    /* print data of the first student using array name */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",st_arr[0].first_name,st_arr[0].second_name,st_arr[0].id,st_arr[0].grade);

    printf("Student 1 Information :\n");
    /* print data of the first student using pointer to srucrure */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s_ptr->first_name,s_ptr->second_name,s_ptr->id,s_ptr->grade);
    
    /* increament will increase pointer with the size of whole structure then it could point to the next struct */
    s_ptr++; 

    /* write st_arr[1] values using s_ptr */
    s_ptr->first_name = "Ayman";
    s_ptr->second_name = "Hessuin";
    s_ptr->id = 2;
    s_ptr->grade = 90;

    printf("Student 2 Information :\n");
    /* print data of student 2 using array name */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",st_arr[1].first_name,st_arr[1].second_name,st_arr[1].id,st_arr[1].grade);

    printf("Student 2 Information :\n");
    /* print data of student 2 using pointer name */
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s_ptr->first_name,s_ptr->second_name,s_ptr->id,s_ptr->grade);
    
    return 0;
}
