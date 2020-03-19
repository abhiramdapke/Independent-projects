#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct Linkedlist
{
    Node *head;
    Linkedlist()
    {
        head = NULL;
    }
    
    void reverse()
    {
        Node *current  = head;
        Node *prev = NULL,*next = NULL;
        
        while (current!= NULL)
        {
            next = current->next;       //increment next
            
            current->next = prev;       //make the pointer pointing to the next node to prev
            
            prev = current;             //increment prev and current
            current = next;
        }
        head = prev;
    }
    
    void print()
    {
        struct Node *temp = head;
        while (temp!= NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    Linkedlist l;
    l.push(1);
    l.push(2);
    l.push(5);
    l.push(11);
    l.push(12);
    l.push(15);
    
    l.print();
    
    cout << endl;
    
    l.reverse();
    
    l.print();

    return 0;
}
