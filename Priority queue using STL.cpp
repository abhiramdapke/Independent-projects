#include <iostream>
#include <queue>

using namespace std;

//by default, priority queue creates a max heap(max ele first)
void show(priority_queue<int> p)
{
    priority_queue<int> g = p;
    while (!g.empty())
    {
        cout << g.top() << " ";
        g.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int> q;
    q.push(10);
    q.push(13);
    q.push(50);
    q.push(140);
    q.push(113);
    q.push(80);
    
    show(q);

    return 0;
}
