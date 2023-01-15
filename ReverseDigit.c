#include<stdio.h>
int main()
{
    int n,rev=0,div,rem;
    printf("enter the number you want to revese");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
       
        rev=rev*10+rem;
         n=n/10;
         
        
        }
        printf("%d",rev);

}