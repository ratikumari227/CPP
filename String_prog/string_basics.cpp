#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str(4,'a');
    cout<<str<<endl;
    // read entire line
    // getline(cin,str);
    // cout<<str;

    // append
    string s1="fam";
    string s2="ily";
    s1.append(s2);
    
    cout<<s1.erase(3,2)<<endl;
    cout<<s1<<endl;
    cout<<s1+s2<<endl;

    // read a character 
    cout<<s1[0]<<endl;
    cout<<s1.find("fam")<<endl;
    s1.clear();
    cout<<s1.empty()<<endl;

    // insert
    cout<<s2.insert(0,"fam")<<endl;
    cout<<s2.length()<<endl;
    string abc=s2.substr(2,3);
    cout<<abc<<endl;

    s1="786";
    // cout<<s1+1<<endl;
    int n=stoi(s1);
    cout<<n+1<<endl;

    cout<<to_string(n)+s1<<endl;

    string x="fsbfisafbjsc szdsaadsajii";
    sort(x.begin(),x.end());
    cout<<x<<endl;


    // uppercase lowercase
    string lower="fsfnkjszh";

    transform(lower.begin(),lower.end(),lower.begin(),::toupper);
    cout<<lower<<endl;
    transform(lower.begin(),lower.end(),lower.begin(),::tolower);
    cout<<lower<<endl;
    
    for(int i=0;i<lower.size();i++)
    {
        if(lower[i]>='a' && lower[i]<='z')
        lower[i]-=32; //lower to upper and vice versa
    }
    // cout<<lower<<endl;
    return 0;

}