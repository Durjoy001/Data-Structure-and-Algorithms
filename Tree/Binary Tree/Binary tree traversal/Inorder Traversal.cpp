//https://practice.geeksforgeeks.org/problems/inorder-traversal/1

void printInOrder(Node* root, vector<int>&ans)
{
    if(root== NULL)
    {
        return;
    }
    printInOrder(root->left,ans);
    ans.push_back(root->data);
    printInOrder(root->right,ans);
}
// Return a vector containing the inorder traversal of the tree
vector<int> inOrder(Node* root)
{
   vector<int>ans;
   printInOrder(root,ans);
   return ans;
}
