//https://practice.geeksforgeeks.org/problems/check-for-bst/1

int isBSTUtil(Node* root,int Min,int Max)
{
    if(root==NULL)
    {
        return 1;
    }
    if(root->data > Min && root->data < Max
    && isBSTUtil(root->left,Min,root->data)
    && isBSTUtil(root->right,root->data,Max))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    return isBSTUtil(root,INT_MIN,INT_MAX);
}
