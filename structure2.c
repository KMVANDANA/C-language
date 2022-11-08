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
struct student stu;
struct student stu1={1201,"abc","mca",120000};
struct student stu2={1202,"def","mca",120000};
struct student stu3={1203,"ghi","mca",120000};
printf("---------------------------------student1------------------------------------");
printf("\nroll number=%d\nname=%s\ncourse=%s\nfees=%f",stu1.r_no,stu1.name,stu1.course,stu1.fees);
printf("-----------------------------------student2-------------------------------------");
printf("\nroll number=%d\nname=%s\ncourse=%s\nfees=%f",stu2.r_no,stu2.name,stu2.course,stu2.fees);
printf("------------------------------------student3----------------------------------");
printf("\nroll number=%d\nname=%s\ncourse=%s\nfees=%f",stu3.r_no,stu3.name,stu3.course,stu3.fees);
}