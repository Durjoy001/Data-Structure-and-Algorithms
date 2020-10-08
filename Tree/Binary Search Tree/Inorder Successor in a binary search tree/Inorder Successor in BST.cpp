//https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1
//https://www.youtube.com/watch?v=5cPbNCrdotA&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=13

Node* findMin(Node* root)
{
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

// returns the inorder successor of the Node x in BST (rooted at 'root')
Node * inOrderSuccessor(Node *root, Node *x)
{
    if(x == NULL)
    {
        return x;
    }
    // case 1 : Node has right subtree
    if(x->right != NULL)
    {
        return findMin(x->right);
    }
    //No right subtree
    else
    {
        Node* successor = NULL;
        Node* ancestor = root;
        while(ancestor != x)
        {
            if(x->data < ancestor->data)
            {
                successor = ancestor;//so far this is the deepest node for which 'x' node is in left
                ancestor = ancestor->left;
            }
            else
            {
                ancestor = ancestor->right;
            }
        }
        return successor;
    }
}
