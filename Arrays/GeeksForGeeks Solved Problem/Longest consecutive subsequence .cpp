//https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence/0

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=1,count=1;
        cin>>n;
        int arr[n],m[100005]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        for(int i=1;i<100005;i++)
        {
            if(m[i]>0 && m[i+1]>0)
            {
                count++;
                ans = max(ans,count);
            }
            else
            {
                count = 1;
            }
        }
        cout<<ans<<endl;
    }
}
