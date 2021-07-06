#include<iostream>
#include<string>
using namespace std;

void  permutation(string s,string ans)
{
    if(s.length() == 0)
    {
            cout<<ans<<endl;
            return;
    }
    string ros;
    for(int i=0;i<s.length();i++)
    {
        
        char ch=s[i];
        ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
}

int main()
{
    int n;
    permutation("abc","");
    return 0;
}