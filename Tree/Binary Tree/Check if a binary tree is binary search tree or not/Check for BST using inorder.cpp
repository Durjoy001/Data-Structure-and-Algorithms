//https://practice.geeksforgeeks.org/problems/check-for-bst/1

int isBUtil(Node* root,int &prev)
{
    
   if(root != NULL)
   {
        isBUtil(root->left,prev);
        if(root->data <= prev)
        {
          return 0;
        }
        prev = root->data;
        return isBUtil(root->right,prev);
   }
   return 1;
}

// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    int prev = INT_MIN;
    return isBUtil(root,prev);
}
