#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insert_front(Node** head, int new_data)
{
    Node *new_node = new Node;
    
    new_node->data = new_data;
    
    new_node->next = (*head);
    
    (*head) = new_node;
}

void insert_after(Node* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "Prev node cannot be null" << endl;
        return;
    }
    
    Node *new_node = new Node;
    
    new_node->data = new_data;
    
    new_node->next = prev_node->next;
    
    prev_node->next = new_node;
    
}

void insert_last(Node **head, int new_data)
{
    Node* new_node = new Node;
    Node* last = *head;
    
    new_node->data = new_data;
    
    new_node->next = NULL;
    
    if ((*head) == NULL)
    {
        (*head) = new_node;
        return;
    }
    while(last->next!= NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

void delete_node(Node **head,int pos)
{
    Node *p;
    Node *q;                 //tail pointer, following pointer (follows p)
    int x = -1,i;
    if (pos == 1)
    {
        x = (*head)->data;
        p = (*head);
        (*head) = (*head)->next;
        delete p;
    }
    else
    {
        p = (*head);
        q = NULL;
        for (i=0;i<pos-1 && p;i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q->next = p->next;          //now p is on the node to be deleted and we join q to the LL
            int x = p->data;
            delete p;
        }
    }
}

void print(Node *p)
{
    while(p)
    {
        cout << p->data <<" ";
        p=p->next;
    }
}

int main()
{
   Node* head = NULL;
   
   insert_last(&head,6);
   insert_front(&head,7);
   insert_front(&head,8);
   insert_last(&head,2);
   insert_after(head->next,9);
   delete_node(&head,3);
   
   cout << "Created List is ";
   print(head);
   
    

    return 0;
}
