//https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1
//https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=12

Node* findMin(Node* root)
{
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
// Return the root of the modified BST after deleting the node with value X
Node *deleteNode(Node *root,  int X)
{
     // base case 
     if(root == NULL)
     {
         return root;
     }
    // If the key to be deleted is smaller than the root's key, 
    // then it lies in left subtree 
     else if(X<root->data) root->left = deleteNode(root->left,X);
    // If the key to be deleted is greater than the root's key, 
    // then it lies in right subtree 
     else if(X>root->data) root->right = deleteNode(root->right,X);
     // found data, Get ready to be deleted	
     else
     {
         // Case 1:  No child,leaf node
         if(root->left == NULL && root->right == NULL)
         {
             delete root;
             root = NULL; 
             /*but root still has its address. So
              we can set root as null, and now we can return root.*/ 
             return root;
         }
         //Case 2: One child 
         else if(root->left == NULL)
         {
             Node* tmp = root;
             root = root->right;
             delete tmp;
             return root;
         }
         else if(root->right == NULL)
         {
             Node* tmp = root;
             root = root->left;
             delete tmp;
             return root;
         }
         // case 3: 2 children
         else
         {
             Node* tmp = findMin(root->right);
             root->data = tmp->data;
             root->right = deleteNode(root->right,tmp->data);
         }
     }
}
