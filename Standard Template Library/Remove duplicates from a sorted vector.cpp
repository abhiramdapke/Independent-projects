#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int len = n;
        for (int i=0;i<n;i++)
        {
            if (nums[i+1] == nums[i])
            {
                len--;
            }
        }
    return len;
        
}
int main()
{
    vector<int> a = {0,0,1,1,1,1,2,2,2,5,5,6,7,8,9};
    int len = removeDuplicates(a);
    cout << len << endl;
    
    /*for (auto it = a.begin(); it!=a.end();it++)
    {
        cout << *it << " ";
    }*/

    return 0;
