#include <iostream>
using namespace std;


// largest number from the unsorted list bubble up so called as bubble sort.
void bubble_sort(int arr[],int n){
    int counter=1,temp;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        counter++;
    }
    cout<<"sorted array is:: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[10]={3,2,6,4,1,8,9,7,0,5};
    bubble_sort(arr,10);    
    return 0;
}
