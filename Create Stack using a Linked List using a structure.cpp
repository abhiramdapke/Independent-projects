#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top;

void push(int data)
{
    struct Node *t;
    t = new Node;
    if (t == NULL)
        cout << "Stack overflow";
    t->data = data;
    t->next = top;
    top = t;
}

void pop()
{
    struct Node *t;
    if (t == NULL)
        cout << "Stack is empty";
    t = top;
    top = top->next;
    t->next = NULL;
    delete t;
    
}
void display()
{
    struct Node *t;
    if (t == NULL)
        cout << "Stack underflow";
    t = top;
    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }
}

int main()
{

    push(23);
    push(13);
    push(44);
    push(63);
    push(84);
    
    display();
    cout << endl;
    
    pop();
    pop();
    
    
    display();

    return 0;
 }
