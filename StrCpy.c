#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("enter string-1 :");
    gets(str1);
    
   
    int ch,i;
    printf("enter choice for copy of string:\n1 for by using string function\n2.without using string function\n");
    scanf("%d",&ch);
    switch(ch)
   { case 1:
   {
      printf("copied string by using strcpy(): %s",strcpy(str2,str1));
   }
    break;
    case 2:
    {
        
    for(i=0;str1[i]!='\0';i++)
    {
          str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("copied string without using strcpy() %s:",str2);
    }
    break;
    default:
    printf("there is no such case");
    }
    
    return 0;

}