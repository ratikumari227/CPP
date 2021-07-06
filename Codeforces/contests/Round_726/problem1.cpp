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
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s+=x;
        }
        if(s-n >= 0)
        cout<<(s-n)<<endl;
        else
        cout<<1<<endl;
    }
    
    return 0;
}