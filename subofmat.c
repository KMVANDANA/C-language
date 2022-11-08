#include<stdio.h>
int main()
{
    int arr1[10][10],arr2[10][10],i,j,r,c,sum[10][10];
    printf("enter row and colume");
    scanf("%d%d",&r,&c);
    printf("\n enter element in first matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
     printf("\n enter element in second matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
    printf("sub of marix is: \n");
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
             printf("%5d",sum[i][j]);

        }
        printf("\n");
    }
return 0;

   

   
    }
