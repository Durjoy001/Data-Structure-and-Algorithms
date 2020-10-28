//https://www.geeksforgeeks.org/avl-tree-set-1-insertion/
//https://practice.geeksforgeeks.org/problems/avl-tree-insertion/1

#include<bits/stdc++.h>
using namespace std;
// An AVL tree node
class Node{
public:
    int key;
    Node* left;
    Node* right;
    int height;
};
// A utility function to get the
// height of the tree
int height(Node* N)
{
    if(N == NULL)
    {
        return 0;
    }
    return N->height;
}
Node* newNode(int key)
{
    Node* root = new Node();
    root->key = key;
    root->left = NULL;
    root->right = NULL;
    root->height = 1;// new node is initially added at leaf
    return (root);
}
Node* rightRotate(Node* y)
{
    Node* x = y->left;
    Node* T2 = x->right;
    // Perform rotation
    x->right = y;
    y->left = T2;
    // Update heights
    y->height = max(height(y->left),height(y->right))+1;
    x->height = max(height(x->left),height(x->right))+1;
    // Return new root
    return x;
}
Node* leftRotate(Node *x)
{
    Node *y = x->right;
    Node *T2 = y->left;
    // Perform rotation
    y->left = x;
    x->right = T2;
    // Update heights
    x->height = max(height(x->left),height(x->right)) + 1;
    y->height = max(height(y->left),height(y->right)) + 1;
    // Return new root
    return y;
}
int getBalance(Node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}
Node* Insert(Node* node,int key)
{
    /* 1. Perform the normal BST insertion */
    if(node == NULL)
    {
        return (newNode(key));
    }
    if(key < node->key)
    {
        node->left = Insert(node->left,key);
    }
    else if (key > node->key)
        node->right = Insert(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
     node->height = 1 + max(height(node->left),height(node->right));
     /* 3. Get the balance factor of this ancestor
        node to check whether this node became
        unbalanced */
    int balance = getBalance(node);
     // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

     // Right Right Case
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    /* return the (unchanged) node pointer */
    return node;
}
void preOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->key<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main()
{
    Node *root = NULL;
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 30);
    root = Insert(root, 40);
    root = Insert(root, 50);
    root = Insert(root, 25);

    cout << "Preorder traversal of the "
            "constructed AVL tree is \n";

    preOrder(root);

    return 0;
}
