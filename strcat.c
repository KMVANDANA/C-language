#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("enter string-1 :");
    gets(str1);
     printf("enter string-2:");
    gets(str2);
   
    int ch,i=0,j=0;
    printf("enter choice for concat of string:\n1 for by using string function\n2.without using string function");
    scanf("%d",&ch);
    switch(ch)
   { case 1:
   { 
    printf("by using strcat() concat=%s",strcat(str1,str2));

   }
     
    break;
    case 2:
    {
       while(str1[i]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\nConcatenated String is %s",str1);
    }
        
       
       
    
    break;
    default:
    printf("there is no such case");
    }
    
    return 0;

}