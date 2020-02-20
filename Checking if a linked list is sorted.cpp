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

int issorted(struct Node *p)
{
    int x = INT32_MIN;
    while(p!=NULL)
    {
        if (p->data<x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}
int main()
{
    int a[] = {10,20,30,40,50};
    create(a,5);
    
    (issorted(first) == 1)?cout << "LL is sorted": cout << "LL is not sorted";
    return 0;
}
