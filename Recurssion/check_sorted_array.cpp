#include<iostream>
using namespace std;
int  isSorted(int arr[],int n)
{
    if(n == 1)
        return 1;
    
    if(arr[n-1]>arr[n-2])
       return isSorted(arr,n-1);
    else
       return 0;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<isSorted(a,n);
    return 0;
}