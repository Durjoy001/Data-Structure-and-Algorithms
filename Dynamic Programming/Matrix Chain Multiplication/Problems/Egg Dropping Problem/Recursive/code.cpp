//https://www.geeksforgeeks.org/egg-dropping-puzzle-dp-11/

class Solution{
    public:
    /* Function to get minimum number of trials needed in worst case with n eggs and k floors */
    int eggDrop(int n, int k) 
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
    // Consider all droppings from 1st floor to kth floor
      int ans = INT_MAX;
      for(int i=1;i<=k;i++){
          //condition 1 : egg is break 
          //condition 2 : egg didn't break
          //here we have to take max ans ,cz we want ans in worst case senario
          int tmp_ans = 1+max(eggDrop(n-1,i-1),eggDrop(n,k-i));
          //here we add 1 with ans cz we already did 1 attempt
          ans = min(ans,tmp_ans);
          //calculate the minimum number of droppings needed in the worst case.
      }
      return ans;
    }
};
