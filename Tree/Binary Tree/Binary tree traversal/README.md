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

**:boom:All four traversals require O(n) time as they visit every node exactly once.**   

**:boom:There is difference in terms of extra space required :**   
1. Extra Space required for Level Order Traversal is **O(w)** where w is maximum width of Binary Tree.  
2. Extra Space required for Depth First Traversals is **O(h)** where h is maximum height of Binary Tree.   

**Maximum Width of a Binary Tree at depth (or height) h can be 2^h where h starts from 0.**  
So the maximum number of nodes can be at the last level. And **worst case(for level order traversal)** occurs when Binary Tree is a **perfect Binary Tree** with numbers of nodes like 1, 3, 7, 15, …etc. In worst case, value of 2^h is Ceil(n/2).    

Height for a Balanced Binary Tree is O(Log n). **Worst case(for depth first traversal)** occurs for **skewed tree** and worst case **height becomes O(n)**.
So in worst case extra space required is O(n).      

**It is evident from above points that extra space required for Level order traversal is likely to be more when tree is more balanced and extra space for Depth First Traversal is likely to be more when tree is less balanced.**   

### :boom:Level Order Traversal : [mycodeschool](https://www.youtube.com/watch?v=86g8jAQug04&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=9) [ GeeksforGeeks](https://www.geeksforgeeks.org/level-order-tree-traversal/)   
What we can do is, as we visit a node, we can keep reference or address of all its children in a queue, so we can visit them later.   
Initially we are enqueuing the root node.   
**We'll storing the address of the node in the queue.** As long as the queue is not empty, we can take out a node from the front, visit it(print data) and then enqueue its children. Once the queue is empty, we are done with our traversal.      

**printLevelorder(tree)**      
**1) Create an empty queue q**   
**2) push root address to queue  /*start from root*/**    
**3) Loop while queue is not NULL**    
    **a) temp_node = queue.front() and print it's data.**    
    **b) Enqueue temp_node’s children (first left then right children) to q**    
    **c) Dequeue front element of queue.**     

#### [Here is code of Level order traversal](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Tree/Binary%20Tree/Binary%20tree%20traversal/Level%20Order%20Traversal.cpp)  
As the algorithm will execute, at some point for each level, all the nodes 
in that level will be in the queue. In a perfect binary tree, we will have n/2 nodes at the deepest level. 
**So, maximum number of nodes in the queue is going to be at least n/2.** 
**So, basically extra memory used is proportional to n - the number of nodes.** 
**So, space complexity will be O(n) for this case(wrost case).** 
In best case space complexity will O(1) when tree is skewed.
for average case, space complexity will be O(n).      

**Time Complexity: O(n)** where n is number of nodes in the binary tree  
**Space Complexity: O(n)** where n is number of nodes in the binary tree    

### :boom: Depth First Traversals : [mycodeschool](https://www.youtube.com/watch?v=gm8DUJJhmY4&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=10)[ GeeksforGeeks](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)   
**[Here is the code of Inorder Preorder Postorder Traversal](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Tree/Binary%20Tree/Binary%20tree%20traversal/Inorder_Preorder_Postorder.cpp)**    

**Time Complexity: O(n)** There are one function call corresponding to each node.  
**Space Complexity: O(h).** In wrost case it will be O(n) for skewed tree and Best and Average Space complexity will be O(log n).    




   
