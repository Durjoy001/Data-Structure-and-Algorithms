//https://practice.geeksforgeeks.org/contest/interview-series-microsoft/problems/#

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
    int removeStudents(int H[], int n) {
        vector<int>ans;
        ans.push_back(H[0]);
        for(int i=1;i<n;i++){
            if(ans.back() < H[i]){
                ans.push_back(H[i]);
            }
            else{
                int ind = Lower_bound(ans,H[i],0,ans.size()-1);
                ans[ind] = H[i];
            }
        }
        return n-ans.size();
    }
};
