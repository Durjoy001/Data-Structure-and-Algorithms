//https://www.geeksforgeeks.org/unbounded-knapsack-repetition-items-allowed/

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        //A simple 1D array, say dp[W+1] can be used such that dp[i] stores the maximum value which can achieved using all items and i capacity of knapsack.
        //Here number of items never changes. We always have all items available.
        int dp[W+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<N;i++){
            for(int j=1;j<=W;j++){
                if(wt[i]<=j){
                    dp[j] = max(dp[j],val[i]+dp[j-wt[i]]);
                }
            }
        }
        return dp[W];
    }
};
