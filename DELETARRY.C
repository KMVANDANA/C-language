#include<stdio.h>
int main()
{
    int arr[100],i,j,index,size;
    printf("enter size of an array\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("\n created array\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nenter position of array you want to remove\n");
    scanf("%d",&index);
    for(i=0;i<=index-1;i++)
    {
        printf("%d",arr[i]);
    }
    if(index<=size-1)
    {
        for (i = index ; i < size-1; i++)  
        {  
            arr[i] = arr[i+1];
             printf("%d\t",arr[i]);
        }  
 


    }
    else{
        printf("deletion not posible");
    }
   
}