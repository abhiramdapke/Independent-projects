#include <iostream>

using namespace std;
class  Node
{
public:
    int data;
    Node *next;
};

void print_middle(Node** head)    //Here we use two pointers, one increases with double the speed of second
{                                 //so that second will be on middle when first is on last
    Node *slow_ptr = (*head);     //if even length, return the second number of the two middle numbers
    Node *fast_ptr = (*head);
    
    if ((*head)!= NULL)
    {
        while (fast_ptr!=NULL && fast_ptr->next!= NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        cout << "Middle element is: " << slow_ptr->data;
    }
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
    push(&head,15);
    push(&head,14);
    push(&head,13);
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    
    print_middle(&head->next);

    return 0;
}
