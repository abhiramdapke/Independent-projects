#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {0,2,6,8,9};
    
    //access elements in a vector
    cout << v[1] << endl; 
    
    //sort the vector
    sort(v.begin(),v.end());
    
    bool present = binary_search(v.begin(),v.end(),3);
    cout << present << endl;
    present = binary_search(v.begin(),v.end(),8);
    cout << present << endl;
    
    //push elem in a vector
    v.push_back(23);
    
    
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(140);
    
    
    //first & last occurance of 100
    auto it = lower_bound(v.begin(),v.end(),100);  // >=
    auto it2 = upper_bound(v.begin(),v.end(),100); // >
    
    cout << *it << "   " << *it2 << endl;
    cout << it2 - it << endl;   //5
    
    
    for(int x: v)
    {
        cout << x << " ";
    }
    
    cout << endl;
    
    for(int &y: v) //reference
    {
        y++;
        cout << y << " ";
    }
    
    return 0;
}
