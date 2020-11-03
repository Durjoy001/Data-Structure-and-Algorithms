//https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/
//https://www.youtube.com/watch?v=uufaK2uLnSI&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j&index=7&t=1s
//https://leetcode.com/problems/search-in-rotated-sorted-array/
/*It doesn’t look possible to search in O(Logn) time in all cases when duplicates are allowed. For example consider searching 0 in {2, 2, 2, 2, 2, 2, 2, 2, 0, 2} and {2, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}.
It doesn’t look possible to decide whether to recur for the left half or right half by doing a constant number of comparisons at the middle.*/
/*In duplicate case we have to use linear search*/

#include <bits/stdc++.h>
using namespace std;
int findindex(int A[],int n,int k)
{
    int low = 0;
    int high = n-1;
    int mid;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(A[mid] == k)
        {
            return mid;
        }
        else if(A[low] <= A[mid] )//here we use <= condition but why we use this?
        //the reason is when there would be a case that only one element is remaining
        //and it's not equal to k so in this case we have to execute one of the condition
        //for break out the loop .that's why we use this.
        {
            if(A[low] <= k && k <= A[mid])
            {
                high = mid;
            }
            else
            {
                low = mid+1;
            }
        }
        else if(A[mid] <= A[high])
        {
            if(A[mid] <= k && k <= A[high])
            {
                low = mid;
            }
            else
            {
                high = mid-1;
            }
        }
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    int k;
	    cin>>k;
	    cout<<findindex(A,n,k)<<endl;
	}
	return 0;
}
