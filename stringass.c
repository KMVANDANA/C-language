#include<stdio.h>
#include<string.h>
int length();
int copy();
int append();
int compare();
int reverse();
int main()

{ int choice;
    char str1[30]="hello",app;
    char str2[20]="world";
    printf("\nenter your choise to perform operation on string:\n 1 for length\n2 for copy\n3 for append\n 4 for compare\n 5 for reverse\n");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
        {
            strlen(str1);
            printf("length of string:%s",strlen(str1));

        }
        break;
        case 2:
        {
            strcpy(str1,str2);
            printf("str2 copy in str1:%s",str1);
        }
        break;
        case 3:
        {
        strcat(str1,str2);
        printf("append str:%s",strcat(str1,str2));
     }
     break;
     case 4:
     {
       if(strcmp(str1,str2)==0)
       { printf("string are equal:");
       }
       else{
        printf("strings are not equal:");
       }
     }
     break;
     case 5:
     { 
        strrev(str1);
        printf("revers of string:%s",strrev(str1));
     }
     break;
     default:
     printf("\n you have pressed wrong key:");


     }
     while(1);
}