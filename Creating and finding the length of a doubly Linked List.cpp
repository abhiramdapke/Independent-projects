
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
    struct Node *t,*last;
    
    int i;
    
    first = new struct Node;
    first->data = a[0];
    first->prev = first->next = NULL;
    last = first;
    
    for (i=1;i<n;i++)
    {
        t = new struct Node;
        t->data = a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p!=NULL)
    {
        cout << p->data<< " ";
        p = p->next;
    }
}

int length(struct Node *p)
{
    int count = 0;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}

int main()
{
    int a[] = {10,20,30,40,50};
    create(a,5);
    
    cout << "Length is " << length(first) << endl;
    cout << "Elements of Doubly LL are "<< endl;
    display(first);
    
    return 0;
}
