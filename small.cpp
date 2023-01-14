#include<iostream>
using namespace std;
int main()
{
    int arr[6]={34,67,34,89,23,45};
    for(int i=1;i<=5;i++)
    {
        if(arr[0]>arr[i])
        {
            arr[0]=arr[i];
        }
    }
    cout<<"minimum ="<<arr[0];

    return 0;
}