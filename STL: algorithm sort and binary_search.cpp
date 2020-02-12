#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


template <typename T>
void display(const T & v)
{
    if (!v.size())
        return;
    for (auto it : v)
        cout << it << " ";
    cout << endl;
}
int main()
{
    int n = 35;
    //numbers less than <100 unordered
    vector<int> v = {1,5,9,87,41,56,78,53,56,65,48,24,95,15,35,76,39,36,33};
    
    sort (v.begin(),v.end());
    display(v);
    
    if (binary_search(v.begin(),v.end(),n))
        cout << "found " << n <<  endl;
    else 
        cout << "did not find " << n << endl;
    
    return 0;
}
