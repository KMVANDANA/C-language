#include<stdio.h>
int main()
{
    int arr[100],n,i,j;
    int count=0,flage=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\t%d",&arr[i]);

    }
    for(i=0;i<=n;i++)
    {
        if(arr[i]%2!=0)
        {
            count=count+1;
        }
        else{
            flage=flage+1;
        }

    }
    printf("odd count=%d,even flage=%d",count,flage);
    

}