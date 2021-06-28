#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;
    cout<<a<<endl;
    cout<<aptr<<"    "<<++aptr<<"    "<<++aptr<<"    "<<++aptr<<endl;

    char b='a';
    char *bptr=&b;
    cout<<b<<endl;
    
    // check this error
    // cout<<bptr<<"    "<<++bptr<<"    "<<++bptr<<"    "<<++bptr;
    // cout<<"hello"<< ++bptr;

    int arr[]={10,20,30};
    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<"   ";
    }
    return 0;
}