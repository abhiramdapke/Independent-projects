#include <iostream>
#include <string>
#include <utility>
using namespace std;

pair<char, int> longestconsecutivechar(string s, int &n)
{
    int max_count = 0;
    int count = 0;
    char max_char;
    char prev_char;
    for (char x:s)
    {
        if (prev_char == x)
            count+=1;
        else
            count = 1;
        
        if (count>max_count)
        {
            max_count = count;
            max_char = x;
        }
        prev_char = x;
    }
    return make_pair(max_char,max_count);
}

int main()
{
   string s = "AABBHHDDSSNNAUEJSHFBSSSS";
   int n = s.size();
   pair<char, int> p = longestconsecutivechar(s, n);
    cout << p.first << " " << p.second;
   
    return 0;
}
