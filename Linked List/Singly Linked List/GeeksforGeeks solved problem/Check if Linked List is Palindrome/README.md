### [GfG:boom:](https://www.geeksforgeeks.org/function-to-check-if-a-singly-linked-list-is-palindrome/) [GfG practice](https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1)  
#### METHOD 1 (Use a Stack)
  * A simple solution is to use a stack of list nodes. This mainly involves three steps.  
  * Traverse the given list from head to tail and push every visited node to stack.  
  * Traverse the list again. For every visited node, pop a node from stack and compare data of popped node with currently visited node.    
  * If all nodes matched, then return true, else false.    
  * Or we can use an array for same thing    
  * The time complexity of the above method is O(n).  
#### METHOD 2 (By reversing the list)[Efficient,should have use this method]    
**This method takes O(n) time and O(1) extra space.**  
 1) Get the middle of the linked list.   
 2) Reverse the second half of the linked list.  
 3) Check if the first half and second half are identical.  
 4) Construct the original linked list by reversing the second half again and attaching it back to the first half.      
 5) When number of nodes are even, the first and second half contain exactly half nodes. The challenging thing in this method is to handle the case when number of nodes are odd. We don’t want the middle node as part of any of the lists as we are going to compare them for equality. For odd case, we use a separate variable ‘midnode’. 
