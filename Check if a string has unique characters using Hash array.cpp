#include <iostream>
#include <string>
using namespace std;

bool isunique(string a)
{
    int n = a.size();
    int h[26] = {0};
    for (int i=0;i<n;i++)
    {
        h[a[i]-97]++;
    }
    for (int j=0;j<26;j++)
    {
        if (h[j] > 1)
        {
            cout << "The letter repeating is " << char(j+97) << endl;
            cout << "Number of times repeating " << h[j] << endl;
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "abcdefghijklmndop";
    if (isunique(s))
        cout << "String has all unique characters" << endl;
    else
        cout << "String has duplicate characters" << endl;

    return 0;
}
