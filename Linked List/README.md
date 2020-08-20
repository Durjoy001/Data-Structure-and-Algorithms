## Linked List Data Structure    [GfG](https://www.geeksforgeeks.org/data-structures/linked-list/)  
**A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.**  
**The elements in a linked list are linked using pointers.In simple words, a linked list consists of nodes where each node contains a data field and a reference(link).**  
## Introduction to linked list [mycodeschool](https://www.youtube.com/watch?v=NobHlGUjV3g&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=3):boom:[GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-set-1-introduction/)    
#### Why Linked List?   
Arrays can be used to store linear data of similar types, but arrays have the following limitations:  
*  [mycodeschool](https://www.youtube.com/watch?v=HdFG8L1sajw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=2) The good thing is that in array we can access elements at any index in constant time O(1), but **if we have to insert some element in between and if we have to remove element from the list then it is costly,because the room has to be created for the new elements and to create room existing elements have to be shifted,In wrost case Time complexity would be O(n) for remove,insert and Add** (because in wrost case if the size of array is full than we have to create a new double size array and add this element).If the list grows and shrinks a lot , and if the arry is full and we wan to insert or add one or more element or extend the size of array then we will also have to create a new array of double or whatever size max than previous array and have all this thing of copying elements from previous array to a new array again and again(If addjacent block of memory for new size will not available). And one more problem is that a lot of time a lot of the memory would be unused. Definitely the use of array as dynamic list is not efficient in terms of memory.This leads us to think- can we have a data structure that will give us a dynamic list and use the memory more efficiently . Here Linked List comes.   
#### Advantages over arrays:  
1) Dynamic size  
2) Ease of insertion/deletion   
* **Time taken to access the element in linked list is O(n) ,cz in the worst case to traverse the last element we will go through all the elements, so time taken to access or modifie elements is proportional to n.Time complexity O(n).**    
* **Insertion:O(n), Now to insert also, we will have to traverse the list and got to that particular position and so this will be O(n) again in terms of of time complexity ,  will not have to do all the shifts as we had to do in an array.**     
* **Delete: Time complexity O(n),have to go to that position from head.**  
* **There  is no extra use of memory ,though we are using some extra memory to store the addresses, but we have the benefit that we create nodes as and when we want we can also free the nodes as and we do not have to guess the size of the list beforehand like in the case of arrays.**  
#### Drawbacks:  
**1) Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do binary search with linked lists efficiently with its default implementation.**  
2) Extra memory space for a pointer is required with each element of the list.  
3) **Not cache friendly.** Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.
#### Representation:  
* A linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head is NULL.Address of the head node kind of gives us access to the complete Linked list.   
* **Each node in a linked list consists of at least two parts:**  
  1) data.   
  2) Pointer (Or Reference,)which contain address to the next node.      
##  Arrays vs Linked Lists: [mycodeschool](https://www.youtube.com/watch?v=lC-yYCOnN8Q&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=4):boom:[GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-vs-array/)  

Operation            |                Array                 |                 Linked list    
---------------------|--------------------------------------|--------------------------------- 
1)Cost of accesing element| **constant time O(1)** | **Avarage case O(n)**     
2)Memory requirement| **Fixed size ,unused memory(if we declare large size of array and not insert this much of element),memory may not be available as one large block,extend of array size is costly.** |**No unused memory,extra memory for pointer variable,memory may be available as multiple small blocks.**  
3)Inserting of element|**a) at beginning: O(n), b) at end: O(1) if array is not full, O(n) if array is full c) average case: O(n)** | **a) at beginning: O(1), b) at end: O(n) c) average case: O(n)**  
4)Remove an element | **same as insert, average case O(n)** | **same as insert, average case O(n)**  
5)Ease of use | **Array emplementation is easy** | **Not easy to implement have to got many error when using this.**  













