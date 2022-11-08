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
     struct student stu[10];
  
    int i,n; 
    printf("\nenter stdents:\n");
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
    
        printf("\nenter the roll number:\n");
        scanf("%d",&stu[i].r_no);
        printf("\nenter the name of student:\n");
        scanf("%s",&stu[i].name);
        printf("\nenter the course of student:\n");
        scanf("%s",&stu[i].course);
        printf("\n enter the fees:\n");
        scanf("%f",&stu[i].fees);

     }
     for(i=0;i<n;i++)
     {
        printf("\nroll number %d\n",&stu[i].r_no);
        printf("\n name=%s \n",&stu[i].name);
        printf("\ncourse=%s \n",&stu[i].course);
        printf("\nfees=%f \n",&stu[i].fees);
        printf("-------------------------------------------------------");

     }

}