#include <iostream>
#include <string>
using namespace std;

bool isunique(string a)
{
    int n = a.size();
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i] == a[j])
                return false;
        }
    }
    return true;
}

int main()
{
    string s = "abcdeff";
    if (isunique(s))
        cout << "String has all unique characters" << endl;
    else
        cout << "String has duplicate characters" << endl;

    return 0;
}
