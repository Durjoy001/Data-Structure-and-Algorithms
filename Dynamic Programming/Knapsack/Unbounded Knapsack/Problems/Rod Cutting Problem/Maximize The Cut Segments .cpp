//https://practice.geeksforgeeks.org/problems/cutted-segments1642/1#
int maximizeTheCuts(int n, int x, int y, int z)
{
    //0-1/Fractional/Unbounded knapsack could be filled without reaching the capacity, but in this problem we need to reach the capacity (total length).
    //for this reason we initialize 0th row by minus infinity(-inf).
    int dp[3+1][n+1];
    //initialize first colum with 0. when N=0 ,cut number = 0
    for(int i=0;i<=3;i++){
        dp[i][0] = 0;
    }
    //initialize first row with -INT_MIN , because when array size n=0 we need infinite number of cut or it is not possible to cut the rod
    for(int i=1;i<=n;i++){
        dp[0][i] = INT_MIN;
    }
    int len[3];
    len[0] = x;
    len[1] = y;
    len[2] = z;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(len[i-1]<=j){
                dp[i][j] = max(dp[i-1][j],1+dp[i][j-len[i-1]]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    //if it is not possible to cut the rod in just a single way then we return 0
    if(dp[3][n]<0){
        return 0;
    }
    return dp[3][n];
}
