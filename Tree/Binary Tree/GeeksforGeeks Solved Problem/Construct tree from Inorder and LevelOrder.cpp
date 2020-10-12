//https://practice.geeksforgeeks.org/problems/construct-tree-from-inorder-and-levelorder/1

Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n)
{
   if(n<=0)
   {
       return NULL;
   }
   // First node of level order is root 
   Node* root = new Node(levelOrder[0]);
   // Search root in inorder 
   int index = -1;
   for(int i=iStart;i<=iEnd;i++)
   {
       if(levelOrder[0] == inorder[i])
       {
           index = i;
           break;
       }
   }
   // Insert all left nodes in hash table 
   unordered_set<int>s;
   for(int i =iStart;i<index;i++)
   {
       s.insert(inorder[i]);
   }
   // Separate level order traversals 
   // of left and right subtrees
   int lLevel[s.size()];//left
   int rLevel[iEnd-iStart-s.size()];//right
   int li = 0,ri = 0;
   for(int i = 1;i<n;i++)
   {
       if(s.find(levelOrder[i]) != s.end())
       {
           lLevel[li++] = levelOrder[i];
       }
       else
       {
           rLevel[ri++] = levelOrder[i];
       }
   }
   // Recursively build left and right 
    // subtrees and return root. 
   root->left = buildTree(inorder, lLevel,  
                 iStart, index-1, index-iStart); 
    root->right = buildTree(inorder, rLevel,  
                  index+1, iEnd, iEnd-index); 
    return root;
}
