#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swapzeros(vector<int> arr)
{
    int l = 0;
    int n = arr.size();
    int h = n-1;
    
    while (l<h)
    {
        if (arr[l]!=0)
            l++;
        if (arr[h]==0)
            h--;
        if (arr[l]==0 && arr[h] != 0)
            swap(arr[l++],arr[h--]);
    }
    for (auto it: arr)
        cout << it << " ";
}


int main()
{
    vector<int> v = {0,1,2,5,0,1,6,0,2,4,0,0,0,0,0,0,6};
    swapzeros(v);

    return 0;
}
