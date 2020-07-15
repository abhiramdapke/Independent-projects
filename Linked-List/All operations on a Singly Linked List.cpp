
#include <iostream>
#include <stack>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
}*first = NULL;

void insertatfirst(int x)
{
    struct Node *p = new struct Node;
    p->data = x;
    p->next = first;
    first = p;
}

bool llpalindrome()
{
    stack<int> s;
    struct Node *p = first;
    while (p)
    {
        s.push(p->data);
        p = p->next;
    }
    p = first;
    while (p)
    {
        if (p->data != s.top())
            return false;
        else
        {
            s.pop();
            p = p->next;
        }
    }
    return true;
}

bool issorted()
{
    struct Node *p = first;
    while (p && p->next)
    {
        if (p->data > p->next->data)
            return false;
        p = p->next;
    }
    return true;
}

void findmiddleelement()
{
    int count = 0;
    struct Node *p = first;
    while (p)
    {
        count++;
        p = p->next;
    }
    p = first;
    for (int i=0;i<count/2-1;i++)
    {
        p= p->next;
    }
    cout << p->next->data << endl;
}

bool searchinLL(int key)
{
    struct Node *p = first;
    while (p)
    {
        if (key == p->data)
            return true;
        p = p->next;
    }
    return false;
}

void deletemiddleelement()
{
    int count = 0;
    struct Node *p = first;
    struct Node *q = NULL;
    while (p)
    {
        count++;
        p = p->next;
    }
    p = first;
    for (int i=0;i<count/2;i++)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    delete p;
    p = q->next;
    
}

void checkloop()
{
    struct Node *p = first;
    struct Node *q = first;
    do
    {
        p = p->next;
        q = q->next;
        if (q) q = q->next;
    }while (p && q && p!=q);
    if (p == q)
    {
        cout << "Loop exists" << endl;
    }
    else
        cout << "Loop doesn't exist" << endl;
}

void insertelement(int pos,int x)
{
    struct Node *t = new struct Node;
    struct Node *p = first;
    for (int i=0;i<pos-1;i++)
    {
        p = p->next;
    }
    t->data = x;
    t->next = p->next;
    if (p->next)
    {
        p->next = t;
        p = t;
    }
}

void lengthofLL()
{
    struct Node *p = first;
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    cout << "Length of the LL is " << len;
    
}
void maxelement()
{
    int max = INT32_MIN;
    struct Node *p = first;
    while (p)
    {
        if (p->data>max)
        {
            max = p->data;
        }
        p = p->next;
    }
    cout <<"Max ele in the LL is " << max << endl;
}

void reverseLL()
{
    struct Node *p = first;
    struct Node *q = NULL;
    struct Node *r = NULL;
    
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void removeduplicates()
{
    struct Node *p = first;
    struct Node *q = first->next;
    while (q)
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

void display()
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
    insertatfirst(14);
    insertatfirst(12);
    insertatfirst(19);
    insertelement(1,13);
    insertatfirst(11);
    insertatfirst(10);
    display();
    
    cout << endl;
    cout << llpalindrome() << endl;
    cout << issorted() << endl;
    findmiddleelement();
    
    deletemiddleelement();
    display();
    cout << endl;
    maxelement();
    lengthofLL();
    
    return 0;
}
