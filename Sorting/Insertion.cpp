#include <iostream>
using namespace std;

// select the smallest number from the unsorted list and swap with the first element in unsorted list.
void insertion_sort(int arr[],int n){

    for(int i=1;i<n;i++)
    {
        int index = i-1, current = arr[i];
        while (current < arr[index] && index >= 0)
        {
            arr[index+1]=arr[index];
            index--;
        }
            arr[index+1]=current;
    }
    cout<<"sorted array is:: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[10]={3,2,6,4,1,8,9,7,0,5};
    insertion_sort(arr,10);    
    return 0;
}
