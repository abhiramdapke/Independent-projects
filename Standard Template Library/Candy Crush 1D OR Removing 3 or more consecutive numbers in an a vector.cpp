#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1,2,2,3,2,2,2,5,5,5,5,5,5,6,4,7};

    for (int i=0;i<v.size();i++)
    {
        int j;
        for (j=0;j<v.size();j++)
        {
            if (v[i]!= v[i+j])
                break;
        }
        
        if (j<3)
            continue;
            
        for (int k = i; k < v.size(); k++) {
        if (k + j < v.size()) {
            v[k] = v[k + j];
            }
        }
        v.resize(v.size() - j);
    }
    
    for (auto it: v)
        cout << it << " ";
    
    
    return 0;
}
