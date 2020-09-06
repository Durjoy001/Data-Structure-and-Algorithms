### Reverse a string using stack:  
### [mycodeschool](https://www.youtube.com/watch?v=hNP72JdOIgY&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=18&t=0s)[:boom:GeeksforGeeks](https://www.geeksforgeeks.org/stack-set-3-reverse-string-using-stack/)  
**[Here is the code](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Stack%20Queue%20and%20Heap/Stack/Reverse%20a%20string%20and%20linked%20list%20using%20stack/Reverse%20a%20string%20using%20stack.cpp)**  

Approach:  
1) Create an empty stack.    
2) One by one push all characters of string to stack.    
3) One by one pop all characters from stack and put them back to string.   

**Time Complexity: O(n)** where n is number of characters in stack.  
**Auxiliary Space: O(n)** for stack. 

A string can also be reversed without using any auxiliary space.  
Approach:  
1) use two variable just mark start and end index of the string initially.(eg i and j)    
2) While i is less than j we can swape the character at this position.  
3) Once we have swaped, we can increment i and decrement j, until i is less than j.     

**Time Complexity: O(n)** where n is number of characters in string.  
**Auxiliary Space: O(1)**.
