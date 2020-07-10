#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

struct Node * newnode(int x)
{
    struct Node *t = new struct Node;
    t->data = x;
    return t;
}

void insertatfirst(int y)
{
    struct Node *t = new struct Node;
    t->data = y;
    t->next = first;
    first = t;
}

struct Node * findmiddle()
{
    struct Node *p = first;
    struct Node *q = first;
    
    while (q && q->next)
    {
        q = q->next->next;
        if (q) p = p->next;
    }
    return p;
}

void print()
{
    struct Node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    first = newnode(2);
    insertatfirst(6);
    insertatfirst(7);
    insertatfirst(9);
    insertatfirst(5);
    insertatfirst(12);
    insertatfirst(14);
    insertatfirst(13);
    //insertatfirst(8);
    
    
    print();
    cout <<endl;
    
    struct Node * m = findmiddle();
    cout << m->data << endl;
    return 0;
}
