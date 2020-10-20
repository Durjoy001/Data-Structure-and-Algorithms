//https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1#

//For Binary search tree, while traversing the tree from top to bottom the first node 
//which lies in between the two numbers n1 and n2 is the LCA of the nodes.
//1. If the value of the current node is less than both n1 and n2, then LCA lies in the right subtree. Call the recursive function for thr right subtree.
//2. If the value of the current node is greater than both n1 and n2, then LCA lies in the left subtree. Call the recursive function for thr left subtree.
//3. If both the above cases are false then return the current node as LCA.
Node* LCA(Node *root, int n1, int n2)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(n1 < root->data && n2 < root->data)
    {
        return LCA(root->left,n1,n2);
    }
    if(n1 > root->data && n2 > root->data)
    {
        return LCA(root->right,n1,n2);
    }
    return root;
}
