#include <iostream>
#include <stack>

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

int isloop()
{
   struct Node *p = first;
   struct Node *q = first;
   
   do
   {
       p = p->next;
       q = q->next;
       q = q!=NULL?q->next:NULL;
   }while (p && q && p!=q);
   
   if (p == q)
        return true;
    else
        return false;
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
    insertatfirst(5);
    insertatfirst(5);
    insertatfirst(2);
    insertatfirst(5);
    insertatfirst(12);
    insertatfirst(14);
    insertatfirst(13);
    insertatfirst(8);
    
    
    print(first);
    cout <<endl;
    
    //Check loop condition(true) from this piece of code
    // struct Node *t = first;
    // while (t->next)
    // {
    //     t = t->next;
    // }
    // t->next = first->next;
    
    if (isloop())
        cout << "Linked List has a loop" << endl;
    else
        cout << "Linked List doesn't has a loop" << endl;
    return 0;
}
