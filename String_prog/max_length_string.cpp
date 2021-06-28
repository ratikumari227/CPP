#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
    char arr[]="Rati is a CSE student in IITJ";
    int currlen=0,maxlen=0;
    int max_word_str=0;
    for(int i=0; i < strlen(arr); i++)
    {
        if(arr[i]!=' ')
        {
            currlen++;
        }
        else
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
                max_word_str=i-maxlen;
            }
            currlen=0;
        }
    }
    cout<<"Max length string is "<<maxlen<<endl;

    for(int i=0;i<maxlen;i++)
    {
        cout<<arr[i+max_word_str];
    }
    return 0;
}
