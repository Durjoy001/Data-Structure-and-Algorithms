#### :boom:[GeeksforGeeks](https://www.geeksforgeeks.org/avl-tree-set-1-insertion/):boom:[Youtube](https://www.youtube.com/watch?v=rbg7Qf8GkQ4)   
**AVL tree is a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtrees cannot be more than one for all nodes.**  
#### Why AVL Trees?  
Most of the BST operations (e.g., search, max, min, insert, delete.. etc) take O(h) time where h is the height of the BST. The cost of these operations may become O(n) for a skewed Binary tree. If we make sure that height of the tree remains O(Logn) after every insertion and deletion, then we can guarantee an upper bound of O(Logn) for all these operations. The height of an AVL tree is always O(Logn) where n is the number of nodes in the tree.  
 
### :boom: Insertion:    
#### Steps to follow for insertion:    
Let the newly inserted node be w  
1) Perform standard BST insert for w.  
2) Starting from w, travel up and find the first unbalanced node. Let z be the first unbalanced node, y be the child of z that comes on the path from w to z and x be the grandchild of z that comes on the path from w to z.  
3) Re-balance the tree by performing appropriate rotations on the subtree rooted with z. There can be 4 possible cases that needs to be handled as x, y and z can be arranged in 4 ways. Following are the possible 4 arrangements:  
a) y is left child of z and x is left child of y (**Left Left Case**)  
b) y is left child of z and x is right child of y (**Left Right Case**)    
c) y is right child of z and x is right child of y (**Right Right Case**)  
d) y is right child of z and x is left child of y (**Right Left Case**)  

**Left Rotate and Right Rotate** operations are to be performed in above mentioned 4 cases. In all of the cases, we only need to re-balance the subtree rooted with z and the complete tree becomes balanced as the height of subtree (After appropriate rotations) rooted with z becomes same as it was before insertion.   

**:boom: [Here is the code of AVL tree insertion.](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Tree/AVL%20Tree/AVL%20Tree%20Insertion.cpp)**    

**Time Complexity:** The rotation operations (left and right rotate) take constant time as only a few pointers are being changed there. Updating the height and getting the balance factor also takes constant time. So the time complexity of AVL insert remains same as BST insert which is O(h) where h is the height of the tree. Since AVL tree is balanced, the height is O(Logn). So **time complexity of AVL insert is O(Logn)**.  

**Comparison with Red Black Tree:**
The AVL tree and other self-balancing search trees like Red Black are useful to get all basic operations done in O(log n) time. The AVL trees are more balanced compared to Red-Black Trees, but they may cause more rotations during insertion and deletion. So if your application involves many frequent insertions and deletions, then Red Black trees should be preferred. And if the insertions and deletions are less frequent and search is the more frequent operation, then AVL tree should be preferred over Red Black Tree.    

### :boom: Deletion :   
#### [GeeksforGeeks](https://www.geeksforgeeks.org/avl-tree-set-2-deletion/) and [AVL tree removals](https://www.youtube.com/watch?v=g4y2h70D6Nk&t=429s)  

**Implementation :**  
The implementation uses the recursive BST delete as basis. In the recursive BST delete, after deletion, we get pointers to all ancestors one by one in bottom up manner. So we don’t need parent pointer to travel up. The recursive code itself travels up and visits all the ancestors of the deleted node.   
1) Perform the normal BST deletion.           
2) The current node must be one of the ancestors of the deleted node. Update the height of the current node.   
3) Get the balance factor (left subtree height – right subtree height) of the current node.   
4) If balance factor is greater than 1, then the current node is unbalanced and we are either in Left Left case or Left Right case. To check whether it is Left Left case or Left Right case, get the balance factor of left subtree. If balance factor of the left subtree is greater than or equal to 0, then it is Left Left case, else Left Right case.       
5) If balance factor is less than -1, then the current node is unbalanced and we are either in Right Right case or Right Left case. To check whether it is Right Right case or Right Left case, get the balance factor of right subtree. If the balance factor of the right subtree is smaller than or equal to 0, then it is Right Right case, else Right Left case.      

Unlike insertion, in deletion, after we perform a rotation at z, we may have to perform a rotation at ancestors of z. Thus, we must continue to trace the path until we reach the root.   

#### [:boom: Here is the code of AVL tree deletion.](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Tree/AVL%20Tree/AVL%20Tree%20Deletion.cpp)  
**Time Complexity:** The rotation operations (left and right rotate) take constant time as only few pointers are being changed there. Updating the height and getting the balance factor also take constant time. So the time complexity of AVL delete remains same as BST delete which is O(h) where h is height of the tree. Since AVL tree is balanced, the height is O(Logn). So **time complexity of AVL delete is O(Log n)**.







