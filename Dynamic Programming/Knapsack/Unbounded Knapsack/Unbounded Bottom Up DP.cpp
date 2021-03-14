//https://www.geeksforgeeks.org/unbounded-knapsack-repetition-items-allowed/

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        int dp[N+1][W+1];
        //initialize first row and column with 0
        for(int i=0;i<=N;i++){
            for(int j=0;j<=W;j++){
                if(i==0 || j==0){
                    dp[i][j] = 0;
                }
            }
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=W;j++){
                //if we not include a iteam than it is processed [i-1]. But if we include this item 
                //than it is not processed yet [i],because further we can include this same item also.
                if(wt[i-1]>j){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                  //when include a item than it will be dp[i] not dp[i-1]
                    dp[i][j] = max(dp[i-1][j],val[i-1]+dp[i][j-wt[i-1]]);
                }
            }
        }
        return dp[N][W];
    }
};
