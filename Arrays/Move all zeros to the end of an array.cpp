#include <iostream>


using namespace std;

void swapzeros(int arr[], int n)
{
    int count = 0;
    
    for (int i=0;i<n;i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while (count<n)
        arr[count++] = 0;

    for (int j=0;j<n;j++)
        cout << arr[j] << " ";
}


int main()
{
    int v[] = {0,1,2,5,0,1,6,0,2,4,0,0,0,0,0,0,6};
    int n = (sizeof(v)/sizeof(v[0]));
    swapzeros(v,n);

    return 0;
}
