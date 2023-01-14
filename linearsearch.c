// #include<stdio.h>
// int linearSearch(int a[],int n,int val)
// {
//     int i;
// for(i=0;i<n;i++)
// {
//     if(a[i]==val){
//         return i+1;
//     }
// }
// }
// int main()
// {
//     int a[]={10,23,45,6,7,89,99,56};
//     int val,i;
//     int n=sizeof (a)/sizeof a[0];
//     int res=linearSearch(a,n,val);
//     printf("the element are :\n");
//     for(i=0;i<=n;i++)
//     {
//         printf("%d",a[i]);
//     }
//     printf("element you want to search\n");
//     scanf("%d",&val);
//     if(res==-1)
//     {
//         printf("no element in array");
//     }
//     else{
//         printf("%d",res);
//     }

// return 0;
// }
#include<stdio.h>
int main()
{
    int a[100],val,i,n;
    printf("\n enter the size of an array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the array:\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);

    }
    printf("\nenter element you want to search\n");
    scanf("%d",&val);
    for(i=0;i<n;i++)

   { if(a[i]==val)
    
    printf("\t%d",i);

   }
   return 0;


}