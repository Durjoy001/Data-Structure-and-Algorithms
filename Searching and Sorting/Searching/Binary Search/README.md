### :boom:[mycodeschool](https://www.youtube.com/playlist?list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j) :boom:[GeeksforGeeks](https://www.geeksforgeeks.org/binary-search/) :boom:[HackerEarth](https://www.hackerearth.com/practice/algorithms/searching/binary-search/tutorial/)   
**Binary Search:** Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.   

**Data being sorted is a precondition for binary search.**

The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n).  

* We basically ignore half of the elements just after one comparison.

    1. Compare x with the middle element.  
    2. If x matches with middle element, we return the mid index.  
    3. Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.  
    4. Else (x is smaller) recur for the left half.    
    
#### :boom: Here is the code of
* [Binary Search - Iterative Implementation](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Searching%20and%20Sorting/Searching/Binary%20Search/Binary%20Search%20-%20Iterative%20Implementation.cpp)  
* [Binary Search - Recursive implementation](https://github.com/Durjoy001/Data-Structure-and-Algorithms/blob/master/Searching%20and%20Sorting/Searching/Binary%20Search/Binary%20Search%20-%20Recursive%20implementation.cpp)   

**Time Complexity :**   
**The time complexity of Binary Search is O(log n).**   

**Space Complexity :**   
**O(1) in case of iterative implementation. In case of recursive implementation, O(Logn) recursion call stack space.**  

**Binary search is an example of decrease and conquer algorithm, for better understanding see this [GeeksforGeeks Decrease and Conquer.](https://www.geeksforgeeks.org/decrease-and-conquer/)**    
