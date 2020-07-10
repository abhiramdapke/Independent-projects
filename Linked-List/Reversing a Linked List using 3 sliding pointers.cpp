#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void push(struct Node *t, int x)
{
    //struct Node *t;
    t = new Node;
    t->data = x;
    t->next = first;
    first = t;
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

void reverse()
{
    struct Node *p = first;
    struct Node *q = NULL;
    struct Node *r = NULL;
    
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

int main()
{
    push(first, 1);
    push(first, 2);
    push(first, 3);
    push(first, 4);
    
    print();
    cout << endl;
    reverse();
    
    print();

    return 0;
}
