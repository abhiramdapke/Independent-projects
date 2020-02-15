#include <iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*front = NULL, *rear = NULL;

void enqueue(int x)
{
    struct Node *t;
    t = new Node[x];
    if (t == NULL)
        cout<< "Queue is full" << endl;
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct Node *t;
    if (front == NULL)
        cout << "Queue is empty";
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}
int main()
{
    struct Node q;
    enqueue(4);
    enqueue(4);
    enqueue(8);
    enqueue(9);
    
    dequeue();
    
    
    return 0;
}
