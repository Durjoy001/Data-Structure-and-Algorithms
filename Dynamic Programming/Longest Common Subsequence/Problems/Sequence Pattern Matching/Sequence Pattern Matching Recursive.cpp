//https://www.geeksforgeeks.org/given-two-strings-find-first-string-subsequence-second/
class Solution{
    public:
    bool isSubSequenceUtil(string A,string B,int n,int m)
    {
        if(n == 0)
        {
            return true;
        }
        if(m == 0){
            return false;
        }
        if(A[n-1] == B[m-1]){
            return isSubSequenceUtil(A,B,n-1,m-1);
        }
        else{
            return isSubSequenceUtil(A,B,n,m-1);
        }
    }
    bool isSubSequence(string A, string B) 
    {
        int n = A.size();
        int m = B.size();
        return isSubSequenceUtil(A,B,n,m);
    }
};
