#include<iostream>
#include<string>
using namespace std;

int  friends_Pairing(int n)
{
    if(n==0 || n==1 || n==2)
        return n;
    return friends_Pairing(n-1)+friends_Pairing(n-2)*(n-1);
}

int main()
{
    // size of the square maze,start_i,start_j
    cout<<friends_Pairing(4);
    return 0;
}