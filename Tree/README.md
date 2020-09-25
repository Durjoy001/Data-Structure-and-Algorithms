### [:boom:Introduction to Trees : mycodeschool](https://www.youtube.com/watch?v=qH6yxkw0u78&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94)   
Tree is one data structure that's quite often used to represent hierarchical data.    
**So tree is an efficient way of storing and organizing data that is naturally hierarchical.**   

Tree data structure can be defined as a collection of entities called nodes linked together to 
simulate hierarchy.       

**Tree is a non-linear data structure. It's a hierarchical structure.**        

Each node will contain some data and this can be data of any type. And may contain link or reference to some other nodes that can be called its children.       

The topmost node in the tree is called **root** of the tree. Root would be the only node without a parent.     
Children of same parent are called **sibling**.     
If a node has a direct link to some other node, then we have a **parent child** relationship between the nodes.    
Any node in the tree that does not have a child is called **leaf** node.    

And we can have some more relationships like parent of parent can be called grand-parent.     

**If we can go from node A to node B, then A can be called ancestor of B and B can be called descendant of A.**    

1->2->5->10  ,select node 10     
1, 2 and 5 are all ancestors of 10 and 10 is a descendant of all of these nodes.     

Nodes not having same parent but having same grandparent can be called **cousins**.     

**Tree can be called a recursive data structure.**     

We can define tree recursively as a structure that consists of a distinguished node called 
root and some sub-trees and the arrangement is such that root of the tree contains link 
to roots of all the sub-trees.     

**A tree with n nodes, there will be exactly n-1 links or edges.**     
All nodes except the root node will have exactly 1 incoming edge.  

**Depth and Height:** 

**Depth of some node X in a tree can be defined as length of the path from root to Node X.**     
Each edge in the path will contribute one unit to the length.    
**So, we can also say number of edges in path from root to X.**    
**The depth of root node will be zero.**     

**Now height of a node in tree can be defined as number of edges in longest path from that node to a leaf node.**    
**height of some node X will be equal to number of edges in longest path from X to a leaf.**     
**Height of leaf nodes will be 0.**    
**Height of tree is defined as height of root node.**      

Height and depth are different properties and height and depth of a node may or may not be same.    

**The most common way of implementing tree is dynamically created nodes linked using pointers or references, just the way we do for linked list.**  
  
**In each node, we have 3 fields(In Binary Tree) 
We have an integer variable to store the data and then we have 2 pointers to Node, one to 
store the address of the left child that will be the root of the left sub-tree and another 
to store the address of the right child.**     

**Applications of tree in computer science:**  

1) Storing naturally **hierarchical data.**      
For example, the file system on your disc drive, the file and folder hierarchy is naturally **hierarchical data.**    
2) Organizing data, organizing collections for **quick search, insertion and deletion**.   
3) A special kind of tree called **Trie is used to store dictionary.** Its really fast and efficient and is used for dynamic spell checking.    
4) Tree data structure is also used in **network routing algorithms.**   





















