### [:boom: mycodeschool](https://www.youtube.com/watch?v=pYT9F8_LFTM&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=3)   
Operation  |  Array (Unsorted)  |  Linked List   |  Array (Sorted)   |   BST (Balanced)    
-----------|--------------------|----------------|-------------------|-----------------    
**Search (X)** |  O(n) |  O(n)  | O(log n) [Using binary search.] | **O(log n)**   
**Insert (X)** | O(1) [If space is available]  | O(1) [If insert at head] |  O(n) [Have to right shift all right side elements.] |  **O(log n)**    
**Remove (X)** | O(n) [Have to left shift all right side elements] | O(n)  | O(n) | **O(log n)**     

**In Binary Search for n records, we will have at max log(base2) n comparisons.**     

**In Binary Search Tree cost of all these three operations is O(log n) in average case.**   
**The cost of all the operations will be O(n) in worst case.**   
**But we can avoid the worst case by making sure that the tree is always balanced (Balanced BST) (we call a tree balanced if for all nodes, the difference between the 
heights of left and right sub-trees is not greater than 1.**     
