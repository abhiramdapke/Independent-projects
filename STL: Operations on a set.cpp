#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;


//Set practice
//Set elements are automatically sorted
int main()
{
   set<int> s;
   s.insert(1);
   s.insert(2);
   s.insert(-3);
   s.insert(-4);
   
   for(int x : s)
    cout << x << " ";
    
    cout << endl;
    
    auto it = s.find(-1);
    if (it == s.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "present" << endl;
        cout << *it << endl;
    }
    
    //practice with lower and upper bound
    auto it2 = s.lower_bound(-3);
    auto it3 = s.upper_bound(-3);
    cout << *it2 << "  " << *it3 << endl;
    
    
    auto it4 = s.upper_bound(3);
    if (it4 == s.end())
        cout << "couldn't find" << endl;
    else
    {
        cout << "found ";
        cout << *it4 << endl;
    }
    
    return 0;
}
