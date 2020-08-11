#include <iostream>
#include <vector>
using namespace std;

//Use the concept of minima of maximum subarrays
/*
1. traverse form 0 - i-1 while on i
2. traverse from i+1 - n while on i
3. take their min & subtract the volume of water from the height of that index
*/

int trap(vector<int>& height) 
{
    int water = 0;
    int n = height.size();
    int lmax, rmax;
    for (int i=1;i<n-1;i++)
    {        
        lmax= height[i];
        for (int j=0;j<i;j++)
        {
            lmax = max(lmax, height[j]);
        }
        rmax = height[i];
        for (int j=i+1;j<n;j++)
        {
            rmax = max(rmax, height[j]);
        }
        water = water + (min(lmax, rmax) - height[i]);
    }
    
    return water;
}
    
int main()
{
    vector<int> v = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(v);
    

    return 0;
}
