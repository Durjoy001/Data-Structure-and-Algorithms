//https://www.geeksforgeeks.org/given-two-strings-find-first-string-subsequence-second/
class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        int n = A.size();
        int m = B.size();
        int j = 0;
        for(int i=0;i<m && j<n;i++)
        {
            if(A[j] == B[i]){
                j++;
            }
        }
        return (j == n);
    }
};
