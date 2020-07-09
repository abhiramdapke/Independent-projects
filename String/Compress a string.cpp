#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//For eg: string s = "aaaaaabbb" becomes string s1 = "a6b3";

string stringcompression(string s)
{
    string a{};
    char last = s[0];
    unsigned count = 1;
    
    for (int i=1;i<=s.size();i++)
    {
        if (i!=s.size() && s[i] == last)
        {
            count++;
        }
        else
        {
            //append to string - .append()
            //append char to string - .push_back()
            a += last;
            a.append(to_string(count));
            count = 1;
            last = s[i];
        }
    }
    
    if (a.size() < s.size())
        return a;
    else
        return s;
}    
    

int main()
{
    string s1 = "aaaabbcccccdd";
    
    cout << stringcompression(s1) << endl;

    return 0;
}
