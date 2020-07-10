#include <iostream>

using namespace std;

struct Node 
{
    int data;
    struct Node *next;
}*first = NULL;

void insert(int x, int pos)
{
    struct Node *t = new struct Node; 
    t->data = x;
    
    if (pos == 0)
    {
        t->next = first;
        first = t;
        return;
    }
    else
    {
        struct Node *p = first;
        for (int i=0;i<pos-1;i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
        return;
    }
}

void swap(struct Node *a,struct Node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void bubblesort()
{
    struct Node *p;
    struct Node *q = NULL;
    int swapped;
    
    if (first == NULL)
        return;
    
    do
    {
        swapped = 0;
        p = first;
        while (p->next!=q)
        {
            if (p->data > p->next->data)
            {
                swap(p,p->next);
                swapped = 1;
            }
            p = p->next;
        }
        q = p;
    }while (swapped);   
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
    //struct Node *first = NULL;
   insert(25,0);
   insert(9,1);
   insert(8,2);
   insert(19,3);
   insert(0,4);
   insert(6,5);
   
   print();
   cout << endl;
   bubblesort();
   print();
   cout << endl;
}
