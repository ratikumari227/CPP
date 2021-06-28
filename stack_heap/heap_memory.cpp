#include <iostream>
using namespace std;
int main()
{
    int a=10;   //memory allocated in stack
    int *p=new int();   //memory allocated in heap
    *p=20;
    cout<<a<<" "<<p<<"  " <<*p<<endl;  
    delete(p);
    cout<<*p<<" "<<p<<endl;
    p=new int[4];
    cout<<*p<<"  "<<p<<endl;
    delete[]p;
    cout<<p;
    p=NULL;
    cout<<p;
    return 0;
}