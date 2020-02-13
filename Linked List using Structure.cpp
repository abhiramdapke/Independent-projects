#include <iostream>
#include <string>

using namespace std;

struct node
{
    int data;
    struct node *next;
}*first = NULL;

void create(int a[], int n)
{
    int i;
    struct node *t,*last;
    first = new node[sizeof(struct node)];
    first->data = a[0];
    first->next = NULL;
    last = first;
    
    for (i = 1;i<n;i++)
    {
        t = new node[sizeof(struct node)];
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct node *p)
{
    while (p!=NULL)
    {
        cout << p->data;
        p = p->next;
    }
}
int main()
{
 struct node *temp;
 int a[] = {3,5,7,10,25,8,32,2};
 create(a,8);
 
 display(first);
 
 
 return 0;
}
