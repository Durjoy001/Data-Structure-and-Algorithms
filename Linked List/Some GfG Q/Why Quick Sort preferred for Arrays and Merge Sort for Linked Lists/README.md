### [Why Quick Sort preferred for Arrays and Merge Sort for Linked Lists?](https://www.geeksforgeeks.org/why-quick-sort-preferred-for-arrays-and-merge-sort-for-linked-lists/)  
### [Why quicksort is better than mergesort ?](https://www.geeksforgeeks.org/quicksort-better-mergesort/)    
      
          
**The std::sort() function which is present in C++ STL is a hybrid sorting algorithm provides average and worst case time complexity of O(nlogn). The sorting algorithm which it uses is called Introsort.**     
   
**Introsort is combination of both quicksort and heapsort, It begins with quicksort and switch to heapsort if recursion depth exceeds a level based on the number of elements being sorted.**
