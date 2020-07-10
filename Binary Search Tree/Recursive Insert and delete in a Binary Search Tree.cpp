
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

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
        p = new struct Node;
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
    p = new struct Node;
    p->data = key;
    p->lchild = p->rchild = NULL;
    if (key<r->data) r->lchild = p;
    else r->rchild = p;
}

struct Node * rinsert(struct Node *p,int key)
{
    struct Node *t = NULL;
    if (p == NULL)
    {
        t = new struct Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key<p->data)
        p->lchild = rinsert(p->lchild,key);
    else if (key>p->data)
        p->rchild = rinsert(p->rchild,key);
    return p;
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

int height(struct Node *p)
{
    int x,y;
    if (p == NULL) return 0;
    x = height(p->lchild);
    y = height(p->rchild);
    return x>y?x+1:y+1;
}

struct Node * Inpre(struct Node *p)
{
    while (p && p->rchild!= NULL)
        p = p->rchild;
        
    return p;
}

struct Node * InSucc(struct Node *p)
{
    while (p && p->lchild!=NULL)
        p = p->lchild;
    
    return p;
}

struct Node * Delete(struct Node *p,int key)
{
    struct Node *q;
    
    if (p == NULL)
        return NULL;
    if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
            root = NULL;
        delete p;
        return NULL;
    }
    
    if (key<p->data)
        p->lchild = Delete(p->lchild,key);
    else if (key>p->data)
        p->rchild = Delete(p->rchild,key);
    else
    {
        if (height(p->lchild)>height(p->rchild))
        {
            q = Inpre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild,q->data);
        }
        else
        {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild,q->data);
        }
    }
    return p;
}

int main()
{
    struct Node *temp;
    
    root = rinsert(root,50);
    rinsert(root,10);
    rinsert(root,40);
    rinsert(root,20);
    rinsert(root,30);
    
    inorder(root);
    cout << endl; 
    
    Delete(root,10);
    Delete(root,20);

    
    inorder(root);
    cout << endl;
    
    temp = search(20);
    if (temp!=NULL)
        cout << "Key found is " << temp->data << endl;
    else
        cout << "Key is not found";
    

    return 0;
}

