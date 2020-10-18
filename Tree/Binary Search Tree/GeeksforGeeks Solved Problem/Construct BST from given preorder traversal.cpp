/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* bstFromPreorderUtil(vector<int>preorder,int* preIndex,int key,int min,int max,int size)
    {
        if(*preIndex >= size)
        {
            return NULL;
        }
        TreeNode* root = NULL;
        if(key>min && key<max)
        {
            root = new TreeNode(key);
            *preIndex = *preIndex+1;
            if(*preIndex < size)
            {
                root->left = bstFromPreorderUtil(preorder,preIndex,preorder[*preIndex],min,key,size);
            }
            if(*preIndex < size)
            {
                root->right = bstFromPreorderUtil(preorder,preIndex,preorder[*preIndex],key,max,size);
            }
        }
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int preIndex = 0;
        int n = preorder.size();
        if(n==0)
        {
            return NULL;
        }
        return bstFromPreorderUtil(preorder,&preIndex,preorder[0],INT_MIN,INT_MAX,n);
    }
};