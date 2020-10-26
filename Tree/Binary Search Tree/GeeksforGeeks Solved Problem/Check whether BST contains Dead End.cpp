//https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1#

void isDeadEndUtil(Node* root,bool& ans,int l,int h)
{
    if(root == NULL || ans == true)
    {
        return;
    }
    if(l == h || h == 1)
    {
        ans = true;
    }
    isDeadEndUtil(root->left,ans,l,(root->data)-1);
    isDeadEndUtil(root->right,ans,(root->data)+1,h);
}
bool isDeadEnd(Node *root)
{
    bool ans = false;
    isDeadEndUtil(root,ans,INT_MIN,INT_MAX);
    return ans;
}
