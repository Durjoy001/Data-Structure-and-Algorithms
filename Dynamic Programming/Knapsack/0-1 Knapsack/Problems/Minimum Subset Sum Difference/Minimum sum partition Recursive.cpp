//https://www.geeksforgeeks.org/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum/

	public:
	int minDiffUtil(int arr[],int n,int calculatedSum,int totalSum)
	{
	    // If we have reached last element.  Sum of one subset is sumCalculated, sum of other subset is
        // sumTotal-sumCalculated.  Return absolute difference of two sums
        if(n == 0){
            return abs((totalSum-calculatedSum)-calculatedSum);
        }
        // For every item arr[i], we have two choices
        // (1) We do not include it first set
        // (2) We include it in first set
        // We return minimum of two choices
        return min(minDiffUtil(arr,n-1,calculatedSum,totalSum),minDiffUtil(arr,n-1,calculatedSum+arr[n-1],totalSum));
	}
	int minDiffernce(int arr[], int n) 
	{ 
	    int totalSum = 0;
	    for(int i=0;i<n;i++){
	        totalSum += arr[i];
	    }
	    return minDiffUtil(arr,n,0,totalSum);
	} 
