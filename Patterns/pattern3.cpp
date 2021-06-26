#include <iostream>
using namespace std;

/*

* 
* *      
* * *    
* * * *   
* * * * *

*/
int main() {
	// your code goes here
    int n=5;
    // cout<<"enter row and column :"<<endl;
    // cin>>row>>col;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
	return 0;
}
