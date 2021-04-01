int maxPathSumUtil(Node* root,int &res)
{
    if(root->left == NULL && root->right == NULL)
    {
        return root->data;
    }
    int l=0,r=0;
    if(root->left != NULL) l = maxPathSumUtil(root->left,res);
    if(root->right != NULL) r = maxPathSumUtil(root->right,res);
    int current_ans = l+r+root->data;
       // If both left and right children exist
    if(root->left != NULL && root->right != NULL){
        res = max(res,current_ans);
        return max(l,r)+root->data;
    }
    // If any of the two children is empty..then l=0 or r = 0 . that's why l+r doesn't change the value
    return root->data+l+r;
    
}
int maxPathSum(Node* root)
{ 
    int res = INT_MIN;
    maxPathSumUtil(root,res);
    return res;
}
