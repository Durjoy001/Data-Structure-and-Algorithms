### [Floyd’s Cycle-Finding Algorithm](https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/):boom:[How does Floyd’s slow and fast pointers approach work?](https://www.geeksforgeeks.org/how-does-floyds-slow-and-fast-pointers-approach-work/):boom:[GfG practice](https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1)  
### Floyd’s Cycle-Finding Algorithm:  
   * Traverse linked list using two pointers.
   * Move one pointer(slow_ptr) by one and another pointer(fast_ptr) by two. 
   * If these pointers meet at the same node then there is a loop. If pointers do not meet then linked list doesn’t have a loop.
### Complexity Analysis:
   * Time complexity: O(n).  
     Only one traversal of the loop is needed.  
   * Auxiliary Space:O(1).  
    There is no space required.  
