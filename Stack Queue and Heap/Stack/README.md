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
