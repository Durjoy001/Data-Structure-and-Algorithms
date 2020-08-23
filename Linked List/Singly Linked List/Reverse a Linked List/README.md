We need to reverse the Linked list by changing links between nodes.   

There are two way for reverse a Linked List.   
1)Iterative Method.   
2)Recursive Method.   

### Iterative Method: [mycodeschool](https://www.youtube.com/watch?v=sYcOK51hl-A&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=9):boom:[GfG](https://www.geeksforgeeks.org/reverse-a-linked-list/):boom:[GfG Practice Problem](https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1)   
1)Initialize three pointers prev as NULL, curr as head and next.  
2)Iterate trough the linked list. In loop, do following.

        Before changing Link of current Node,  
        store next node address  
        next = curr->next;   

        Now change Link of current Node  
        This is where actual reversing happens
        curr->next = prev; //current node points to previous node instead of next node.  

        Move prev and curr one step forward  
        prev = curr;      
        curr = next;    
        
        After finished iterating  change the head node address    
        head = prev;// after reverse the linked list prev address contains the first node address     


