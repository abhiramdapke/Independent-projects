#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *q;
public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        q = new int[size];
    }
    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        q = new int[this->size];
    }
    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue:: enqueue(int x)
{
    if (rear == size-1)
        cout << "Queue is full";
    else
    {
        rear++;
        q[rear] = x;
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (front == rear)
        cout<< "Queue is empty";
    else
    {
        x = q[front+1];
        front++;
    }
    return x;
}

void Queue::display()
{
    for (int i=front+1;i<=rear;i++)
        cout << q[i] << " ";
    cout << endl;
}   
    
int main()
{
 Queue q(5);
 
 q.enqueue(10);
 q.enqueue(20);
 q.enqueue(30);
 
 q.dequeue();
 
 q.display();
 
 return 0;
}
