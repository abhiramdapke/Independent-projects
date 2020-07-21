#include <iostream>
#include <algorithm>
using namespace std;

//t1 is a child thread
//a thread should be either joined or detached only once.
void findpair(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int l = 0;
    int r = n-1;
    while (l<r)
    {
        if (arr[l] + arr[r] == k)
        {
            cout << "The two numbers are " << arr[l] << " " << arr[r] << endl;
            return;
        }
        else if (arr[l] + arr[r] < k)
            l++;
        else
            r--;
    }
    cout << "No such numbers in the array" << endl;
}

int main()
{
    int arr[] = {-1,-8,5,9,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    findpair(arr,n,k);

    return 0;
}
