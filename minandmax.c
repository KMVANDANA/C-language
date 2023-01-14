#include<stdio.h>
int main()
{
    int arr[10]={34,67,45,23,12,89};
    int i,j;
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<6;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d\n%d",min,max);

   
    return 0;
}
