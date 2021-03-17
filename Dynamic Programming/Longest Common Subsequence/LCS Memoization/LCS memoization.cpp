//https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/

int dp[105][105];
int lcsUtil(int x, int y, string s1, string s2){
    //Base case
    if(x == 0 || y==0){
        return 0;
    }
    if(dp[x][y] != -1){
        return dp[x][y];
    }
    //if last charcter of this both string matched then minimized their lenght by 1, and add 1 with the answer  
    if(s1[x-1] == s2[y-1]){
        return dp[x][y] = 1+lcsUtil(x-1,y-1,s1,s2);
    }
    //else minimized first string length by 1 and call the function . Then in same way minimized second string length by 1 and call the function
    //then at last take the maximum answer
    else{
        return dp[x][y] = max(lcsUtil(x-1,y,s1,s2),lcsUtil(x,y-1,s1,s2));
    }
}
int lcs(int x, int y, string s1, string s2){
    memset(dp,-1,sizeof(dp));
    return lcsUtil(x,y,s1,s2);
}
