/*

0 1 0 1 0 
1 0 1 0
0 1 0
1 0
0

*/
#include <iostream>
using namespace std;
int main()
{
    
    int n=5;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            if((i+j) %2 == 0)
            cout<<"0 ";
            else
            cout<<"1 ";
        cout<<endl;
    }
    return 0;

}