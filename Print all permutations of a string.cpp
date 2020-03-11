
#include <iostream>

using namespace std;


void permute(string a, int l, int h)
{
    if (l == h)
        cout << a << endl;
        
    else
    {
        for (int i = l; i <= h; i++)
        {
            swap (a[l],a[i]);
            permute(a,l+1,h);   //recursion
            swap(a[l],a[i]);    //backtracking
        }
    }
}

int main()
{
    string s = "ABCDEFG";
    int n = s.size();
    permute(s,0,n-1);
    

    return 0;
}
