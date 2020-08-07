//https://practice.geeksforgeeks.org/problems/missing-number-in-array/0

#include<bits/stdc++.h>
using namespace std;
int miss_num(int arr[],int n)
{
    int sum = ((n)*(n+1))/2;
    for(int i=0;i<n-1;i++)
    {
        sum = sum-arr[i];
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,Z;
        cin>>n;
        int arr[n-1];
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        cout<<miss_num(arr,n)<<endl;
    }
    return 0;
}
