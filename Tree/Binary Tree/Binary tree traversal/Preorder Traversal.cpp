//https://practice.geeksforgeeks.org/problems/preorder-traversal/1

void printPreOrder(Node* root,vector<int>&ans)
{
    if(root== NULL)
    {
        return;
    }
    ans.push_back(root->data);
    printPreOrder(root->left,ans);
    printPreOrder(root->right,ans);
}
vector <int> preorder(Node* root)
{
   vector<int>ans;
   printPreOrder(root,ans);
   return ans;
}
