//https://www.youtube.com/watch?v=4qjprDkJrjY&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j&index=6
//https://www.geeksforgeeks.org/find-rotation-count-rotated-sorted-array/


class Solution{
public:	
	int findKRotation(int A[], int n) {
	   int low =0;
    int high = n-1;
    int mid;
    while(low <= high)
    {
        if(A[low] <= A[high])//array(sub array) or current segment  is already sorted so,minimum element is low index
        {
            return low;
        }
        mid =  (high+low)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;//we can use mid-1 but for avoiding negative we use this
        if(A[mid] <= A[next] && A[mid] <= A[prev])//found the minimum element in circularly sorted array
         //min element is this element which prev element and next element is bigger than this
        {
            return mid;
        }
        else if(A[mid] <= A[high])//mid to high index is sorted so there are no chance to find minimum element
        //so we will find min element in left half
        {
            high = mid-1;
        }
        else if(A[low] <= A[mid])//low to mid index is sorted so we will find minimum index from mid+1 to high
        {
            low = mid+1;
        }
        //in array all element is distinct but we use <= or >= instead of < or >
        // the reason behind this is there are might be a condition occur where low and high is same
        //or high and mid is same or low and mid is same that's why we use this.
    }
	}
  return -1;
};
