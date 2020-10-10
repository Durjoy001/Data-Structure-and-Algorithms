//https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1

void rightViewUTIL(Node* root,int level,int* max_level,vector<int>&ans)
{
    if(root == NULL)
    {
        return;
    }
    if(*max_level < level)
    {
        ans.push_back(root->data);
        *max_level = level;
    }
    rightViewUTIL(root->right,level+1,max_level,ans);
    rightViewUTIL(root->left,level+1,max_level,ans);
}
// Should return  right view of tree
vector<int> rightView(Node *root)
{
    vector<int>ans;
    int max_level = 0;
    rightViewUTIL(root,1,&max_level,ans);
    return ans;
}
