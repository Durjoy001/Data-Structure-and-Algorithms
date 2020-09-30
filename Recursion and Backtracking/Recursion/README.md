### [:boom:mycodeschool](https://www.youtube.com/watch?v=_OmRGjbyzno&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO)[:boom:GeeksforGeeks](https://www.geeksforgeeks.org/recursion/)    
**The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function.**  

**:boom:Factorial of an integer :**[ mycodeschool](https://www.youtube.com/watch?v=_OmRGjbyzno&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO)[ GeeksforGeeks](https://www.geeksforgeeks.org/recursion/)    
 f(n) = n * f(n-1) if f>1  
 f(0) = 1; (0! = 1)  if n==0    
 f(1) = 1; (1! = 1)  if n==1   
 * [Here is the Code](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Recursion%20and%20Backtracking/Recursion/Find%20the%20Factorial%20of%20n%20using%20recursion.cpp)  
 
 #### :boom: Why recursion is not always good?  [mycodeschool]( https://www.youtube.com/watch?v=GM9sA5PtznY&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=2)    
 **Here is the code of nth Fibonacci number**[ Iterative]() [ Recursive]()   
 n if n == 0, n == 1;        
 fib(n) = fib(n-1) + fib(n-2) otherwise;  
 
 In the iterative program, while we are calculating each state or each 
 value of F(i) we calculate it exactly once, But in the recursive implementation, we are calculating each state  multiple times, in the bellow recursion tree
 we can see that fib(2) is calculating 3 times.    
 
  ![Recursion Tree](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Recursion%20and%20Backtracking/Recursion/fib1.png)       
  
  **The recursive program has greater space requirements than iterative program as all functions will remain in the stack until the base case is reached. It also has greater time requirements because of function calls and returns overhead.**  
  
  
  
 
 
 
 
 


