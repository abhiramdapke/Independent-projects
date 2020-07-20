#include <iostream>
#include <algorithm>
using namespace std;

//Time complexity - O(nlogn)

void dupmissarr(int arr[], int n)
{
    sort(arr, arr+n);
    int sum = 0; 
    int b;
    for (int i=0;i<n;i++)
    {
        if (arr[i] == arr[i+1])
        {
            cout << "Duplicate element is " << arr[i+1] << endl;
            b = arr[i+1];
        }
    }
    sum = (n*(n+1)/2)+b;
    for (int i=0;i<n;i++)
    {
        sum-= arr[i];
    }
    cout << "Missing element is " << sum;
}

int main()
{
    int arr[] = {1,2,3,4,6,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    dupmissarr(arr,n);
    
    return 0;
}
