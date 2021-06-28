#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int t=a;
    a=b;
    b=t;
}
void swapr(int* a, int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int a=10,b=20;
    cout<<"Initial value\n"<<a<<"  "<<b<<endl;
    cout<<"call by value"<<endl;
    swap(a,b);
    cout<<a<<"  "<<b<<endl;
    cout<<"call by reference"<<endl;
    swapr(&a,&b);
    cout<<a<<"  "<<b<<endl;
    return 0;
}