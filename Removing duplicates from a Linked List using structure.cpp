#include <iostream>
#include <stdlib.h>

using namespace std;


struct Node
{
    int data;
    struct Node *next;
}*first = NULL,*second = NULL;

void display(struct Node *p)
{
    while (p!=NULL)
    {
        cout << p->data;
        p = p->next;
    }
}

void create(int a[], int n)
{
    int i;
    struct Node *t,*last;
    first = new Node[sizeof(struct Node)];
    first->data = a[0];
    first->next = NULL;
    last = first;
    
    for (i=1;i<n;i++)
    {
        t = new Node[sizeof(struct Node)];
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void removeduplicates(struct Node *p)
{
    struct Node *q= p->next;
    while(q)
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


int main()
{
    int a[] = {10,20,30,30,30,30,40,50,50,50};
    create(a,10);
    
    removeduplicates(first);
    display(first);
    
    return 0;
}
