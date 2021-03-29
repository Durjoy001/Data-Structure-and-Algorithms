class Solution {
public:
    int dp[105][10005];
    int superEggDrop(int k, int n) {
        memset(dp,-1,sizeof(dp));
        return eggDropUtil(k,n);
    }
    int eggDropUtil(int n, int k) 
    {
      //here n = egg and k = floor
      if(k==1 || k==0){
          return k;
      }
      if(n==1){
          return k;
      }
      if(dp[n][k] != -1){
          return dp[n][k];
      }
      int ans = INT_MAX;
      /*for(int i=1;i<=k;i++){
          int tmp_ans = 1+max(eggDropUtil(n-1,i-1),eggDropUtil(n,k-i));
          ans = min(ans,tmp_ans);
      }*/
      int l = 1,h=k;
      while(l<=h){
          int mid = (l+h)/2;
          int left = eggDropUtil(n-1,mid-1);//egg broken check for down floors of mid
          int right = eggDropUtil(n,k-mid);// not broken check for up floors of mid
          int tmp = 1 + max(left,right);
          if(left < right){//since right is more than left and we need more in wrost case
              l = mid+1;  // so l=mid+1 to gain more temp for worst case: upward
          }
          else{//left > right so we will go downward 
              h = mid-1;
          }
          ans = min(ans,tmp);
      }
      return dp[n][k] = ans;
    }
};
