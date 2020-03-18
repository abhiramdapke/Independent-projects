#include <iostream>

using namespace std;
class  Node
{
public:
    int data;
    Node *next;
};

void delete_ll(Node** head)
{
    Node *curr = *head;
    Node *p;
    
    while (curr!= NULL)
    {
        p = curr->next;
        delete curr;
        curr = p;
    }
    *head = NULL;
}

void push(Node** head, int x)
{
    Node *second = new Node;
    
    second->data = x;
    second->next = *head;
    
    *head = second;
}

int main()
{
    Node *head = NULL;          //when we ref head pointer, in the above fns
                                //it will be a double pointer
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    
   
    delete_ll(&head);       //delete the whole ll
    
     while (head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    

    return 0;
}
