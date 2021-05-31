//https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int LIS(vector<int>&nums,int prevIndex,int curIndex){
        if(curIndex == nums.size()){
            return 0;
        }
        int taken = 0,not_taken = 0;
        if(prevIndex == -1 || nums[curIndex] > nums[prevIndex]){
            taken = 1 + LIS(nums,curIndex,curIndex+1);
        }
        not_taken = LIS(nums,prevIndex,curIndex+1);
        return max(taken,not_taken);
    }
    int lengthOfLIS(vector<int>& nums) {
        return LIS(nums,-1,0);
    }
};
