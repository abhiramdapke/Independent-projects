#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
}*root = NULL;

void insert(int key)
{
    struct Node *t = root;   //r is a tailing pointer to t
    struct Node *p;
    struct Node *r = NULL;
    
    if (root == NULL)
    {
        p = new Node;
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t!=NULL)
    {
        r = t;
        if (key == t->data)
            return;
        else if (key<t->data)
            t = t->lchild;
        else 
            t = t->rchild;
    }
    p = new Node;
    p->data = key;
    p->lchild = p->rchild = NULL;
    if (key<r->data) r->lchild = p;
    else r->rchild = p;
}

void inorder(struct Node *p)    //Inorder traversal is sorted traversal
{
    if (p!=NULL)
    {
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
}

struct Node * search(int key)
{
    struct Node *p = root;
    while (p!=NULL)
    {
        if (key == p->data)
            return p;
        else if (key<p->data)
            p = p->lchild;
        else
            p = p->rchild;
    }
    return NULL;
}

int main()
{
    struct Node *temp = NULL;
    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);
    
    inorder(root);
    cout << endl;
    
    temp = search(11);
    if (temp!=NULL)
        cout << "Key found is " << temp->data << endl;
    else
        cout << "Key is not found";
    

    return 0;
}
