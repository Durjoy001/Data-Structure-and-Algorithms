//https://www.geeksforgeeks.org/longest-common-substring-dp-29/

class solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int dp[n+1][m+1];
        int ans = 0;// To store length of the longest common substring
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    dp[i][j] = 0;//initialization;
                }
                else if(S1[i-1] ==  S2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                    ans = max(ans,dp[i][j]);
                    // we have to return the max value in the matrix and not dp[m][n], Cz substring can exist anywhere in between
                }
                else{//when char doesn't match make it 0,cz substring is continuous
                    dp[i][j] = 0;
                }
            }
        }
        return ans;
    }
