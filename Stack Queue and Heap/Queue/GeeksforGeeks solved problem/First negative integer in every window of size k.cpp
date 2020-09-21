//https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k/0

#include <bits/stdc++.h>
using namespace std;
void firstNegative(int arr[],int n,int k)
{
    deque<int>Q;//don't initialize deque size as k,because if we do so than all deque element initially set to 0 and it will through wrong output.
    int i;
    for(i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
            Q.push_back(i);
        }
    }
    for( ;i<n;i++)
    {
        if(Q.empty())
        {
            cout<<0<<" ";
        }
        else
        {
            cout<<arr[Q.front()]<<" ";
        }
        while(!Q.empty() && Q.front() <= i-k)
        {
            Q.pop_front();
        }
        if(arr[i]<0)
        {
            Q.push_back(i);
        }
    }
    if(Q.empty())
    {
          cout<<0<<endl;
    }
    else
    {
        cout<<arr[Q.front()]<<endl;
    }
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
	    firstNegative(arr,n,k);
	}
	return 0;
}
