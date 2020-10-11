//https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

// A function to print all left boundary nodes, except a leaf node. 
void forLeftView(Node* root,vector<int>&ans)
{
    if(root == NULL)
    {
        return;
    }
    // do nothing if it is a leaf node, this way we avoid 
    // duplicates in output 
    if(root->left != NULL)
    {
        ans.push_back(root->data);
        forLeftView(root->left,ans);
    }
    else if(root->right != NULL)
    {
        ans.push_back(root->data);
        forLeftView(root->right,ans);
    }
}
void forLeafNode(Node* root,vector<int>&ans)
{
    if(root == NULL)
    {
        return;
    }
    forLeafNode(root->left,ans);
     // store it if it is a leaf node 
    if(root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
    }
    forLeafNode(root->right,ans);
}
void forRightView(Node* root,vector<int>&ans)
{
    if(root == NULL)
    {
        return;
    }
    // do nothing if it is a leaf node, this way we avoid 
    // duplicates in output 
    if(root->right != NULL)
    {
        forRightView(root->right,ans);
        ans.push_back(root->data);
    }
    else if(root->left != NULL)
    {
        forRightView(root->left,ans);
        ans.push_back(root->data);
    }
}
vector <int> printBoundary(Node *root)
{
    vector<int>ans;
    if(root == NULL)
    {
        return ans;
    }
    ans.push_back(root->data);
    // Print the left boundary in top-down manner
    //start from root->left for avoiding wrong ans in right skewed tree.
    forLeftView(root->left,ans);
    // Print all leaf nodes 
    forLeafNode(root,ans);
     // Print the right boundary in bottom-up manner 
    forRightView(root->right,ans);
    return ans;
}
