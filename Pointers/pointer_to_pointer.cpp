#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int *aptr=&a;
    cout<<a<<" "<<*aptr<<endl;

    int **bptr=&aptr;
    cout<<**bptr;
    return 0;
}