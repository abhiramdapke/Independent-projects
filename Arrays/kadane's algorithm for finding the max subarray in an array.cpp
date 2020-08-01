#include <iostream>
#include <vector>
using namespace std;

/*Kadane's algorithm
1. Find the max subarray at ending at each index
2. compare all subarrays and return the max subarray
Time complexity - O(n^2) but can be reduced to O(n) by:
1. checking the ele at each ending index to be the curr ele or it is the (curr ele) +(prev max subarray)  
*/

int kadane(int a[], int &n)
{
    int max_curr = a[0];
    int max_global = a[0];
    for (int i=0;i<n;i++)
    {
        max_curr = max(a[i], max_curr + a[i]);
        if (max_curr>max_global)
            max_global = max_curr;
    }
    return max_global;
}

int main()
{
   int arr[] = {1,-3,2,1,-1};
   int n = sizeof(arr)/sizeof(arr[0]);
   int result = kadane(arr, n);
   cout << result;
   
    return 0;
}
