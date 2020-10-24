//https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1#

int getCountOfNode(Node *root, int l, int h)
{
    if(! root)
    {
        return 0;
    }
    if(root->data >= l && root->data <= h)
    {
        return 1+getCountOfNode(root->left,l,h)
        +getCountOfNode(root->right,l,h);
    }
    if(root->data < l)
    {
        return getCountOfNode(root->right,l,h);
    }
    if(root->data > h)
    {
        return getCountOfNode(root->left,l,h);
    }
}
