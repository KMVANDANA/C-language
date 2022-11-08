#include<stdio.h>
int main()
{
    int arr[10][10],tar[10][10],i,j,r,c;
    printf("enter  row and colume");
    scanf("%d%d",&r,&c);
    printf("enter values:");
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n  mat is \n");
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            printf("%5d",arr[i][j]);
        }
    }
    printf("\n");
    tar[j][i]=arr[i][j];
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            printf("%5d",tar[j][i]);
        }
    }
    return 0;
}