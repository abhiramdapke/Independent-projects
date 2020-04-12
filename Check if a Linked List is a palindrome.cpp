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

bool palindrome()
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
            p = p->next;
            s.pop();
        }
    }
    return true;
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
    insertatfirst(3);
    // insertatfirst(5);
    // insertatfirst(12);
    // insertatfirst(14);
    // insertatfirst(13);
    //insertatfirst(8);
    
    
    print(first);
    cout <<endl;
    
    if (palindrome())
        cout << "Linked List is a palindrome" << endl;
    else
        cout << "Linked List is not a palindrome" << endl;
        
    //print(first);
    return 0;
}
