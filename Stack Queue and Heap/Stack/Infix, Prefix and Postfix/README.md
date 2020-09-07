### [:boom:mycodeschool](https://www.youtube.com/watch?v=jos1Flt21is&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=20&t=91s)  
**Expression: [GeeksforGeeks](https://www.geeksforgeeks.org/what-is-an-expression-and-what-are-the-types-of-expressions/?ref=rp)** An expression is a combination of operators, constants and variables. An expression may consist of one or more operands, and zero or more operators to produce a value.   
expresion: a+b ,, a and b is operand and + is operator.    
### [:boom: GeeksforGeeks: Arithmetic Expression Evalution](https://www.geeksforgeeks.org/arithmetic-expression-evalution/)  
**Expressions are usually represented in what is known as Infix notation, in which each operator is written between two operands i.e  (A + B). Simply of the form (operand1 operator operand2).**        
  
**Polish notation (prefix notation) –**  
**It refers to the notation in which the operator is placed before its two operands . Here no parentheses are required, i.e.  +AB,  Simply of the form (operator operand1 operand2).**      
  
**Reverse Polish notation(postfix notation) –**  
**It refers to the analogous notation in which the operator is placed after its two operands. Again, no parentheses is required in Reverse Polish notation, i.e. AB+ ,  (operand1 operand2 operator).**       

Stack organized computers are better suited for post-fix notation then the traditional infix ntation.  postfix expression is easiest to parse and least costly in terms of time and memory . Prefix expression can also be evaluated in similar time and memory
but the algorithm to parse and evaluate postfix expression is
really straightforward and intuitive and that's why its preferred for computation
using machines. 
Thus the infix notation must be converted to the post-fix notation. The conversion from infix notation to post-fix notation must take into consideration the operational hierarchy.     
  
There are 3 levels of operator-precedence for 5 binary operators as given below:    
**All of this rules are required for evaluation of infix notation, not required for other two.**  
* **Parentheses:**  () {} []    
* **Highest:**  Exponentiation (^) ( **right to left**, In case of multiple exponentiation operator,, 2^3^2 = 2^9)       
* **Next highest:**  Multiplication (*) and division (/)   ( **left to right**,,In case of multiple operator,their precendence is same)      
* **Lowest:**  Addition (+) and Subtraction (-)   ( **left to right**,In case of multiple operator ,their precendence is same,, 4-2+1 = 3)    
  
This right to left and left to right rule that we have wriiten here for operators with equal precedence is better termed as operator associativity.
If in case of multiple operators with equal precedence we go from left to right then we say that operators are left associative and if we go from right to left
we say that operators are right associative.  
