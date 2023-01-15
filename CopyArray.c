#include<stdio.h>
int main()
{
    int arr[100],arr2[100],i,n;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
        
    }
    printf("\narr2 values:\n");
    for(i=0;i<n;i++)
    {
        arr2[i]=arr[i];
       
    }
    for(i=0;i<n;i++)
     {printf("%d\t",arr2[i]);}
    
    

        
        
    
}