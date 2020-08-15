//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        vector<int>ans;
        int diff;
        for(int i=0;i<nums.size();i++)
        {
            diff = target-nums[i];
            if(m.find(diff) != m.end())
            {
                ans.push_back(i);
                ans.push_back(m[diff]);
                break;
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return ans;
    }
};
