#include<iostream>
#include<string>
using namespace std;

int  countPath(int n,int i,int j)
{
    if(i==n-1 && j==n-1)
        return 1;
    if(i>n-1 ||j>n-1)
        return 0;
    return countPath(n,i+1,j)+countPath(n,i,j+1);
}

int main()
{
    // size of the square maze,start_i,start_j
    cout<<countPath(3,0,0);
    return 0;
}