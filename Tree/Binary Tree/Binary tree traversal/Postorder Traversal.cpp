//https://practice.geeksforgeeks.org/problems/postorder-traversal/1

void printPostOrder(Node* root, vector<int>&ans)
{
    if(root == NULL)
    {
        return;
    }
    printPostOrder(root->left,ans);
    printPostOrder(root->right,ans);
    ans.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
   vector<int>ans;
   printPostOrder(root,ans);
   return ans;
}
