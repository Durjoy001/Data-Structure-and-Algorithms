//https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>LIS(n,1);//fill all the index by 1 cz every element itself a 1 lenght LCS
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j] < nums[i]){
                    LIS[i] = max(LIS[i],LIS[j]+1);
                }
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,LIS[i]);
        }
        return ans;
    }
};
