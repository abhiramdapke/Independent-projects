#include <iostream>
#include <string>
using namespace std;

void reversearray(int a[], int n)
{
    int i,j;
    int b[n];
    for (i = n-1,j=0; i>=0;i--,j++)
    {
        b[j] = a[i];
    }
    for (i = 0; i< n;i++)
    {
        a[i] = b[i];
    }
}
int main()
{
    int arr[] = {2,55,6,81,9,181,56,89,985,12};
    reversearray(arr,10);
    for (uint k=0;k<sizeof(arr)/sizeof(arr[0]);k++)
    {
        cout << arr[k] << endl; 
    }
    return 0;
}
