### :boom: Binary Tree Traversal [mycodeschool](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=8) and [GeeksgorGeeks](https://www.geeksforgeeks.org/bfs-vs-dfs-binary-tree/)    
A Tree is typically traversed in two ways:   
 * **Breadth First Traversal (Or Level Order Traversal)**     
 * Depth First Traversals  
   * **Inorder Traversal (Left-Root-Right)**    
   * **Preorder Traversal (Root-Left-Right)**     
   * **Postorder Traversal (Left-Right-Root)**  
   
**In breadth-first approach we would visit all the nodes at same depth or level,before visiting the nodes at next level.**   
First we would visit Level- 0 then Level- 1 then level- 2 nodes. We would go level by level from left to right. Depth or level of a node is defined as number of edges in path from root to that node. Root node would have depth 'zero'.  

**In depth-first approach if we would go to a child, we would complete the whole subtree of the child before going to the next child.**   
In total there are six possible permutations for left, right and root but conventionally 
a left subtree is always visited before the right subtree so these are the three strategies that we use only the position of root is 
changing here.   

**In-order traversal of a binary search tree will give us a sorted list.**  

**All four traversals require O(n) time as they visit every node exactly once.**   

**There is difference in terms of extra space required :**   
1. Extra Space required for Level Order Traversal is **O(w)** where w is maximum width of Binary Tree.  
2. Extra Space required for Depth First Traversals is **O(h)** where h is maximum height of Binary Tree.   

   
