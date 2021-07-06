#include<iostream>
using namespace std;
int numOfOnes(int n)
{
    int c=0;
    while(n)
    {
        n = (n & n-1);
        c++;
    }
    return c;
}

int main()
{
    cout<<numOfOnes(19);
    return 0;
}