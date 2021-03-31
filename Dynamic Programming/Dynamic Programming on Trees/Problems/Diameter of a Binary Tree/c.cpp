//diameter of a tree is nothing but maximum value of (left_height + right_height + 1) for each node
class Solution
{
    public:
    int diameterUtil(Node* root, int &res)
    {
        if(root == NULL){
            return 0;
        }
        int l = diameterUtil(root->left,res);
        int r = diameterUtil(root->right,res);
        int current_ans = 1+l+r;
        res = max(res,current_ans);
        return max(l,r)+1;
    }
    int diameter(Node* root)
    {
      int res = INT_MIN;
      diameterUtil(root,res);
      return res;
    }

};
