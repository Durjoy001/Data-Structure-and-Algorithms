
class Solution{
    public:
    /* Function to get minimum number of trials needed in worst case with n eggs and k floors */
    int dp[205][205];
    int eggDropUtil(int n, int k) 
    {
      // If there are no floors,then no trials needed.OR if there is one floor,one trial needed.
      if(k==1 || k==0){
          return k;
      }
      //If only one egg is available and we wish to be sure of obtaining the right result, the experiment can be carried out in only one way. 
      //Drop the egg from the first-floor window; if it survives, drop it from the second-floor window. Continue upward until it breaks. 
      //In the worst case, this method may require k droppings.
      if(n==1){
          return k;
      }
      if(dp[n][k] != -1){
          return dp[n][k];
      }
    // Consider all droppings from 1st floor to kth floor
      int ans = INT_MAX;
      for(int i=1;i<=k;i++){
          //condition 1 : egg is break 
          //condition 2 : egg didn't break
          //here we have to take max ans ,cz we want ans in worst case senario
          int tmp_ans = 1+max(eggDropUtil(n-1,i-1),eggDropUtil(n,k-i));
          //here we add 1 with ans cz we already did 1 attempt
          ans = min(ans,tmp_ans);
          //calculate the minimum number of droppings needed in the worst case.
      }
      return dp[n][k] = ans;
    }
    int eggDrop(int n,int k)
    {
        memset(dp,-1,sizeof(dp));
        return eggDropUtil(n,k);
    }
};
