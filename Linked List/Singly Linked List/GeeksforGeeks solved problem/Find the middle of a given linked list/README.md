Method 1:   
Traverse the whole linked list and count the no. of nodes. Now traverse the list again till count/2 and return the node at count/2.     
Method 2:   
Traverse linked list using two pointers. Move one pointer by one and other pointer by two. When the fastest pointer reaches end slow pointer will reach middle of the linked list.
 .    
 Method 3:   
Initialize mid element as head and initialize a counter as 0. Traverse the list from head, while traversing increment the counter and change mid to mid->next whenever the counter is odd. So the mid will move only half of the total length of the list. 
