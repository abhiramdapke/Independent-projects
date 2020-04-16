#include <iostream>
#include <stack>

using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;
public:
    void enqueue(int x)
    {
        while (!s1.empty())         //shift all eles from s1 to s2
        {
            s2.push(s1.top());
            s1.pop();
        }
        
        s1.push(x);                 //push ele in s1
        
        while (!s2.empty())         //shift back all ele form s2 to s1
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int dequeue()
    {
        if (s1.empty())
        {
            cout << "Queue is empty";
            exit(0);
        }
        
        int x = s1.top();
        s1.pop();
        return x;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(12);
    
    cout << q.dequeue() << endl;
    
    q.enqueue(6);
    q.enqueue(8);
    
    cout << q.dequeue() << endl;
    
    q.enqueue(9);
    
    cout << q.dequeue() << endl;

    return 0;
}
