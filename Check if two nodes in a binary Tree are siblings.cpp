#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
};

struct Node * push(int data)
{   
    struct Node *t  = new Node;
    t->data = data;
    t->lchild = t->rchild = NULL;
    //first = t;
    return t;
}

bool checksiblings(struct Node *root,int x,int y)
{
    if (root == NULL)
        return false;
    
    if (root->lchild && root->rchild)
    {
        int left = root->lchild->data;
        int right = root->rchild->data;
        
        if (left == x && right == y)
            return true;
        else if (left == y && right == x)
            return true;
    }
    
    if (root->lchild)
        checksiblings(root->lchild, x, y);
    if (root->rchild)
        checksiblings(root->rchild, x, y);
     
}


int main()
{
    struct Node *root = push(1);
    root->lchild = push(2);
    root->rchild = push(3);
    root->lchild->lchild = push(4); 
    root->rchild->lchild = push(5); 
    root->rchild->rchild = push(6); 
    root->lchild->lchild->rchild = push(7); 
   
   int x = 5;
   int y = 2;
   
   if (checksiblings(root, x, y))
    cout << "Yes" << endl;
   else
    cout << "No" << endl;

    return 0;
}
