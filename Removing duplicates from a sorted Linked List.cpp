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
    struct Node *q = first->next;
    while (q!=NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
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
    first = createnewnode(2);
    first->next = createnewnode(2);
    first->next->next = createnewnode(3);
    first->next->next->next = createnewnode(3);
    first->next->next->next->next = createnewnode(4);
    first->next->next->next->next->next = createnewnode(5);
    first->next->next->next->next->next->next = createnewnode(6);
    first->next->next->next->next->next->next->next = createnewnode(7);
    first->next->next->next->next->next->next->next->next = createnewnode(7);

    print();
    cout << endl;
    removeduplicates();
    print();
    
    return 0;
}
