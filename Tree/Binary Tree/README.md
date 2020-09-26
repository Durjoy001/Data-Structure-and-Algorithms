### [:boom: mycodeschool](https://www.youtube.com/watch?v=H5JubkIy_p8&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=2)  
**Binary tree is a tree with this property that each node in the tree can have at most 2 children.**   
**If a tree has just one node, then also its a binary tree**. only condition is that a node cannot have more than 2 children.    

A binary tree is called strict binary tree or **proper binary tree** if each node can have either 2 or 0 children.   

**We call a binary tree complete binary tree if all levels except possibly the last level 
are completely filled and all nodes are as left as possible.**   

**In a perfect binary tree, all levels will be completely filled.**    

**Max number of nodes at level i is : 2^i.**  
**Maximum number of nodes in a binary tree with height h is : 2^(h+1) -1.**     
**Height of a perfect binary tree with N nodes is : log(base 2)(n+1) -1.**   

**Perfect binary tree is also a complete binary tree.**   

**Min Height of a complete binary tree is: floor(log(base2)n).**   
**Max height of a complete binary tree is: n-1.**  

**Cost of a lot of operations on tree in terms of time depends upon the height of tree.**    
In binary search tree which is a special kind of binary tree, the cost of searching, inserting or removing an element in terms of time is proportional to the height 
of tree.   
So, in such case we would want the height of the tree to be less. Height of a tree will be less if the tree will be dense, If the tree will be close to 
a perfect binary tree or a complete binary tree.   
Quite often, we want to keep the height of a binary tree minimum possible or most commonly,
we say that we try to keep a binary tree balanced.    

**We call a binary tree balanced binary tree, if for each node, the absolute difference between height of left and right sub-tree is not more than 1.**  

Height is number of edges in longest path from root to a leaf.    
**Height of a tree with just one node where the node itself will be a leaf node will be 0.**   
**We can define an empty tree as a tree with no node and we can say that height of an empty tree is -1.**      

we can implement binary tree using    
1) dynamically created node linked to each other using pointers or references.   
2) arrays(Arrays are typically used for complete binary trees.)   
for node at index i : left child index : 2i+1    
                      reight child index : 2i+2 (in a complete binary tree)   
                      


