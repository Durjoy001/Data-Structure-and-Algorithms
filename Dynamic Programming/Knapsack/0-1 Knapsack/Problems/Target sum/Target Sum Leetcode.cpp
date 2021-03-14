//https://leetcode.com/problems/target-sum/

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        long long int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        long long int needSum = (sum+S)/2;
        //If sum+S is odd then also it is not possible to formed a subset with sum =  needSum
        if(S>needSum || (sum+S) % 2 == 1){
            return 0;
        }
        int dp[n+1][needSum+1];
        //initialize first column with 1
        /*This problem also considers 0s as the elements of the array. In order to get the right answer we need to initialise the first column of dp matrix keeping in mind that 0 as a sum can be obtained by either taking the empty subset or else taking one or more zeros present in the array upto the current index.*/
        int zeroCount = 0;
        dp[0][0] = 1;
        for(int i=1;i<=n;i++){
            if(nums[i-1]==0){
                zeroCount++;
            }
            dp[i][0] = pow(2,zeroCount);
        }
        //initialize first row with 0
        for(int i=1;i<=needSum;i++){
            dp[0][i] = 0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=needSum;j++){
              if(nums[i-1]>j){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }
            }
        }
        return dp[n][needSum];
    }
};
