#include <iostream>
#include <list>
#include <stack>

using namespace std;

class Graph
{
private:
    int V;
    list<int> *adj;
    void DFSutil(int v, bool visited[]);
public:
    Graph(int V); //Constructor
    void addedge(int v, int w);
    void DFS(int v);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addedge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFSutil(int v, bool visited[])
{
    //mark curr as visited and print it
    
    visited[v] = true;
    cout << v << " ";
    
    list<int>::iterator i;
    for (i=adj[v].begin(); i!=adj[v].end(); i++)
        if (!visited[*i])
            DFSutil(*i,visited);
}

void Graph::DFS(int v)
{
    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
        
    DFSutil(v,visited);
}
int main()
{
    Graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,0);
    g.addedge(2,3);
    g.addedge(3,3);
    
    cout << "Depth First Search traversal " << "Starting from vertex 2" << endl;
    g.DFS(2);

    return 0;
}
