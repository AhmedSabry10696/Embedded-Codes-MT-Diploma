#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[30];
}record[2],s1;

void main()
{
    record[0].id=1;
    strcpy(record[0].name, "Khaled");

    record[1].id=2;
    strcpy(record[1].name, "Ayman");

    printf("%d %s\n%d %s\n", record[0].id, record[0].name,record[1].id, record[1].name);
    printf("%u\n",sizeof(s1.id)+sizeof(s1.name)); //34
    printf("%u",sizeof(s1)); // 36 compiler added 2 bytes padding for alignment requirements.  
}
