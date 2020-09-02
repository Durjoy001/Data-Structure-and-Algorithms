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
