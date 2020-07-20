#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDigitOne(int n) 
{ 
    int countr = 0; 
    for (int i = 1; i <= n; i++) { 
        string str = to_string(i); 
        countr += count(str.begin(), str.end(), '1'); 
    } 
    return countr;
}

int main()
{
    int n = 13; 
    cout << countDigitOne(n) << endl; 
    n = 131; 
    cout << countDigitOne(n) << endl; 
    n = 159; 
    cout << countDigitOne(n) << endl; 
    
    return 0;
}
