#include <iostream>
// #include <stringstream>
#include <vector>
#include <string>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    string line = "Hello, this is Abhiram Dapke";
    
    vector<string> v;
    
    stringstream ss(line);
    
    string a;
    
    while(getline(ss,a,' '))
    {
        v.push_back(a);
    }
    
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }
    
//     string S,T;
//     cout << "enter  name";
//     getline(cin, S);
    
//     stringstream X(S);
//     while (getline(X,T,' '))
//         cout << T << endl;
//     return 0;
    
    return 0;
}
