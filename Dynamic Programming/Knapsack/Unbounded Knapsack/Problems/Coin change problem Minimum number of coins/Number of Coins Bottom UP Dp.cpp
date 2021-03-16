//https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/

class solution{
	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    //here we must have to use long long else we get wrong ans 
	    long long int dp[M+1][V+1];
	    //initialize first column with 0,To make sum of 0, we need 0 coins.
	    for(int i=0;i<=M;i++){
	        dp[i][0] = 0;
	    }
	    //initialize first row with INT_MAX
	    for(int i=1;i<=V;i++){
	        dp[0][i] = INT_MAX;
	    }
	    for(int i=1;i<=M;i++){
	        for(int j=1;j<=V;j++){
	            if(coins[i-1]<=j){
	                //here we add 1 when we include a coin
	                dp[i][j] = min(dp[i-1][j], 1+dp[i][j-coins[i-1]]);
	                //if dp[i][j-coins[i-1]] is already have INT_MAX value and we add 1 with this value then it became a negative value cz int value's max capacity is INT_MAX. that's why we use long long matrix  
	            }
	            else{
	                dp[i][j] = dp[i-1][j];
	            }
	        }
	    }
	    if(dp[M][V] == INT_MAX){
	        return -1;
	    }
	    return dp[M][V];
	} 
	  
};
