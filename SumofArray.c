#include <stdio.h>
int main(){
    int sum=0,arr[100],n,i,j;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
   { for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        
        sum=sum+arr[i];
         
    }
      printf("%d",sum);}
  
    return 0;
   
    }
