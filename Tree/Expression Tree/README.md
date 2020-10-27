### :boom: [GeeksforGeeks](https://www.geeksforgeeks.org/expression-tree/)   
**The expression tree is a binary tree in which each internal node corresponds to the operator and each leaf node corresponds to the operand(data).**  
**Inorder traversal of expression tree produces infix version of given postfix expression (same with preorder traversal it gives prefix expression)**   
  
**Construction of Expression Tree:**    
For constructing an expression tree we use a stack. We loop through input expression and do the following for every character.    

1. If a character is an operand push that into the stack.  
2.  If a character is an operator pop two values from the stack make them its child and push the current node again.  

In the end, the only element of the stack will be the root of an expression tree.  
