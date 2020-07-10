
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    int sum = 0;
    Node *head;
    Node *second;
    Node *third;
    
    head = new Node;
    second = new Node;
    third = new Node;
    
    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = NULL;
    
    //  while (head!= NULL)             //displaying a LL
    // {
    //     cout << head->data << " ";
    //     sum+= head->data;
    //     head = head->next;
    // }
    
    // cout << endl;
    // cout << sum << endl;            //finding sum of an LL
    
    //Inserting a node at the first position
    Node *first;
    first = new Node;
    first->data = 7;
    first->next = head;
    head = first;
    //cout << first->data;
    
     while (head!= NULL)             //displaying a LL
    {
        cout << head->data << " ";
        head = head->next;
    }
    
    
