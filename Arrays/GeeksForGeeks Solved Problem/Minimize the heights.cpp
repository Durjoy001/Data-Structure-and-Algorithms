//https://practice.geeksforgeeks.org/problems/minimize-the-heights/0

#include<bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[],int k,int n)
{
    if(n==1)
    {
        return 0;
    }
    sort(arr,arr+n);
    int ans = arr[n-1]-arr[0];
    int small = arr[0]+k;
    int big = arr[n-1]-k;
    if(small>big)
    {
        int tmp = big;
        big = small;
        small = tmp;
    }
    int add,sub;
    for(int i=1;i<n-1;i++)
    {
        add = arr[i]+k;
        sub = arr[i]-k;
        if(add<=big || sub>=small)
        {
            continue;
        }
        if(add-small<big-sub)
        {
            big = add;
        }
        else
        {
            small = sub;
        }
    }
    return min(ans,big-small);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<getMinDiff(arr,k,n)<<endl;
    }
}
