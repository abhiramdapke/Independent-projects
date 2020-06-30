#include <iostream>
#include <algorithm>
using namespace std;

//Time complexity  - o(nlogn)
//1. Sort the array
//2. return the (k-1)th element
void kthelement(int arr[], int n, int k)
{
    sort(arr,arr+n);
    cout << arr[k-1];
}

int main()
{
    int arr[] = {1,6,8,7,9,4,3,5};
    int n  = (sizeof(arr)/sizeof(arr[0]));
    int k = 4;
    kthelement(arr, n, k);

    return 0;
}
