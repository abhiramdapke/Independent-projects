#include <iostream>

using namespace std;

int deletefromarr(int arr[],int n,int pos)
{
    int i,x;
    x = arr[pos];
    for (i=pos;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    return n;
}
void printarray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    static int arr[] = {1,2,3,4,5};
    static int n = (sizeof(arr)/sizeof(arr[0]));
    
    printarray(arr,n);
    cout << endl;
    n = deletefromarr(arr,n,3);
    cout << endl;
    printarray(arr,n);
    
    return 0;
}
