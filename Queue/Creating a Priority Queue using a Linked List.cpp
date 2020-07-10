#include <iostream>

using namespace std;

struct Node
{
    int data;
    int priority;           //lower values have higher priority
    struct Node *next;
};

struct Node *createnewnode(int x, int p)
{
    struct Node *t = new struct Node;
    t->data = x;
    t->priority = p;
    t->next = NULL;
    
    return t;
}

int peek(struct Node **head)
{
    return (*head)->data;
}

int pop(struct Node **head)
{
    struct Node *t = (*head);
    (*head) = (*head)->next;
    delete t;
}

void push(struct Node **head,int x, int p)
{
    struct Node *m = (*head);
    
    struct Node *temp = createnewnode(x,p);
    
    if ((*head)->priority > p)
    {
        temp->next = (*head);
        (*head) = temp;
    }
    else
    {
        while (m->next!=NULL && m->next->priority < p)
        {
            m = m->next;
        }
        temp->next = m->next;
        m->next = temp;
    }
}

int empty(struct Node **head)
{
    return (*head) == NULL;
}

int main()
{
    struct Node *root = createnewnode(4,1);
    push(&root,5,2);
    push(&root,6,3);
    push(&root,7,0);
    
    while (!empty(&root))
    {
        cout << peek(&root) << " ";
        pop(&root);
    }
    

    return 0;
}
