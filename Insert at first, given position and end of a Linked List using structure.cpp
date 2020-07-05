#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

int count(struct Node *p)
{
    int l=0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

void insertatfirst(int x)
{
    struct Node *t;
    t = new Node[sizeof(struct Node)];
    t->data = x;
    t->next = first;
    first = t;
}

void insertatpos(int pos, int x)
{
    if (pos < 0 || pos > count(first))
        return;
    struct Node *p = first;
    struct Node *t = new Node[sizeof(struct Node)];
    t->data = x;
    for (int i=0;i<pos-1;i++)
    {
        p = p->next;
    }
    t->next = p->next;
    p->next = t;
}

void insertatlast(int x)
{
    struct Node *t = new Node[sizeof(struct Node)];
    t->data = x;
    struct Node *p = first;
    while (p->next)
    {
        p = p->next;
    }
    p->next = t;
    t->next = NULL;
}

void display()
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
    insertatfirst(5);
    insertatfirst(7);
    insertatfirst(9);
    display();
    cout << endl;
    
    insertatpos(2,6);
    insertatpos(3,10);
    display();
    cout << endl;
    
    insertatlast(13);
    display();
    
    return 0;
}
