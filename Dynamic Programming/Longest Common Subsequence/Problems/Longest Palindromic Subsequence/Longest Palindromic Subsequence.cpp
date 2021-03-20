//https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1

int longestPalinSubseq (string S)
{
    string revS = string(S.rbegin(),S.rend());
    int n = S.size();
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(S[i-1] == revS[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][n];
}
