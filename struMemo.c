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


}*ptr;
printf("enter roll number \n");
scanf("%d",&ptr->r_no);
printf("enter name:\n");
scanf("%s",&ptr->name);
printf("enter course\n");
scanf("%s",&ptr->course);
printf("enter fees\n");
scanf("%f",&ptr->fees);
printf("\nroll number: %d",ptr->r_no);
printf("\nname:%s",ptr->name);
printf("\ncourse:%s",ptr->course);
printf("\nfees:%f",ptr->fees);
}