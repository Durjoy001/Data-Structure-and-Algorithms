class Solution {
public:
    int maxPathSumUtil(TreeNode* root,int &res)
    {
        if(root == NULL){
            return 0;
        }
        int l = maxPathSumUtil(root->left,res);
        int r = maxPathSumUtil(root->right,res);
        int current_ans = l+r+root->val;
        res = max(res,current_ans);
        if( (max(l,r) + root->val) > 0 ){
            return max(l,r)+root->val;
        }
        return 0;
    }
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        maxPathSumUtil(root,res);
        return res;
    }
};
