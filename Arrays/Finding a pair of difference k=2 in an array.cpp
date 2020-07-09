#include <iostream>
#include <string>
#include<math.h>
using namespace std;

int main()
{
int arr[] = {1,7,5,9,2,12,3};
int n= sizeof(arr)/sizeof(arr[0]);
for (int i = 0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
        if (fdim(arr[i],arr[j]) == 2)
            cout << "Pair is "<< arr[i] << " " << arr[j] << endl;
    }
}
}
