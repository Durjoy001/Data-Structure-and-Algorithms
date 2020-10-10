//https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

/*The problem can also be solved using simple recursive traversal. We can keep track of the
level of a node by passing a parameter to all recursive calls. The idea is to keep track of the
maximum level also. Whenever we see a node whose level is more than maximum level so 
far, we print the node because this is the first node in its level (Note that we traverse the left 
subtree before right subtree). */
void leftViewUTIL(Node* root,int level,int* max_level,vector<int>&ans)
{
//we have to recive address of the ans vector else we not get the result
    if(root == NULL)
    {
        return;
    }
    // If this is the first node of its level 
    if(*max_level < level)
    {
        ans.push_back(root->data);
        *max_level = level;
    }
      // Recur for left and right subtrees 
    leftViewUTIL(root->left,level+1,max_level,ans);
    leftViewUTIL(root->right,level+1,max_level,ans);
}
vector<int> leftView(Node *root)
{
    int max_level = 0;
    vector<int>ans;
    leftViewUTIL(root,1,&max_level,ans);
    return ans;
}
