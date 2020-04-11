#include <iostream>

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

struct Node * findk(int k)
{
    //find length of the LL
    //Then, traverse p to that point and return i.e. count-1-k
    int count = 0;
    struct Node *p = first;
    while (p)
    {
        count++;
        p = p->next;
    }
    p = first;
    for (int i=0;i<count-1-k;i++)
    {
        p = p->next;
    }
    return p->next;
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
    first = newnode(2);
    insertatfirst(6);
    insertatfirst(7);
    insertatfirst(9);
    insertatfirst(5);
    insertatfirst(12);
    
    print();
    cout <<endl;
    
    struct Node * m = findk(2);
    cout << m->data << endl;
    return 0;
}
