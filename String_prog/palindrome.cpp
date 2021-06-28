#include <iostream>
#include <string.h>
using namespace std;

void palindrome(char a[])
{
    int len = strlen(a)-1;
    int i=0,f=0;
    while(i<=len)    
    {
        if(a[i] != a[len-i])
            f=1;
        i++;
    }
    if(f==1)
        cout<<"Not palindrome string";
    else
        cout<<"Palindrome string";
}
int main() {
	// your code goes here
    char arr[]="nitin";
    palindrome(arr);
    return 0;
}
