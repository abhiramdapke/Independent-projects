#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue
{
    int size;
    int front;
    int rear;
    struct Node **Q;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = new Node*[q->size];
}

void enqueue(struct Queue *q, struct Node *x)
{
    if ((q->rear+1)%q->size == q->front)
        cout << "Queue is full";
    else
    {
        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }
}

struct Node * dequeue(struct Queue *q)
{
    struct Node *x = NULL;
    if (q->front == q->rear)
        cout << "Queue is empty";
    else
    {
        q->front = (q->front+1)%q->size;
        x = q->Q[q->front];
    }
    return x;
}

int isempty(struct Queue q)
{
    return q.front == q.rear;
}

struct Node *root = NULL;

void treecreate()
{
    struct Node *p,*t;
    int x;
    struct Queue q;
    create(&q,100);
    
    cout << "Enter root value";
    cin >> x;
    root = new Node[sizeof(struct Node)];
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    
    while(!isempty(q))
    {
        p = dequeue(&q);
        cout << "Enter lchild of p->data" << p->data;
        cin >> x;
        if (x!=-1)
        {
            t = new Node[sizeof(struct Node)];
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q,t);
        }
        cout << "Enter rchild of p->data" << p->data;
        cin >> x;
        
        if (x != -1)
        {
            new Node[sizeof(struct Node)];
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q,t);
        }
    }
}


int main()
{
    treecreate();
    
    return 0;
}
