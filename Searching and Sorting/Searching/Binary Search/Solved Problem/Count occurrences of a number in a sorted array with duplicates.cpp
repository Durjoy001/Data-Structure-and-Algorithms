//https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1#
//https://www.youtube.com/watch?v=pLT_9jwaPLs&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j&index=5

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[],int n,int x,bool search)
	{
	    int low = 0;
	    int high = n-1;
	    int mid,result = -1;
	    while(low <= high)
	    {
	        mid = low + (high-low)/2;
	        if(arr[mid] == x)
	        {
	            result = mid;
	            if(search == true)
	            {
	                high = mid-1;//go on searching towards left(lower bound)
	            }
	            else
	            {
	                low = mid+1;//go on searching towards right (upper bound)
	            }
	        }
	        else if(x < arr[mid])
	        {
	            high = mid-1;
	        }
	        else
	        {
	            low = mid+1;
	        }
	    }
	    return result;
	}
	int count(int arr[], int n, int x) {
	    int lowerBound = count(arr,n,x,true);
	    if(lowerBound == -1)
	    {
	        return 0;
	    }
	    int upperBound = count(arr,n,x,false);
	    return (upperBound-lowerBound)+1;
	}
};
