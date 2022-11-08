#include<stdio.h>
int main()
{
    int arr[3][3],i,j;
    printf("\n enter the values in matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("your matrix\n\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%5d:",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}