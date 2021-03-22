
//https://www.geeksforgeeks.org/given-two-strings-find-first-string-subsequence-second/
class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        int n = A.size();
        int m = B.size();
        //Here we will find LCS of Two String
        int dp[n+5][m+5];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    dp[i][j] = 0;
                }
                else if(A[i-1] == B[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int lcs = dp[n][m];
        if(n==lcs){
            return true;
        }
        else return false;
    }
};
