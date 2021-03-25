

int dp[101][101];
class Solution{
public:
    int MCMutil(int arr[],int i,int j)
    {
        if(i >= j){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        dp[i][j] = INT_MAX;
        int tmp_ans;
        for(int k=i;k<j;k++){
            tmp_ans = MCMutil(arr,i,k)+MCMutil(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
            dp[i][j] = min(dp[i][j],tmp_ans);
        }
        return dp[i][j];
    }
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        return MCMutil(arr,1,N-1);
    }
};
