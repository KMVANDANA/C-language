#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter string :");
    gets(str);
   
    int ch,i,count=0;
    printf("enter choice for lenght of string:\n1 for by using string function\n2.without using string function");
    scanf("%d",&ch);
    switch(ch)
   { case 1:
   { printf("%d",strlen(str));}
    break;
    case 2:
    {
        for(i=0;str[i]!='\0';i++)
        {
            count++;
        }
        printf("%d",count);
    }
    break;
    default:
    printf("there is no such case");
    }
    
    return 0;

}