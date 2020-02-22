#include <iostream>
#include <limits.h>
#define V 9
using namespace std;

int mindistance(int dist[], bool sp[])
{
    int min = INT_MAX;
    int min_index;
    for (int v = 0; v<V; v++)
    {
        if (sp[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
    }       
    return min_index;
}

int solution(int dist[])
{
    cout << "Vertex    Distance from source" << endl;
    for (int i = 0; i<V; i++)
    {
        cout << i << "              " << dist[i] << endl;
    }
}

void dijkstra(int graph[V][V], int src)
{
    int dist[V];
    
    bool sp[V];
    
    for(int i = 0;i<V;i++)
    {
        dist[i] = INT_MAX;
        sp[i] = false;
    }
    
    dist[src] = 0;
    
    for(int count = 0;count<V-1;count++)
    {
        int u = mindistance(dist,sp);
        
        sp[u] = true;

        for (int j = 0; j< V;j++)
        {
        
            if (!sp[j] && graph[u][j] && dist[u]!= INT_MAX && dist[u] + graph[u][j] < dist[j])
                dist[j] = dist[u] + graph[u][j];
       }
    }
    
    solution(dist);
}

int main()
{
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
    dijkstra(graph,0);

    return 0;
}
