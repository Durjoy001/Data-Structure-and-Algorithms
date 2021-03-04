//https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
//https://www.youtube.com/watch?v=fJbIuhs24zQ&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=4

//dp table or matrix size will be the max size of the variable of function perameter which change in function call.Here W and N change in function call.
int dp[1005][1005];
int knapSackUtil(int w, int wt[], int val[], int n)
{
    if(w==0 || n==0){
        return 0;
    }
    if(dp[n][w] != -1){
        return dp[n][w];
    }
    if(wt[n-1]>w){
        // Store the value of function call stack in table before return
        return dp[n][w] = knapSackUtil(w,wt,val,n-1);
    }
    else{
        // Store value in a table before return
        return dp[n][w] = max(val[n-1]+knapSackUtil(w-wt[n-1],wt,val,n-1),
                          knapSackUtil(w,wt,val,n-1));
    }
}
int knapSack(int W, int wt[], int val[], int n) 
{ 
    //filled the table with -1
    memset(dp,-1,sizeof(dp));
    return knapSackUtil(W,wt,val,n);
}
