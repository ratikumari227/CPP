#include <iostream>
using namespace std;

int binary_search(int arr[],int begin,int end,int number)
{
    int mid;
    while (begin<=end)
    {
        mid=(begin+end)/2;
        if(arr[mid]==number)
            return mid;
        else if(arr[mid]<number)
            begin=mid+1;
        else if(arr[mid]>number)
            end=mid-1;
    }
    return -1;
}
int main() {
	// your code goes here
    
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int number=1;
    cout<<binary_search(arr,0,9,number);
    return 0;
}
