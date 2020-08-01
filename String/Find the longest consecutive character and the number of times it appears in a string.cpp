#include <iostream>
#include <string>
#include <utility>
using namespace std;

//Method 1 - using pairs
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

//Method 2 - TC - O(n)
#include <iostream>
#include <string>
using namespace std;

//Time complexity - O(n)

char longestconsecutivechar(string s, int &n)
{
    int curr_count = 1;
    int count = 0;
    char res = s[0];
    for (int i=0;i<n;i++)
    {
        if (s[i] == s[i+1] && i+1<n )
        {
            curr_count++;
        }
        else
        {
            if (curr_count>count)
            {
                count = curr_count;
                res = s[i];
            }
            curr_count = 1;
        }
    }
    return res;
}

int main()
{
   string s = "AABBHHDDSSNNAUEJSHFbbbbbbBSSSS";
   int n = s.size();
   cout << longestconsecutivechar(s, n);
   
   return 0;
}

