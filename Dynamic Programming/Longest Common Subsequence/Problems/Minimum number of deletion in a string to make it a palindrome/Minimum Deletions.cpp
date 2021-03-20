//https://www.geeksforgeeks.org/minimum-number-deletions-make-string-palindrome/

int minimumNumberOfDeletions(string S) { 
     int n = S.size();
     string revS = string(S.rbegin(),S.rend());
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
     return n-dp[n][n];
} 
