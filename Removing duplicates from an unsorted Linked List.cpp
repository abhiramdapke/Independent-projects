#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

struct Node * createnewnode(int x)
{
    struct Node *t = new struct Node;
    t->data = x;
    t->next = NULL;
    return t;
}

void removeduplicates()
{
    struct Node *p = first;
    struct Node *q;
    struct Node *r;
    while (p && p->next)
    {
        q = p->next;
        r = p;
        while (q)
        {
            if (p->data != q->data)
            {
                r = q;
                q = q->next;
            }
            else
            {
                r->next = q->next;
                delete q;
                q = r->next;
            }
        }
        p = p->next;
    }
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
    first = createnewnode(10);
    first->next = createnewnode(2);
    first->next->next = createnewnode(9);
    first->next->next->next = createnewnode(3);
    first->next->next->next->next = createnewnode(8);
    first->next->next->next->next->next = createnewnode(2);
    first->next->next->next->next->next->next = createnewnode(9);
    first->next->next->next->next->next->next->next = createnewnode(3);
    first->next->next->next->next->next->next->next->next = createnewnode(2);

    print();
    cout << endl;
    removeduplicates();
    print();
    
    return 0;
}
