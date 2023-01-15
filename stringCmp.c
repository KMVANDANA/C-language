#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("enter string-1 :");
    gets(str1);
     printf("enter string-2:");
    gets(str2);
   
    int ch,i,count=0,cmp=0;
    printf("enter choice for compair of string:\n1 for by using string function\n2.without using string function");
    scanf("%d",&ch);
    switch(ch)
   { case 1:
   { if(strcmp(str1,str2)==0)
          {printf("same string\n");
          }
          else{printf("not same string");}
     }
    break;
    case 2:
    {
        while(str1[i]!='\0'&&str2[i]!='\0')
        {
            if(str1[i]!=str2[i])
            {
                cmp=1;
                break;
            }
            i++;
        }
    if(cmp==0&&str1[i]=='\0'&&str2[i]=='\0')
    {
        printf("string are same");
    }
    else {
        printf("string are not same");
    }
        
    }
    break;
    default:
    printf("there is no such case");
    }
    
    return 0;

}