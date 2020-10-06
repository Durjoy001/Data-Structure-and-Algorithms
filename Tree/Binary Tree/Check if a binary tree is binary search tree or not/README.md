### :boom:[mycodeschool](https://www.youtube.com/watch?v=yEwSGhSsT0U&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=11) and [GeeksforGeeks1](https://www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/) [GeeksforGeeks2](https://www.geeksforgeeks.org/check-if-a-binary-tree-is-bst-simple-and-efficient-approach/)  
**[Here is the code](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Tree/Binary%20Tree/Check%20if%20a%20binary%20tree%20is%20binary%20search%20tree%20or%20not/Check%20for%20BST.cpp)**      

We will simply check wheather data in root is in the range or not.Initaialy range will be from INT_MIN to INT_MAX.     
For the left child lower bound will not change, upper bound will be to data in current node and for the right child, upper  bound will not change
and lower bond will be data in current node.   

In this recursion will go to each node once and at each node we will take constant time to see whether the data at node is in a defined range or not.
**Time complexity would be O(N)** where N is number of nodes in the binary tree.    

There is another solution to this problem.   
We can perform **Inorder traversal** of binary tree and if the tree is binary search tree we would read the data in sorted order. 
In-order traversal of a binary search tree gives a sorted list. We can do some hack 
while performing in order traversal and check if We're getting the elements in sorted order or not. 
During the whole traversal we only need to keep track of previously read node and at any time data in a node that we're reading 
must be greater than the data in previously read node.    
