#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void reversestring(string &s)
{
    int n = s.length();
    int start = 0;
    for (int i=0;i<n;i++)
    {
        if (s[i] == ' ')
        {
            reverse(s.begin()+start,s.begin()+i);
            start = i+1;
        }
    }
    
    //reverse the last Word
    reverse(s.begin()+start,s.end());
    
    //reverse the string
    reverse(s.begin(), s.end());
}

int main()
{
    string s = "Hello how are you";
    reversestring(s);
    cout << s;

    return 0;
}
