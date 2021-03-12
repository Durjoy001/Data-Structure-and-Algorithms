//https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#
//https://www.geeksforgeeks.org/partition-problem-dp-18/

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++){
            sum = sum + arr[i];
        }
        if(sum % 2 != 0){
            return 0;
        }
        sum = sum/2;
        bool dp[N+1][sum+1];
        //initialize first coulmn with true
        for(int i=0;i<=N;i++){
            dp[i][0] = true;
        }
        //initialize first row except do[0][0] with false;
        for(int i=1;i<=sum;i++){
            dp[0][i] = false;
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]>j){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
            }
        }
        if(dp[N][sum] == true){
            return 1;
        }
        return 0;
    }
};
