// https://practice.geeksforgeeks.org/problems/first-repeating-element/0

#include<bits/stdc++.h>
using namespace std;
void rep_element(int arr[],int n)
{
    map<int,int>m;
    int ans=INT_MAX,F=0;
    for(int i=n-1; i>=0; i--)
    {
        m[arr[i]]++;
        if(m[arr[i]]>1)
        {
            ans = min(ans,i+1);
            F = 1;
        }
    }
    if(F==0)
    {
        cout<<-1<<endl;
    }
    else
        cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        rep_element(arr,n);
    }
}
