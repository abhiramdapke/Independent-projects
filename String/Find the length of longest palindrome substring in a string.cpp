#include <iostream>
#include <string>
using namespace std;

void printsubstr(string str, int low, int high)
{
    for (int i = low;i<=high;i++)
    {
        cout <<str[i];
    }
}

int longestsubstr(string str)
{
    int n = str.size();
    
    //all substrings of length 1 are palindromes
    int maxlen = 1, start = 0;
    
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            int flag = 1;
            //check palindrome
            for (int k=0;k<(j-i+1)/2;k++)
                if (str[i+k]!=str[j-k])
                    flag = 0;
                
            //palindrome
            if (flag && (j-i+1)>maxlen)
            {
                start = i;
                maxlen = j-i+1;
            }
        }
    }
    cout << "Longest substr is ";
    printsubstr(str, start, start+maxlen-1);
    cout << endl;
    return maxlen;
}

int main()
{
    string str = "forgeeksskeegfor";
    cout << "Length is: " << longestsubstr(str);

    return 0;
}
