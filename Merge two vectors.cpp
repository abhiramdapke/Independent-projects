#include <iostream>
#include <vector>

using namespace std;

//merging can be done only on sorted list.
//we need a third array
//TC - O(m+n)
void merge(vector<int> a,vector<int> b)
{
    vector<int> c;
    int i=0,j=0;
    int n = a.size();
    int m = b.size();
    
    while (i<n && j<m)
    {
        if (a[i]<b[j])
        {
            c.push_back(a[i++]);
        }
        else
        {
            c.push_back(b[j++]);
        }
    }
    for (;i<n;i++)
    {
        c.push_back(a[i]);
    }
    for (;j<m;j++)
    {
        c.push_back(b[j]);
    }
    for (auto it = c.begin();it!=c.end();it++)
    {
        cout << *it << " ";
    }
    
   
}
int main()
{
    vector<int> a = {1,12,23,44,55,66};
    vector<int> b = {6,17,18,29};
    merge(a,b);
    
    return 0;
}
