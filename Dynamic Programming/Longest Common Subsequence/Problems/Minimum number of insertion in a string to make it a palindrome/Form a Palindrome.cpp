//https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1

int countMin(string str){
    string Rstr = str;
    reverse(Rstr.begin(),Rstr.end());
    int n = str.size();
    int dp[n+1][n+1];
    //Here we will fing LCS
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(str[i-1] == Rstr[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return n-dp[n][n];
}
