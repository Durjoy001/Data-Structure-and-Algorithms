//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//https://www.youtube.com/watch?v=OE7wUUpJw6I&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j&index=4
//https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/


class Solution {
public:
void firstOccur(vector<int>A,int n,int x,vector<int>&ans)
{
    int low = 0;
    int high = n-1;
    int mid,result = -1;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(A[mid] == x)
        {
            result = mid;
            high = mid - 1;
        }
        else if(x < A[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    ans.push_back(result);
}
void lastOccur(vector<int>A,int n,int x,vector<int>&ans)
{
    int low = 0;
    int high = n-1;
    int mid,result = -1;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(A[mid]==x)
        {
            result = mid;
            low = mid + 1;
        }
        else if(x < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid+1;
        }
    }
    ans.push_back(result);
}
vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;
        firstOccur(nums,n,target,ans);
        lastOccur(nums,n,target,ans);
        return ans;
}
};
