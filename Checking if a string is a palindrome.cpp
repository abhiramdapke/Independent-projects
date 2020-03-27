#include <iostream>
#include <string>
using namespace std;

void palindromestring(string s)
{
    int n = s.size();
    string a;
    int i,j;
    for (i=n-1,j=0;i>=0;i--,j++)
    {
        a[j] = s[i];
    }
    i = 0;
    for (;i<n;i++)
    {
        if (a[i] == s[i])
            continue;
        else {
            cout << "The string is not a palindrome" << endl;
            return;
        }
    }
    cout << "The string is a palindrome" << endl;
    return;
   
}

void palindromeeasy(string s)
{
    int l = 0;
    int h = s.size()-1;
    while (l<h)
    {
        if (s[l++] != s[h--])
        {
            cout << "Not a palindrome" << endl;
            return;
        }
    }
    cout << "Is a palindrome" << endl;
}

int main()
{
    string s = "nayasan";
    palindromestring(s);
    
    return 0;
}
