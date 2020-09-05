## Introduction to stack    
### [:boom:mycodeschool](https://www.youtube.com/watch?v=F1F2imiOJfk&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=15&t=0s)[:boom:GeeksforGeeks](https://www.geeksforgeeks.org/stack-data-structure-introduction-program/)  
**Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).**   
An item in the stack must be inserted or removed, from the same end that we call the top of stack. In fact this is not just a property, this is a constraint or restriction.   
A stack is a list or collection with the restriction that insertion and deletion can be performed only from one end, that we call the top of stack.

Mainly the following three basic operations are performed in the stack:  
* **Push:** Adds an item in the stack. If the stack is full, then it is said to be an **Overflow condition.**  
* **Pop:** Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an **Underflow condition.**  
* **Peek or Top:** Returns top element of stack.  
* **isEmpty:** Returns true if stack is empty, else false.    

**push(), pop(), isEmpty() and peek() all take constant time O(1) time. We do not run any loop in any of these operations.**  

**Application:**  
* Function Calls/Recursion(chain of function calls).       
* Undo in an editor.      
* Balanced Parentheses.    
## Implementation: [mycodeschool](https://www.youtube.com/watch?v=sFVxsglODoo&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=15)[:boom:GfG](https://www.geeksforgeeks.org/stack-data-structure-introduction-program/)  
There are two ways to implement a stack:  
  * Using array.    
  * Using linked list.    
  
 ### [Here is implementation of stack using array.](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Stack%20Queue%20and%20Heap/Stack/Stack(using%20array).cpp)  
**Pros:** Easy to implement. Memory is saved as pointers are not involved.  
**Cons:** It is not dynamic. It doesn’t grow and shrink depending on needs at runtime.(If we need 10 element of stack and we declare the array with 100 size than we block a 90 element of memory.same, If we initialize the stack size with 100 and after that if we need to store 110 element than we cann't do this cz it's not dynamic)     
  
### [Here is implementation of stack using linked list](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Stack%20Queue%20and%20Heap/Stack/Stack(using%20linked%20list).cpp)  [:boom:mycodeschool](https://www.youtube.com/watch?v=MuwxQ2IB8lQ&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=16)  
**Pros:** The linked list implementation of stack can grow and shrink according to the needs at runtime.  
**Cons:** Requires extra memory due to involvement of pointers.    
* We can add or delete element in end of the linked list or beginning of the linked list, but if we add or delete element from end than we have to tarverse the list and in this case time complexity will be O(n), which is not efficient so we have to insert and delete element from beginning and in this case time complexity will be O(1), In that case **head of the lined list is top of the stack.**   
*  one of the advantages is that unlike array based implementation we do not need to worry about overflow, unless we exhaust the memory of the machine itself. Some amount of extra memory is used in each node to store reference or address but the fact that the use of memory when needed and release when not needed is something that makes push and pop operations more craze full.  



  
