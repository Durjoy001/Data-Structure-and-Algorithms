### [Knapsack Bottom Up DP](https://www.youtube.com/watch?v=ntCGbPMeqgg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=5)  
[GeeksforGeeks](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/)   

**Tabulation or bottom up approach is better than Memoization approach because in memoization, recursive function call may fill up the stack memory and for which it will be
caused stack overflow error. Otherwise both are same in space and time complexity.**  

**The base condition code of Knapsack Recursive approach will change to initialization of first row and first coulmn with 0 in Knapsack Tabulation approach.**   

**We do this because,in recursion when we find n==0 or W==0 we return 0. That's why in dp table first row(n=0) and first colum(W=0) we initialize this with 0.**    

In the Dynamic programming we will work considering the same cases as mentioned in the recursive approach.  

**In this iterative approach recursive function call will replace by dp table.**       

**Complexity Analysis:**   
 * **Time Complexity: O(N*W).**        
    * where ‘N’ is the number of weight element and ‘W’ is capacity.   
 * **Auxiliary Space: O(N*W).**   
    * The use of 2-D array of size N*W    
