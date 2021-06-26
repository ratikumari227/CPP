#include <iostream>
using namespace std;


// select the smallest number from the unsorted list and swap with the first element in unsorted list.
void selection_sort(int arr[],int n){

    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            min=(arr[j]<arr[min])?j:min;
        }
        if(i!=min)
            {
                int t=arr[min];
                arr[min]=arr[i];
                arr[i]=t;
            }
    }
    cout<<"sorted array is:: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[10]={3,2,6,4,1,8,9,7,0,5};
    selection_sort(arr,10);    
    return 0;
}
