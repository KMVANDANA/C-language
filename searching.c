#include<stdio.h>
int main()
{
    int arr[100],n,i,num;
    printf("enter size of an array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
    printf("eter num you want to search\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        printf("num index is %d",i);
        else printf("not found");
    }
    return 0;

}