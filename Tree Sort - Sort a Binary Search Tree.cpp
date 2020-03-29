/*Two steps:
1. Create a BST by adding root and rest of the nodes
2. Apply Inorder traversal to sort the tree
*/
#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * newnode(int key)
{
    struct Node *temp = new Node;
    temp->data = key;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node * insert(struct Node * node, int key)
{
    if (node == NULL) return newnode(key);
    
    if (key < node->data)
        node->left = insert(node->left, key);
    
    else if (key > node->data)
        node->right = insert(node->right, key);
        
    return node;
}

void inorder(struct Node *root, int arr[], int &i)
{
    if (root!=NULL)
    {
        inorder(root->left, arr, i);
        arr[i++] = root->data;
        inorder(root->right, arr, i);
    }
}

void treesort(int arr[], int n)
{
    //Insert all the nodes in the root and rest of the tree
    struct Node *root = NULL;
    
    root = insert(root, arr[0]);
    for (int i=0;i<n;i++)
        insert(root,arr[i]);
    
    //store traversal in arr in inorder
    int i=0;
    inorder(root, arr, i);
}

int main()
{
    int arr[] = {5,4,7,2,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    treesort(arr, n);
    
    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    
    return 0;
}
