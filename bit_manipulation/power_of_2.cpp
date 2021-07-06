#include<iostream>
using namespace std;
int isPower2(int n)
{
    return (n && !(n & n-1));
}

int main()
{
    cout<<isPower2(1024);
    return 0;
}