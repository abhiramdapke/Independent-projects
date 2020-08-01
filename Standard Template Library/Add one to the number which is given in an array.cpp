#include <iostream>
#include <vector>
using namespace std;

int* addone(int arr[], int n)
{
    int carry = 1;
    int sum;
    //int n = sizeof(arr)/sizeof(arr[0]);
    int *result = new int[n];
    for (int i=n-1;i>=0;i--)
    {
        sum = arr[i] + carry;
        if (sum == 10) carry = 1;
        else carry = 0;
        result[i] = sum % 10;
    }
    if (carry == 1)
    {
        result = new int[n+1];
        result[0] = 1;
    }
    return result;
}

int main()
{
    int arr[] = {9,9,9,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *vec = addone(arr,n);
    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    
    cout << endl;
    
    for (int i=0;i<n;i++)
        cout << vec[i] << " ";
    
    return 0;
}
