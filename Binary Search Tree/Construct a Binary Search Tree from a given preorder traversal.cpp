#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *newnode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

Node * constructtreeuntil(int pre[], int *preindex, int low, int high, int size)
{
    if (*preindex >= size || low > high)
        return NULL;
        
    Node *root = newnode(pre[*preindex]);
    *preindex = *preindex + 1;
    
    if (low == high)
        return root;
        
    int i;
    for (i = low; i< high; i++)
    {
        if (pre[i] > root->data)
            break;
    }
    
    root->left = constructtreeuntil(pre,preindex,*preindex,i-1,size);
    root->right = constructtreeuntil(pre,preindex,i,high,size);
    
    return root;
}

Node * constructtree(int pre[], int size)
{
    int preindex = 0;
    return constructtreeuntil(pre,&preindex,0,size-1,size);
}

void printinorder(Node *node)
{
    if (node == NULL)
        return;
    printinorder(node->left);
    cout << node->data << " ";
    printinorder(node->right);
}

int main()
{
    int pre[] = {10,5,1,7,40,50};
    int size = sizeof(pre)/sizeof(pre[0]);
    
    Node *root = constructtree(pre,size);
    
    cout << "Inorder traversal is ";
    printinorder(root);

    return 0;
}
