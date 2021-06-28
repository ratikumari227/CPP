#include <iostream>
#include <string.h>
#include<algorithm>
using namespace std;

int max_freq(string s)
{
    char freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0; i < s.length(); i++)
    {
        freq[s[i]-'a']++;
    }
    int maxfreq=0;
    char max_character;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxfreq)
        {
            maxfreq=freq[i];
            max_character='a'+i;
        }
    }
    return maxfreq;
    // cout<<"Max freq character is "<<max_character<<"    "<<maxfreq<<endl;
}
int main() {
	// your code goes here
    cout<<"Enter a string\n";
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    max_freq(s);
    string max_freq_word="";
    int max_freq_count=0;
    string word="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ' || s[i]=='.')
        {
            if(max_freq(word) > max_freq_count)
            {
                max_freq_count= max_freq(word);
                max_freq_word=word;
            }
            word="";
        }
        word+=s[i];
    }
    cout<<max_freq_word<<endl;
    return 0;
}
