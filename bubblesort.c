// #include<stdio.h>
// int main()
// {
//     int arr[10];
//     int i,j,n,temp;
//     printf("enter the size of an array\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//              temp=arr[i];
//              arr[i]=arr[j];
//              arr[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     {printf("%d\t",arr[i]);}
//     return 0;

// }



#include<stdio.h>
int main()
{int i,j;
int arr[10],n,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    for(j=1;j<n;j++)
    {
         if(arr[i]>arr[j])
         {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;

         }
         printf("%d",arr[i]);
    }
    
}


}