#include <iostream>
#include <queue>
using namespace std;
#define n 7



void BFS(int a[n][n],int i)
{
    queue<int> q;
    int visited[7] = {0};

    cout << i << " ";
    visited[i] = 1;
    q.push(i);
    
    while(!q.empty())
    {
       int u = q.front();
       q.pop();
       for (int v=1;v<n;v++)
       {
           if (a[u][v] == 1 && visited[v] == 0)
           {
               cout << v << " ";
               visited[v] = 1;
               q.push(v);
           }
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
    BFS(a,1);
    
    return 0;
}
