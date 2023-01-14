#include<stdio.h>
int main()
{
    int i,j,key,arr[100];
    int n=sizeof(arr[n])/sizeof(arr[0]);
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}