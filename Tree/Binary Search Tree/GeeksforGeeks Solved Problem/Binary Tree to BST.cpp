//https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1


// The given root is the root of the Binary Tree
// Return the root of the generated BST
void getList(Node* root,vector<int>&v)
{
    if(root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    getList(root->left,v);
    getList(root->right,v);
}
void buildBST(Node* root,vector<int>&v,int* index)
{
    if(root == NULL)
    {
        return;
    }
    buildBST(root->left,v,index);
    root->data = v[*index];
    *index = *index+1;
    buildBST(root->right,v,index);
}
Node *binaryTreeToBST (Node *root)
{
    if(root == NULL)
    {
        return NULL;
    }
    vector<int>v;
    getList(root,v);
    sort(v.begin(),v.end());
    int index = 0;
    buildBST(root,v,&index);
    return root;
}
