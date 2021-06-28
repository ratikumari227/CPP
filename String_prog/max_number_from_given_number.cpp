#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string n;
    cout<<"Enter a number\n";
    cin>>n;
    sort(n.begin(),n.end(), greater<int>());
    cout<<n;
    return 0;
}