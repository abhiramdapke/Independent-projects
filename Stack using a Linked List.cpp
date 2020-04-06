#include <iostream>

using namespace std;

class Stack
{
public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    void display();
protected:
    typedef struct Element
    {
        int data;
        struct Element *next;
    }Element;
    
    Element *head;
};

Stack::Stack()
{
    head = NULL;
    return;
}

Stack::~Stack()
{
    while (head!=NULL)
    {
        Element *next = head->next;
        delete head;
        head = next;
    }
    return;
}

void Stack::push(int x)
{
    Element *element = new Element;
    element->data = x;
    element->next = head;
    head = element;
    return;
}

int Stack::pop()
{
    Element *p = head;
    int d;
    
    if (head == NULL)
    {
        cout << "Stack underflow";
    }
    d = head->data;
    head = head->next;
    delete p;
    return d;
}

void Stack::display()
{
    Element *p = head;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    Stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    
    int a = s.pop();
    
    cout << a << endl;
    
    s.display();

    return 0;
}
