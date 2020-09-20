## [:boom:GeeksforGeeks](https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/)  
Given an array and an integer K, find the maximum for each and every contiguous subarray of size k.  
  
**Algorithm:**    
1. Create a deque to store k elements.  
2. Run a loop and insert first k elements in the deque. While inserting the element if the element at the back of the queue is smaller than the current element remove all those elements and then insert the element.  
3. Now, run a loop from k to end of the array.   
4. Print the front element of the array.  
5. Remove the element from the front of the queue if they are out of the current window.  
6. Insert the next element in the deque. While inserting the element if the element at the back of the queue is smaller than the current element remove all those elements and then insert the element  
7. Print the maximum element of the last window.  


