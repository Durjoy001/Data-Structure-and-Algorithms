//https://www.geeksforgeeks.org/sum-minimum-maximum-elements-subarrays-size-k/

#include <bits/stdc++.h>
using namespace std;
int SumOfKsubArray(int arr[],int n,int k)
{
    // In deque 'G' we maintain decreasing order of values from front to rear 
    // In deque 'S' we  maintain increasing order of values from front to rear 
    deque<int>G(k);
    deque<int>S(k);
    int sum = 0,i;
    for( i=0;i<k;i++)
    {
        while(!G.empty() && arr[i] >= arr[G.back()])
        {
            G.pop_back();
        }
        while(!S.empty() && arr[i] <= arr[S.back()])
        {
            S.pop_back();
        }
        G.push_back(i);
        S.push_back(i);
    }
    for( ;i<n;i++)
    {
        sum = sum+arr[G.front()]+arr[S.front()];
        // Remove all elements which are out of this window
        while(!G.empty() && G.front() <= i-k)
        {
            G.pop_front();
        }
        while(!S.empty() && S.front() <= i-k)
        {
            S.pop_front();
        }
        // remove all previous greater element that are useless
        while(!G.empty() && arr[i] >= arr[G.back()])
        {
            G.pop_back();
        }
        // remove all previous smaller that are elements are useless
        while(!S.empty() && arr[i] <= arr[S.back()])
        {
            S.pop_back();
        }
        G.push_back(i);
        S.push_back(i);
    }
    sum = sum+arr[G.front()]+arr[S.front()];
    return sum;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;
	    cout<<SumOfKsubArray(arr,n,k)<<endl;
	}
	return 0;
}
