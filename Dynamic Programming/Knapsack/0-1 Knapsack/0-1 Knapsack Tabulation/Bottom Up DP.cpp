//https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
//https://www.youtube.com/watch?v=ntCGbPMeqgg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=6

int knapSack(int W, int wt[], int val[], int n) 
{
   int dp[n+5][W+5];
   //Initialization of first row and first column with 0.
   for(int i=0;i<=n;i++){
       for(int j=0;j<=W;j++){
           if(i==0 || j==0){
               dp[i][j] = 0;
           }
       }
   }
   //Build table dp[][] in bottom up manner
   //Here i means number of elements n and j means knapsack capacity W
   for(int i=1;i<=n;i++){
       for(int j=1;j<=W;j++){
           if(wt[i-1]<=j){
               dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);//recursive function call replaced by dp table
           }
           else{
               dp[i][j] = dp[i-1][j];
           }
       }
   }
   return dp[n][W];
}
