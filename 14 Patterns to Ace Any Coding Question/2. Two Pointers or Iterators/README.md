### [:boom:GeeksforGeeks](https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/)  
#### Algorithm:  
1) Sort the array in non-decreasing order.  
2) Initialize two index variables to find the candidate elements in the sorted array.  

   a. Initialize first to the leftmost index: l = 0  
   b. Initialize second the rightmost index: r = ar_size-1  

3) Loop while l < r.  

    a. If (A[l] + A[r] == sum) then return 1  
    b. Else if( A[l] + A[r] < sum ) then l++  
    c. Else r–-;  

4) No candidates in whole array – return 0

#### Complexity Analysis:     
   * **Time Complexity:** 
   * Depends on what sorting algorithm we use.    
        * If Merge Sort or Heap Sort is used then (-)(nlogn) in worst case.
        * If Quick Sort is used then O(n^2) in worst case.
   * **Auxiliary Space:**     
   * This too depends on sorting algorithm. The auxiliary space is O(n) for merge sort and O(1) for Heap Sort.
