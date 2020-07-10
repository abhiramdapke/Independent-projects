#include <iostream>

using namespace std;

struct Node 
{
  int data;
  struct Node *left;
  struct Node *right;
  struct Node *parent;
};

struct Node * Minvalue(struct Node *node)
{
    struct Node *p = node;
    while (p->left != NULL)
        p = p->left;
    return p;
}

struct Node * Inordersuccessor(struct Node *root, struct Node *n)
{
    if (n->right!= NULL)
        return Minvalue(n->right);
    
    struct Node *q = n->parent;
    while (q!= NULL && n == q->right)
    {
        n = q;
        q = q->parent;
    }
    return q;
}

struct Node * createnewnode(int data)
{
    struct Node * p = new struct Node;
    p->data = data;
    p->left = p->right = p->parent = NULL;
    return p;
}

struct Node * insert(struct Node *p, int data)
{
    if (p == NULL)
        return createnewnode(data);
    else
    {
        struct Node *temp;
        
        if (data <= p->data)
        {
            temp = insert(p->left, data);
            p->left = temp;
            temp->parent = p;
        }
        else
        {
            temp = insert(p->right, data);
            p->right = temp;
            temp->parent = p;
        }
        return p;
    }
}

int main()
{
    struct Node* root = NULL, *temp, *succ, *min; 
  
  //creating the tree 
  root = insert(root, 20); 
  root = insert(root, 8); 
  root = insert(root, 22); 
  root = insert(root, 4); 
  root = insert(root, 12); 
  root = insert(root, 10);   
  root = insert(root, 14);     
  temp = root->left->right->right; 
  
  succ =  Inordersuccessor(root, temp); 
  if(succ !=  NULL) 
    cout <<  "Inorder Successor is " << succ->data;     
  else
    cout << "Inorder Successor doesn't exit"; 

    return 0;
}
