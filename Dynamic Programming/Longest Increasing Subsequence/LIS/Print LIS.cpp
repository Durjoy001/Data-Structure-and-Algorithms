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
        int index = 0;
        int mx = -1;
        //find index where LIS is longest
        for(int i=0;i<n;i++){
            if(mx<LIS[i]){
                mx = LIS[i];
                index = i;
            }
        }
        vector<int>printLis;
        printLis.push_back(nums[index]);
        for(int i=index-1;i>=0;i--){
            if(LIS[i]+1 == LIS[index] && nums[i]<nums[index]){
                index = i;
                printLis.push_back(nums[i]);
            }
        }
        reverse(printLis.begin(),printLis.end());
        for(int i=0;i<printLis.size();i++){
            cout<<printLis[i]<<" ";
        }
         return ans;
    }
};
