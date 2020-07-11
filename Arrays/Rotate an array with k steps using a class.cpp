#include <iostream>

using namespace std;

class Solution
{
    int k;
    int size;
    int arr[];
    
public:
    Solution(int arr[],int k,int size)
    {
        this->k = k;
        this->size = size;
        this->arr[size] = arr[size];
    }
    
    void rotate()
    {
        int j=0;
        while (j<=k)
        {
            int p = arr[size-1];
            for (int i=size-1;i>0;i--)
            {
                arr[i] = arr[i-1];
            }
            arr[0] = p;
            j++;
        }
    }
    
    void print()
    {
        for (int i=0;i<size;i++)
        {
            cout << arr[i] << " ";
        }
    }
};


int main()
{
    int arr[] = {2,3,5,6,4};
    Solution s(arr,3,5);
    s.rotate();
    s.print();

    return 0;
}
