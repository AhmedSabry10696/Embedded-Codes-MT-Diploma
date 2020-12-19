#include <stdio.h>
#include <stdlib.h>

struct student
{
    char *first_name;
    char *second_name;
    int id;
    float grade;
}st_arr[2],*s_ptr;

int main()
{
    s_ptr = st_arr; //make it pointer to first array element
    int * pf;

    /* write st_arr[0] values using s_ptr */
    s_ptr->first_name = "Mohamed";
    s_ptr->second_name = "Tarek";
    s_ptr->id = 1;
    s_ptr->grade = 95.75;

    printf("Student 1 Information :\n");
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",st_arr[0].first_name,st_arr[0].second_name,st_arr[0].id,st_arr[0].grade);

    printf("Student 1 Information :\n");
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s_ptr->first_name,s_ptr->second_name,s_ptr->id,s_ptr->grade);
    
    s_ptr++;

    /* write st_arr[1] values using s_ptr */
    s_ptr->first_name = "Ayman";
    s_ptr->second_name = "Hessuin";
    s_ptr->id = 2;
    s_ptr->grade = 90;

    printf("Student 2 Information :\n");
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",st_arr[1].first_name,st_arr[1].second_name,st_arr[1].id,st_arr[1].grade);

    printf("Student 2 Information :\n");
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s_ptr->first_name,s_ptr->second_name,s_ptr->id,s_ptr->grade);
    return 0;
}
