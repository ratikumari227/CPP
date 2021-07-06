#include<iostream>
using namespace std;
string keypadArray[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxtz"};
void  keypad(string s,string ans)
{
    if(s.length() == 0)
    {
            cout<<ans<<endl;
            return;
    }
    char ch=s[0];
    string code=keypadArray[ch-'0'];
    string ros = s.substr(1);

    for(int i=0;i<code.length();i++)
    {
        keypad(ros,ans+code[i]);
    }
    keypad(ros,ans);
    keypad(ros,(ch+ans));
}

int main()
{
    int n;
    keypad("23","");
    return 0;
}