#include <iostream>
using namespace std;
#define n 7



void DFS(int a[][n],int i)
{
    static int visited[7] = {0};

    if (visited[i] == 0)
    {
        cout << i << " ";
        visited[i] = 1;
        
        for (int j=1;j<n;j++)
        {
            if (a[i][j] == 1 && visited[j] == 0)
                DFS(a,j);
        }
    }
}



int main()
{
    int a[7][7] =  {{0,0,0,0,0,0,0},
                    {0,0,1,1,0,0,0},
                    {0,1,0,0,1,0,0},
                    {0,1,0,0,1,0,0},
                    {0,0,1,1,0,1,1},
                    {0,0,0,0,1,0,0},
                    {0,0,0,0,1,0,0}};
    DFS(a,1);
    
    return 0;
}
