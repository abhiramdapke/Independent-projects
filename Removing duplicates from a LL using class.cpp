#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
}*first = NULL;

void remove_duplicates()
{
    Node *p = first;
    Node *q = first->next;
    
    while (q!= NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p-> next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void push(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = first;
    first = temp;
}

void print()
{
    Node *temp = first;
    while (temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    
    push(4);
    push(3);
    push(3);
    push(2);
    push(2);
    push(2);
    
    cout << "Actual list is ";
    print();
    cout << endl;
    remove_duplicates();
    cout << "List after removing duplicates is ";
    print();

    return 0;
}
