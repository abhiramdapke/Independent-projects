#include <iostream>
#include <list>

using namespace std;

class Graph
{
private:
    int V;
    list<int> *adj;

public:
    Graph(int V);   //Constructor
    void addedge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void  Graph::addedge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int s)
{
    bool *visited = new bool[V];   //mark all nodes false i.e. not visited
    for (int i=0;i<V;i++)
        visited[i] = false;
        
    list<int> queue;
    
    visited[s] = true;   //mark the src position as true
    queue.push_back(s);
    
    list<int>::iterator i;
    
    while(!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
        
        
        for (i = adj[s].begin(); i!=adj[s].end(); i++)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
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
    
    cout << "Breadth First Search traversal " << "Starting from vertex 2" << endl;
    g.BFS(2);
   
    
    return 0;
}
