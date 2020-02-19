#include <iostream>
#define n 4
using namespace std;

bool solvemazeutil(int maze[n][n], int x, int y, int soln[n][n]);
void printsolution(int soln[n][n])
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << soln[i][j];
        }
        cout << endl;
    }
}

bool issafe(int maze[n][n], int x, int y)
{
    if (x>=0 && x<n && y>=0 && y<n && maze[x][y] == 1)
        return true;
        
    return false;
}

bool solvemaze(int maze[n][n])
{
    int soln[n][n] = { { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 } };
    
    if (solvemazeutil(maze,0,0,soln) == false)
    {
        cout << "Solution doesn't exist";
        return false;
    }
    else
    {
        printsolution(soln);
        return true;
    }
}

bool solvemazeutil(int maze[n][n], int x, int y, int soln[n][n])
{
    if (x == n-1 && y == n-1)
    {
        soln[x][y] = 1;
        return true;
    }
    
    if (issafe(maze,x,y) == true)
    {
        soln[x][y] = 1;
        
        if (solvemazeutil(maze,x+1,y,soln) == true)
            return true;
        if (solvemazeutil(maze,x,y+1,soln) == true)
            return true;   
            
        soln[x][y] == 0;
        return false;
    }
    return false;
}

int main()
{
    int maze[n][n] = { { 1, 0, 0, 0 }, 
                       { 1, 1, 1, 1 }, 
                       { 0, 1, 0, 0 }, 
                       { 1, 1, 1, 1 } }; 
  
    solvemaze(maze);
    return 0;
}
