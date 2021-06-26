#include <iostream>
using namespace std;

/*

* * * * *
*       *
*       *
*       *
* * * * *

*/
int main() {
	// your code goes here
    int row,col;
    cout<<"enter row and column :"<<endl;
    // cin>>row>>col;
    row=5;col=5;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==row||i==1 ||j==col||j==1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
	return 0;
}
