### [:boom:mycodeschool](https://www.youtube.com/watch?v=_OmRGjbyzno&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO)[:boom:GeeksforGeeks](https://www.geeksforgeeks.org/recursion/)    
**The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function.**  

**:boom:Factorial of an integer :**[ mycodeschool](https://www.youtube.com/watch?v=_OmRGjbyzno&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO)[ GeeksforGeeks](https://www.geeksforgeeks.org/recursion/)    
 f(n) = n * f(n-1) if f>1  
 f(0) = 1; (0! = 1)  if n==0    
 f(1) = 1; (1! = 1)  if n==1   
 * [Here is the Code](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Recursion%20and%20Backtracking/Recursion/Find%20the%20Factorial%20of%20n%20using%20recursion.cpp)  
 
 #### :boom: Why recursion is not always good?  [mycodeschool]( https://www.youtube.com/watch?v=GM9sA5PtznY&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=2)    
 **Here is the code of nth Fibonacci number**[ Iterative](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Recursion%20and%20Backtracking/Recursion/Find%20the%20nth%20Fibonacci%20(Iterative).cpp) [ Recursive](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Recursion%20and%20Backtracking/Recursion/Find%20the%20nth%20Fibonacci%20(recursive).cpp)     
 n if n == 0, n == 1;        
 fib(n) = fib(n-1) + fib(n-2) otherwise;  
 
 In the iterative program, while we are calculating each state or each 
 value of F(i) we calculate it exactly once, But in the recursive implementation, we are calculating each state  multiple times, in the bellow recursion tree
 we can see that fib(2) is calculating 3 times (for this reason it requires more time and space).    
 
  ![Recursion Tree](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Recursion%20and%20Backtracking/Recursion/fib1.png)       
  
  **The recursive program has greater space requirements than iterative program as all functions will remain in the stack until the base case is reached. It also has greater time requirements because of function calls and returns overhead or redundancy .**    
  
  #### :boom: Time and space complexity analysis of recursive programs - using factorial [mycodeschool]( https://www.youtube.com/watch?v=GM9sA5PtznY&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=2)    
  Time Complexity : **O(n)**    
  Space Complexity : **O(n) n function call stored in stack memory until base case execute.**   
  
  #### :boom: Time Complexity analysis of recursion - Fibonacci Sequence : [mycodeschool]( https://www.youtube.com/watch?v=GM9sA5PtznY&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=2)   
  **Time Complexity : O(2^n)**     
  
  #### :boom: Fibonacci Sequence - Recursion with memoization : [mycodeschool](https://www.youtube.com/watch?v=UxICsjrdlJA&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=5)   
  **[Here is the code of recursion with memoization](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Recursion%20and%20Backtracking/Recursion/Fibonacci%20Sequence%20-%20Recursion%20with%20memoization.cpp)**      
**Recursion with memoization is an important technique to improve the performance of a recursive program.**    

In fibonacci sequence any F(i) like F(3), F(4) and so on,once we calculate it for the first time we will save it in the memory so if 
F(i) is in memory do not try to calculate it, simply return it.   
we are avoiding all the re-calculation of the same state again and again .   

Recursion with memoization in this particular example is not as efficient as an iterative implementation in terms of memory but it is as good as an iterative implementation in terms of time .     

#### :boom: Fibonacci Sequence - space complexity analysis [mycodeschool](https://www.youtube.com/watch?v=dxyYP3BSdcQ&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=6)   

**Space Complexity : O(n)**  

Even though explicitly we have not declared any variable or used 
any memory in the function Fib(n), behind the scene all the states of these function are
being saved in the memory or all these recursive function calls are stacked in the memory and space
is getting consumed. We often say that an implicit stack is growing in the memory and we call this function call stack.    

The space consumed by this particular recursion is maximum growth of this function call stack, and it's happen when we were at the bottom-most node.   

When F(1) is executing, then all these states of F(n),F(n-1)......F(4), F(3) and F(2) were saved 
in the memory and we were consuming kind of n units of space in the memory and the call 
stack did not grow any larger than this (cz after executing F(1)the base case, it's poped out from stack,than F(2) execute and after finishing it also poped out from stack,maybe another function call from recursion tree can take place this F(2)'s palce when F(2) pop out but stack doesn't grow more than n unit).   

**The maximum space consumed by a recursive program is proportional to the maximum depth of the recursion tree.**  

And the maximum depth of recursion tree is defined as the length of the longest path in the tree.when we analyze complexity of programs, we often take the upper bound for the time or the space taken.         

#### :boom: Exponentiation - Calculate Pow(x,n) using recursion : [mycodeschool](https://www.youtube.com/watch?v=wAyrtLAeWvI&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=7)     
* [Here is code of this O(n) time complexity](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Recursion%20and%20Backtracking/Recursion/Exponentiation%20-%20Calculate%20Pow(x%2Cn)%20using%20recursion(%20O(n)%20time).cpp)    
* [Here is code of this O(log n) time complexity](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Recursion%20and%20Backtracking/Recursion/Exponentiation%20-%20Calculate%20Pow(x%2Cn)%20using%20recursion(%20O(log%20n)%20time).cpp)      

#### :boom: Modular exponentiation - using Recursion : [mycodeschool](https://www.youtube.com/watch?v=nO7_qu2kd1Q&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=8)   
Have to calculate x^n mod m.   
(a * b) % m =  { (a % m) * (b % m) } % m  

((x^n) % m) = (x * x^n-1) % m    

if n is even then { (x^n/2 % m) * (x^n/2 % m) } % m      
if n is odd then  { (x % m) * (x^n-1 % m) } % m      
if n is 0 then return 1   
**[Here is the code](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Recursion%20and%20Backtracking/Recursion/Modular%20exponentiation%20-%20using%20Recursion.cpp)**         
**Time Complexity : O(log n)**    







  
  
  
  
  
 
 
 
 
 


