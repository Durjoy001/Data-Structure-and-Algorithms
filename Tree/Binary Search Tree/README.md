### [:boom: mycodeschool](https://www.youtube.com/watch?v=pYT9F8_LFTM&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=3)   
Operation  |  Array (Unsorted)  |  Linked List   |  Array (Sorted)   |   BST (Balanced)    
-----------|--------------------|----------------|-------------------|-----------------    
**Search (X)** |  O(n) |  O(n)  | O(log n) [Using binary search.] | **O(log n)**   
**Insert (X)** | O(1) [If space is available]  | O(1) [If insert at head] |  O(n) [Have to right shift all right side elements.] |  **O(log n)**    
**Remove (X)** | O(n) [Have to left shift all right side elements] | O(n)  | O(n) | **O(log n)**     

**In Binary Search for n records, we will have at max log(base2) n comparisons.**     

In Binary Search Tree cost of all these three operations is **O(log n) in average case.**   
The cost of all the operations will be **O(n) in worst case** (If the tree is A **degenerate (or pathological) tree, A Tree where every internal node has one child.** Such trees are performance-wise same as linked list.          

**But we can avoid the worst case by making sure that the tree is always balanced (Balanced BST)** (we call a tree balanced if for all nodes, the difference between the 
heights of left and right sub-trees is not greater than 1.      

**In BST the search here is also a binary search.**  

For insert or delete an element in BST, first we have to find the position where to insert and have to find the node which to delete, and this cost O(log n) time(for
searching these position and node).And after this we can do insert and delete in constant time O(1).

