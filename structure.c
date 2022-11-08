#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int r_no;
     char name[20];
     char course[20];
     float fees;
};
struct student stu1;

printf("\nenter details of studet:\n");
printf("roll number:");
scanf("%d",&stu1.r_no);
printf("name:");
scanf("%s",&stu1.name);
printf("course:");
scanf("%s",&stu1.course);
printf("fees");
scanf("%f",&stu1.fees);







}
