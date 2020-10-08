### :boom:[mycodeschool](https://www.youtube.com/watch?v=5cPbNCrdotA&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=13) [GeeksforGeeks](https://www.geeksforgeeks.org/inorder-successor-in-binary-search-tree/)  

The problem is, given a node in a binary search tree 
we need to find its inorder successor i.e. the node that would come 
immediately after the given node in inorder traversal of the binary search tree.  

Inorder successor of an element, In a binary search tree,
it would be the next higher value in the tree.     

case 1 :  
For a node if there is rightsubtree then inorder successor would be to left most node 
in its right subtree.In a BST it would be the node with minimum value in its right subtree.    
 
case 2 :   
If the node does not have the right subtree, we need to go to the nearest 
ancestor for which given node would be in its left subtree.

If we will walk the tree from root to the given node. We will go through all the ancestors of  given node.
Inorder successor would be the deepest node or deepest ancestors in this path
for which given node would be in it's left subtree(from this deepest ancestor). 
