
#include <iostream>

using namespace std;

void NGE(int arr[], int n)
{
    int next;
    for (int i=0;i<n;i++)
    {
        next = -1;
        for (int j=i+1;j<n;j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << " -> " << next << endl;
    }
    
}

int main()
{
    int arr[] = {2,44,5,19,56,98,15};
    int n = 7;
    NGE(arr,n);

    return 0;
}
