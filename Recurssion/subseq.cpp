#include<iostream>
using namespace std;
void  subSequence(string s,string ans)
{
    if(s.length() == 0)
    {
            cout<<ans<<endl;
            return;
    }
    char ch=s[0];
    string ros = s.substr(1);
    subSequence(ros,ans);
    subSequence(ros,(ch+ans));
}

int main()
{
    int n;
    subSequence("ABC","");
    return 0;
}