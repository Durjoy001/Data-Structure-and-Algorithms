//https://leetcode.com/problems/longest-increasing-subsequence/
class Solution {
public:
    int Lower_bound(vector<int>&nums,int num,int l, int h){
        int mid;
        while(l<h){
            mid = l +(h-l)/2;
            if(num <= nums[mid]){
                h = mid;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(ans.back() < nums[i]){
                ans.push_back(nums[i]);
            }
            else{
                int ind = Lower_bound(ans,nums[i],0,ans.size()-1);
                ans[ind] = nums[i];
            }
        }
        return ans.size();
    }
};
