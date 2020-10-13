//https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1

int toSumTreeUtil(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int a = toSumTreeUtil(root->left);
    int b = toSumTreeUtil(root->right);
    int c = root->data;
    root->data = (a+b);
    return (a+b+c);
    
}
void toSumTree(Node *node)
{
     toSumTreeUtil(node);
}
