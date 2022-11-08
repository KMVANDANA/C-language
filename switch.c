#include<stdio.h>
int main()
{
    int choise,a=34,b=45,c;
      printf("\nenter a and b:\n");
    scanf("%d%d",&a,&b);

    printf("enter the choise:\n 1 for add\n2 for sub\n 3 for mul\n4 for div\n");
    scanf("%d",&choise);
  
    switch(choise)
    {
        case 1:
        c=a+b;
        printf("addition:%d",c);
        break;
         case 2:
         c=a-b;
        printf("addition:%d",c);
        break;
         case 3:
         c=a*b;
        printf("addition:%d",c);
        break;
         case 4:
         c=(a/b);
        printf("addition:%d",c);
        
        default:
        printf("you have entered wrong key");
        return 0;
    


    }
}