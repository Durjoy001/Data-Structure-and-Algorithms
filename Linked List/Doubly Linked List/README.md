## [:boom: mycodeschool](https://www.youtube.com/watch?v=JdQeNxWCguQ&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=12) [:boom:GeeksforGeeks (Introduction Insertion and Deletion)](https://www.geeksforgeeks.org/doubly-linked-list/)  
**A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list.**  
### Advantages over singly linked list:  
1) A DLL can be traversed in both forward and backward direction.  
2) The delete operation in DLL is more efficient if pointer to the node to be deleted is given.  
3) We can quickly insert a new node before a given node.  
In singly linked list, to delete a node, pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using previous pointer.  
### Disadvantages over singly linked list: 
1) Every node of DLL Require extra space for an previous pointer. It is possible to implement DLL with single pointer though, [XOR Linked list or memory efficant DLL](https://www.geeksforgeeks.org/xor-linked-list-a-memory-efficient-doubly-linked-list-set-1/).    
2) All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with next pointers. For insertions at different positions, we need 1 or 2 extra steps to set previous pointer.  
