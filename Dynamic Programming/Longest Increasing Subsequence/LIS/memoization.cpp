//https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int dp[2505][2505];
    int LIS(vector<int>&nums,int prevIndex,int curIndex){
        if(curIndex == nums.size()){
            return 0;
        }
        if(prevIndex != -1 && dp[prevIndex][curIndex] != -1){
            return dp[prevIndex][curIndex];
        }
        int taken = 0,not_taken = 0;
        if(prevIndex == -1 || nums[curIndex] > nums[prevIndex]){
            taken = 1 + LIS(nums,curIndex,curIndex+1);
        }
        not_taken = LIS(nums,prevIndex,curIndex+1);
        if(prevIndex != -1){
            dp[prevIndex][curIndex] = max(taken,not_taken);
        }
        return max(taken,not_taken);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return LIS(nums,-1,0);
    }
};
