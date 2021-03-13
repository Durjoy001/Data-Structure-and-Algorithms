//https://www.geeksforgeeks.org/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum/

	public:
	int minDiffernce(int arr[], int n) 
	{ 
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        sum += arr[i];
	    }
	    bool dp[n+1][sum+1];
	   // Initialize first column as true. 0 sum is possible with all elements.
	   for(int i=0;i<=n;i++){
	       dp[i][0] = true;
	   }
	   // Initialize top row, except dp[0][0], as false. With 0 elements, no other sum except 0 is possible
	   for(int i=1;i<=sum;i++){
	       dp[0][i] = false;
	   }
	   for(int i=1;i<=n;i++){
	       for(int j=1;j<=sum;j++){
	           if(arr[i-1]>j){
	               dp[i][j] = dp[i-1][j];
	           }
	           else{
	               dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
	           }
	       }
	   }
	   int diff = INT_MAX;
	   for(int j=sum/2;j>=0;j--){
	       //check last row of dp table, else it is true or not, if it is true that means here
	       //is a subset of sum j.
	       if(dp[n][j] == true){
	           diff = sum - 2*j;//dif  = s2 - s1 
	           //s2 = sum-s1 ,so  diff = sum - s1 - s1 = sum - 2*s1
	           break;
	       }
	   }
	   return diff;
	} 
