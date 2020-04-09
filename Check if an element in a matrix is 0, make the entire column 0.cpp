#include <iostream>

using namespace std;

void checkmatrix(int arr[5][5])
{
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (arr[i][j] == 0)
            {
                for (int u=0;u<5;u++)
                {
                    arr[i][u] = 0;
                }
            }
        }
    }
}    
    
void print(int arr[5][5])
{
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[5][5] = { {0,12,3,6,5},
                    {85,12,9,0,5},
                    {0,12,3,6,5},
                    {8,2,3,6,5},
                    {5,1,3,6,5} };

    checkmatrix(arr);
    print(arr);
    return 0;
}
