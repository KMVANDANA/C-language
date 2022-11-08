#include<stdio.h>
int main()
{
    int arr[10][10],i,j,r,c;
    printf("enter row and colume");
    scanf("%d%d",&r,&c);
    printf("\n enter element\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is\n:");
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            if(i==j)
           { printf("%5d",arr[i][j]);}
           else{printf("\t 0\t ");}
        }
        printf("\n");
    }
    
}