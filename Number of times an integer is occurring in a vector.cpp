#include <iostream>
#include <vector>
using namespace std;

int numoftimes(vector<int> &v, int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if (v[i] == 8) count=count+1;
    }
return count;
}


int main()
{
    vector<int> v = {2,3,5,6,4,8,8,8,8,8,9};
    int n = v.size();
    cout << "Number of times 8 is occuring is " << numoftimes(v,n) <<  endl;

    
    return 0;
}
