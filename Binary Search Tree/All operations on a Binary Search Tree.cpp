
#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}*root = NULL;

void insert(int key)      //needs 3 pointers, 2 return statements, iterative
{
    struct Node *t = root;
    struct Node *r,*p;
    
    if (root == NULL)
    {
        p = new struct Node;
        p->data = key;
        p->left = p->right = NULL;
        root = p;
        return;
    }
    while (t)
    {
        r = t;
        if (key < t->data)
            t = t->left;
        else if (key > t->data)
            t = t->right;
        else
            return;
    }
    p = new struct Node;
    p->data = key;
    p->left = p->right = NULL;
    if (key<r->data)
        r->left = p;
    else
        r->right = p;
}

struct Node * rinsert(struct Node *t, int key)
{
    struct Node *p = NULL;
    
    if (t == NULL)
    {
        p = new struct Node;
        p->data = key;
        p->left = p->right  = NULL;
        return p;
    }
    if (key < t->data)
        t->left = rinsert(t->left, key);
    else if (key > t->data)
        t->right = rinsert(t->right, key);
    return t;
}

void inorder(struct Node *t)
{
    if (t)
    {
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }
}

void preorder(struct Node *t)
{
    if (t)
    {
        cout << t->data << " ";
        preorder(t->left);
        preorder(t->right);
    }
}

void postorder(struct Node *t)
{
    if (t)
    {
        postorder(t->left);
        postorder(t->right);
        cout << t->data << " ";
    }
}

struct Node * searchanelement(struct Node *t, int key)
{
    while (t)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->left;
        else 
            t = t->right;
    }
    return NULL;
}

int height(struct Node *t)
{
    int x,y;
    if (t == NULL) return 0;
    x = height(t->left);
    y = height(t->right);
    return (x>y)?x+1:y+1;
}

struct Node *Inpre(struct Node *t)
{
    while (t && t->right)
        t = t->right;
    return t;
}

struct Node *InSucc(struct Node *t)
{
    while (t && t->left)
        t = t->left;
    return t;
}


int isBSTutil(struct Node *p, int min, int max)
{
    if (p == NULL)
        return 1;
    if (p->data < min || p->data > max)
        return 0;
    else
    {
        return isBSTutil(p->left,min,p->data-1) && isBSTutil(p->right,p->data+1,max);
    }
}

int isBST(struct Node *p)
{
    return (isBSTutil(p,INT32_MIN,INT32_MAX));
}

void secondlargestutil(struct Node *p, int &c)
{
    if (p == NULL || c>2)
        return;
    
    //reverse inorder traversal so that 2nd element in the reverse inorder is the 2nd largest  ele
    secondlargestutil(p->right, c);
    c++;
    if (c == 2)
    {
        cout <<"2nd largest element is " << p->data << endl;
        return;
    }
    secondlargestutil(p->left, c);
}

void secondlargestelement(struct Node *p)
{
    int c = 0;
    secondlargestutil(root,c);
}

int main()
{
    struct Node *temp;
    root = rinsert(root,5);
    rinsert(root,3);
    rinsert(root,7);

    inorder(root);
    
    temp = searchanelement(root,7);
    if (temp)
        cout << "Key found " << temp->data << endl;
    else
        cout << "Key not found" << endl;
   
    if (isBST(root))
        cout << "This is a BST" << endl;
    else
        cout << "This is not a BST" << endl;
    
    secondlargestelement(root);
    
    return 0;
}
