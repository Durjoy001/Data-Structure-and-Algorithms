### [mycodeschool](https://www.youtube.com/watch?v=QZOLb0xHB_Q&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=19&t=0s)[ :boom: GeeksforGeeks](https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/)  
  
Algorithm:    
   * Declare a character stack S.  
   * Now traverse the expression string exp.  
        * If the current character is a starting bracket ‘(‘ or ‘{‘ or ‘[‘ then push it to stack.  
        * If the current character is a closing bracket ‘)’ or ‘}’ or ‘]’ then pop from stack and if the popped character is the matching starting bracket then fine else parenthesis are not balanced.    
        * After complete traversal, if there is some starting bracket left in stack then “not balanced”  

**Time Complexity: O(n)**  
**Auxiliary Space: O(n) for stack.**    

**Checking for balanced parenthesis is one of the task performed by compiler.**  
