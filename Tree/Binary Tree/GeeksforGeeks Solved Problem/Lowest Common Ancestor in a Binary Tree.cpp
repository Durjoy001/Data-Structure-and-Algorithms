//https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1


/* If n1 and n2 are present, return pointer
   to LCA. If both are not present, return 
   NULL. Else if left subtree contains any 
   of them return pointer to left.*/
   
/* we have to consider 4 case:
1 : both n1 and n2 are in left and right subtree of the ancestor.(return ancestor)
2 : one of the node are the ancestor of another node.return this ancesotor node(n1 or n2)
3 : only n1 or n2 is found,return that node.
4 : None found,return NULL.*/
Node* lca(Node* root ,int n1 ,int n2 )
{
    //Base case
   if(root == NULL)
   {
       return NULL;
   }
    // If either n1 or n2 matches with root's key, report 
    // the presence by returning root (Note that if a key is 
    // ancestor of other(between these 2 node), then the ancestor key becomes LCA 
   if(root->data == n1 || root->data == n2)
   {
       return root;
   }
   Node* l = lca(root->left,n1,n2);
   Node* r = lca(root->right,n1,n2);
     // If both of the above calls return Non-NULL, then one key 
    // is present in once subtree and other is present in other, 
    // So this node is the LCA 
   if(l && r)
   {
       return root;
   }
   //if both are null return null
   if(l == NULL && r == NULL)
   {
       return NULL;
   }
   //one subtree is return null and another is non-null then return this non-null node.
   return (l != NULL) ? l : r;
}
