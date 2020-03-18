#include <iostream>

using namespace std;
class  Node
{
public:
    int data;
    Node *next;
};

Node* search(Node** head, int key)
{
    while ((*head)!=NULL)
    {
        if (key == (*head)->data)
            return (*head);
        (*head) = (*head)->next;
    }
    return NULL;
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
    
   Node *temp = search(&head,8);
   
    if (temp)
       cout << "Key is found " << temp->data;
    else
        cout << "key not found" << endl;
    

    return 0;
}
