#include<iostream>
using namespace std;

void printAllSubset(int arr[],int n)
{

    for(int i=0; i < (i << n); i++)
    {
        for(int j=0; j < n ; j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int arr[4]={1,2,3,4};
    printAllSubset(arr,4);
    return 0;
}