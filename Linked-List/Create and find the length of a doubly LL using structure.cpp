
#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}*first = NULL;

void create(int a[], int n)
{
    struct Node *t,*p;
    int i;
    first = new Node;
    first->data = a[0];
    first->prev = first->next = NULL;
    p = first;
    for (i = 1;i<n;i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = p->next;
        t->prev = p;
        p->next = t;
        p = t;
    }
    
}

void print(struct Node *p)
{
    while (p!=NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int length(struct Node *p)
{
    int len = 0;
     while (p!=NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}
    
int main()
{
    int a[] = {10,20,30,40,50};
    create(a,5);
    
    cout << "Length is " << length(first);
    
    cout << endl;
    print(first);
    
    return 0;
}
