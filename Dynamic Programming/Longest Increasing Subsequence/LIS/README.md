#### [Longest Increasing Subsequence Dynamic Programming](https://www.youtube.com/watch?v=KoenMWrZmZU)   
[GeeksforGeeks](https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/)   
[Leetcode](https://leetcode.com/problems/longest-increasing-subsequence/)   

**Time Complexity of recursive approach is O(2^N) where N is the number of element. In Memoization and Bottom Up approach Time Cmplexity is O(N*N).**     

**If we closely observe the problem then we can convert this problem to longest Common Subsequence Problem. 
Firstly we will create another array of unique elements of original array and sort it. 
Now the longest increasing subsequence of our array must be present as a subsequence in our sorted array. 
That’s why our problem is now reduced to finding the longest common subsequence between the two arrays.**   


