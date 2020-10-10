https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

vector<int> leftView(Node *root)
{
    vector<int>ans;
    if(root == NULL)
    {
        return ans;
    }
    Node* tmp = root;
    ans.push_back(tmp->data);
   while(tmp->left != NULL || tmp->right != NULL)
   {
       if(tmp->left != NULL)
       {
           tmp = tmp->left;
           ans.push_back(tmp->data);
       }
       else if(tmp->right != NULL)
       {
           tmp = tmp->right;
           ans.push_back(tmp->data);
       }
   }
   return ans;
   /* for input 1 2 3 N N 4 6 N 5 N N 7 N
   this code give 1 2 output ,but it's wrong
   output should be 1 2 4 5 7 */
   //but this code got accepted
}
