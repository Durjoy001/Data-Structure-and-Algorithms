# https://www.geeksforgeeks.org/quick-sort/

Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.  
There are many different versions of quickSort that pick pivot in different ways.   

    Always pick first element as pivot.  
    Always pick last element as pivot (implemented below)  
    Pick a random element as pivot.  
    Pick median as pivot.    
The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array
and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.   
# Analysis of QuickSort  
  * Time taken by QuickSort in general can be written as following.    
      * T(n) = T(k) + T(n-k-1) + O(n)  
      * The first two terms are for two recursive calls, the last term is for the partition process.  k is the number of elements which are smaller than pivot.  
  
  * The time taken by QuickSort depends upon the input array and partition strategy.  
     * Following are three cases:  
     
     * Worst Case:     
                 The worst case occurs when the partition process always picks greatest or smallest element as pivot. If we consider above partition strategy where last element is always picked as pivot, the worst case would occur when the array is already sorted in increasing or decreasing order. Following is recurrence for worst case:    
       
        T(n) = T(0) + T(n-1) + \theta(n)    
        which is equivalent to      
        T(n) = T(n-1) + \theta(n)      
        The solution of above recurrence is O(n^2).    
        
     * Best Case:       
                The best case occurs when the partition process always picks the middle element as pivot. Following is recurrence for best case.   
                 T(n) = 2T(n/2) + \theta(n)    
                 The solution of above recurrence is \theta(nLogn).     
      
     * Average Case:  
      To do average case analysis, we need to consider all possible permutation of array and calculate time taken by every permutation which doesn’t look easy.
      We can get an idea of average case by considering the case when partition puts O(n/9) elements in one set and O(9n/10) elements in other set. Following is             recurrence for this case.      
       T(n) = T(n/9) + T(9n/10) + \theta(n)  
       Solution of above recurrence is also O(nLogn)  
       
       

     
