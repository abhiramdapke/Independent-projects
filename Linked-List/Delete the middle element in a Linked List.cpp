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

void deletemiddle()
{
    //Tailing pointer r which is used to delete the node and connect to the next node
    struct Node *p = first;
    struct Node *q = first;
    struct Node *r = NULL;
    
    while (q && q->next)
    {
        q = q->next->next;
        if (q) {
            r = p;
            p = p->next;
        }
        
    }
    if (p)
    {
        r->next = p->next;
        delete p;
    }
}

void deletenode(int pos)
{
    struct Node *p = first;
    struct Node *q = NULL;
    for (int i=0;i<pos-1;i++)
    {
        q = p;
        p = p->next;
    }
    if (p)
    {
        q->next = p->next;
        delete p;
    }
}

void print(struct Node *p)
{
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
    
    
    print(first);
    cout <<endl;
    
    //deletenode(3);
    deletemiddle();
    print(first);
    return 0;
}
