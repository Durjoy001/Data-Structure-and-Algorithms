//https://practice.geeksforgeeks.org/problems/check-if-tree-is-isomorphic/1

// Return True if the given trees are isomotphic. Else return False.
bool  isIsomorphicUtil(Node* root1,Node* root2)
{
    if(!root1 && !root2)
    {
        return true;
    }
    if(!root1 || !root2)
    {
        return false;
    }
    if(root1->data != root2->data)
    {
        return false;
    }
    if((isIsomorphicUtil(root1->left,root2->right)
        &&isIsomorphicUtil(root1->right,root2->left))
        ||(isIsomorphicUtil(root1->left,root2->left)
        && isIsomorphicUtil(root1->right,root2->right)))
       {
           return true;
       }
       else
       {
           return false;
       }
}
bool isIsomorphic(Node *root1,Node *root2)
{
   if(root1==NULL && root2 == NULL)
   {
       return true;
   }
   return isIsomorphicUtil(root1,root2);
}
