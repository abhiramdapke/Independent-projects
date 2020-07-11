#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void printpath(vector<int> &path)
{
    int size = path.size();
    for (int i=0;i<size;i++)
    {
        cout << path[i] << " ";
    }
    cout<< endl;
}

int isnotvisited(int x, vector<int> &path)
{
    int size = path.size();
    for (int i=0;i<size;i++)
    {
        if (path[i] == x)
            return 0;
    }
    return 1;
}

void findpaths(vector<vector<int>> &g, int src, int dst, int V)
{
    //create queue to store the paths
    queue<vector<int>> q;
    
    vector<int> path;
    path.push_back(src);
    q.push(path);
    
    while (!q.empty())
    {
        path = q.front();
        q.pop();
        int last = path[path.size()-1];
        
        if (last == dst)
            printpath(path);
            
        for (int i=0;i<g[last].size();i++)
        {
            if (isnotvisited(g[last][i], path))
            {
                vector<int> newpath(path);
                newpath.push_back(g[last][i]);
                q.push(newpath);
            }
        }
    }
}

int main()
{
    vector<vector<int> > g; 
     
    int V = 4; 
    g.resize(4); 
  

    g[0].push_back(3); 
    g[0].push_back(1); 
    g[0].push_back(2); 
    g[1].push_back(3); 
    g[2].push_back(0); 
    g[2].push_back(1); 
  
    int src = 2, dst = 3; 
    cout << "path from src " << src 
         << " to dst " << dst << " are " << endl; 
  
     
    findpaths(g, src, dst, V);

    return 0;
}
