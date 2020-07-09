#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//An anagram is made by rearranging the letters in a string but the have a meaning.
//Every anagram is a permutation but every permutation is not an anagram.

bool checkpermutation(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    
    if (n!=m)
        return false;
        
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    for (int i=0;i<n;i++)
    {
        if (s1[i]!=s2[i])
            return false;
    }
    return true;
   
}

int main()
{
    string s1 = "abcd";
    string s2 = "klji";
    
    if (checkpermutation(s1,s2))
        cout << "Strings are permutations of each other";
    else
        cout << "Strings are not permutations of each other";

    return 0;
}
