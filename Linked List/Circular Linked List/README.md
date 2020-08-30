## :boom:[GeeksforGeeks Set 1(Intro)](https://www.geeksforgeeks.org/circular-linked-list/)
**Circular linked list is a linked list where all nodes are connected to form a circle. There is no NULL at the end. A circular linked list can be a singly circular linked list or doubly circular linked list.**   
## Advantages of Circular Linked Lists:   
1) Any node can be a starting point. We can traverse the whole list by starting from any point. We just need to stop when the first visited node is visited again.  
2) Useful for implementation of queue. we don’t need to maintain two pointers for front and rear if we use circular linked list. We can maintain a pointer to the last inserted node and front can always be obtained as next of last.  
3) Circular lists are useful in applications to repeatedly go around the list. For example, when multiple applications are running on a PC, it is common for the operating system to put the running applications on a list and then to cycle through them, giving each of them a slice of time to execute, and then making them wait while the CPU is given to another application. It is convenient for the operating system to use a circular list so that when it reaches the end of the list it can cycle around to the front of the list.   
## :boom:[GeeksforGeeks Set 2(Traversal)](https://www.geeksforgeeks.org/circular-linked-list-set-2-traversal/)  
In a conventional linked list, we traverse the list from the head node and stop the traversal when we reach NULL. In a circular linked list, we stop traversal when we reach the first node again.     
## :boom:[GeeksforGeeks (Insertion)](https://www.geeksforgeeks.org/circular-singly-linked-list-insertion/)  
**Why have we taken a pointer that points to the last node instead of first node ?**  
For insertion of node in the beginning we need traverse the whole list. Also, for insertion and the end, the whole list has to be traversed. If instead of start pointer we take a pointer to the last node then in both the cases there won’t be any need to traverse the whole list. So insertion in the begging or at the end takes constant time irrespective of the length of the list.    
### Insertion  
**A node can be added in three ways:**  
    1) Insertion in an empty list      
    2) Insertion at the beginning of the list    
    3) Insertion at the end of the list   
    4) Insertion in between the nodes    
    
### 1)Insertion in an empty list   
Initially when the list is empty, last pointer will be NULL. After inserting a node T, T is the last node so pointer last points to node T. And Node T is first and last node, so T is pointing to itself.    
### 2) Insertion at the beginning of the list  
To Insert a node at the beginning of the list, follow these step:  
1. Create a node, say T.  
2. Make T -> next = last -> next.  
3. last -> next = T.    
### 3)Insertion at the end of the list   
To Insert a node at the end of the list, follow these step:  
1. Create a node, say T.  
2. Make T -> next = last -> next;  
3. last -> next = T.  
4. last = T.  
### 4)Insertion in between the nodes  
follow these step:  
1. Create a node, say T.  
2. Search the node after which T need to be insert, say that node be P.  
3. Make T -> next = P -> next;  
4. P -> next = T.   

