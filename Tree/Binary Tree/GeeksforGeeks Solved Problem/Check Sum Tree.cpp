//https://practice.geeksforgeeks.org/problems/sum-tree/1

// Should return true if tree is Sum Tree, else false
int isSumTreeUtil(Node* root,bool* ans)
{
     // for node which has only one child
     if(root == NULL)
     {
         return 0;
     }
     //for leaf node
     if(root->left == NULL && root->right == NULL)
     {
         return root->data;
     }
     int a = isSumTreeUtil(root->left,ans);
     int b = isSumTreeUtil(root->right,ans);
     if(root->data != (a+b))
     {
         *ans = false;
     }
     return (a+b+(root->data));
}
bool isSumTree(Node* root)
{
     bool ans = true;
     isSumTreeUtil(root,&ans);
     return ans;
}
