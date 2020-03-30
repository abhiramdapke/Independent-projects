#include <iostream>

using namespace std;

//there should atleast be one element in a binary heap
void insert(int arr[], int n)
{
    int i = n;
    int temp = arr[i];
    while (i>1 && temp>arr[i/2])  //check its parent
    {
        arr[i] = arr[i/2];
        i = i/2;
    }
    arr[i] = temp;
}



int main()
{
    int a[] = {0,14,15,5,20,30,8,40};
    
    for (int i=2;i<=7;i++)
    {
        insert(a,i);
    }
    
    for (int j=1;j<=7;j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;

    return 0;
}
