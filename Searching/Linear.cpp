#include <iostream>
using namespace std;

int linear_search(int arr[],int n,int number){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==number)
        return i;
    }
    return -1;
	
}
int main() {
	// your code goes here
    int arr[10]={3,2,6,4,1,8,9,7,0,5};
    int number=5;
    cout<<linear_search(arr,10,number);
    return 0;
}
