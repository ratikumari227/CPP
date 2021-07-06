#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void countSort(int arr[],int n)
{
    // find max element of arr
    int max_ele=arr[0];
    for(int i=0;i<n;i++)
    {
        max_ele=max(arr[i],max_ele);
    }

    int countArray[max_ele+1]={0};

    for(int i=0;i<n;i++)
    {
        countArray[arr[i]]++;
    }

    for(int i=1;i<=max_ele;i++)
    {
        countArray[i]+=countArray[i-1];
    }

    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[--countArray[arr[i]]]=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }
}
int main()
{
    int arr[]={10,16,7,14,5,3,12,9};
    countSort(arr,8);
    return 0;
}