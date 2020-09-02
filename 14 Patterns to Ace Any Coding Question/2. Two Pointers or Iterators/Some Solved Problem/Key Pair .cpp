//https://practice.geeksforgeeks.org/problems/key-pair/0

#include <bits/stdc++.h>
using namespace std;
// Function to check if array has 2 elements 
// whose sum is equal to the given val
// also we can use hashing to solve this problem
void TwoCandidate(int arr[],int n,int x)
{
    int l=0,r = n-1;
    sort(arr,arr+n);
    while(l<r)
    {
        if(arr[l]+arr[r]==x)
        {
           cout<<"Yes"<<endl;
           return;
        }
        else if(arr[l]+arr[r] < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout<<"No"<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	       cin>>arr[i];
	    }
	    TwoCandidate(arr,n,x);
	}
	return 0;
}
