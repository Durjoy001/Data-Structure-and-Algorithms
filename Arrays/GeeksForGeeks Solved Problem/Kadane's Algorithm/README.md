# https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
  * Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.   
    
# Kadane’s Algorithm:  
Initialize:  
    max_so_far = 0  
    max_ending_here = 0  
  
Loop for each element of the array  
  (a) max_ending_here = max_ending_here + a[i]  
  (b) if(max_so_far < max_ending_here)  
             max_so_far = max_ending_here  
  (c) if(max_ending_here < 0)  
             max_ending_here = 0   
return max_so_far    

# Explanation:  
Simple idea of the Kadane’s algorithm is to look for all positive contiguous segments of the array (max_ending_here is used for this).  
And keep track of maximum sum contiguous segment among all positive segments (max_so_far is used for this).   
Each time we get a positive sum compare it with max_so_far and update max_so_far if it is greater than max_so_far.    

# Time Complexity: O(n)

But this algo not give correct ans when all elements of an array is negative,it's returun 0,when this occurs.    
https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0   or https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Arrays/GeeksForGeeks%20Solved%20Problem/Kadane's%20Algorithm.cpp  is the solution ,this code also solve this corner case as well. 
