#include<iostream>
using namespace std;
int Unique(int arr[],int n)
{
    int array_Sum=0;
    for(int i=0;i<n;i++)
    {
        array_Sum=array_Sum ^ arr[i];
    }
    return array_Sum;
}

int main()
{
    int arr[]={1,4,3,3,4,1,2};
    cout<<Unique(arr,4);
    return 0;
}