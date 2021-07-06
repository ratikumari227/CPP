#include<iostream>
using namespace std;

int main()
{

    int t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while (t--)
    {
        /* code */
        int n,s=0;
        cin>>n;
        int i;
        
        if(n%2==0)
        for(i=1;i<=n;i+=2)
        {
            cout<<i+1<<" "<<i<<" ";    
        }
        else
        {
            for(i=1;i<n-2;i+=2)
            {
                cout<<i+1<<" "<<i<<" ";    
            }
            cout<<i+2<<" "<<i<<" "<<i+1<<" ";    
        }
        cout<<endl;
    }
    
    return 0;
}