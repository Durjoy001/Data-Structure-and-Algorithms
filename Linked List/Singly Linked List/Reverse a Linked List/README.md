We need to reverse the Linked list by changing links between nodes.   

There are two way for reverse a Linked List.   
1)Iterative Method.   
2)Recursive Method.   

### Iterative Method:  
1)Initialize three pointers prev as NULL, curr as head and next.  
2)Iterate trough the linked list. In loop, do following.

        Before changing Link of current Node,  
        store next node address  
        next = curr->next   

        Now change Link of current Node  
        This is where actual reversing happens
        curr->next = prev //current node points to previous node instead of next node.  

        Move prev and curr one step forward  
        prev = curr    
        curr = next    


