#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
   
    printf("enter string:");
    gets(str);
    
   
    int ch,i,len;
    printf("enter choice for reverse of a string:\n1 for by using string function\n2.without using string function\n");
    scanf("%d",&ch);
    switch(ch)
   { case 1:
   {
      printf("reverse string by using strcpy(): %s",strrev(str));
   }
    break;
    case 2:
    {
        len=strlen(str);
        for(i=len-1;i>=0;i--)
        {
            printf("%c",str[i]);
        }
    
   
    }
   }
    
    return 0;

}