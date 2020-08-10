// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum(int arr[],int n)
{
    int max_soFar = arr[0], max_EndingHere = arr[0];
    for(int i=1;i<n;i++)
    {
        max_EndingHere = max(arr[i], max_EndingHere + arr[i]);
        max_soFar = max(max_soFar,max_EndingHere);
    }
    return max_soFar;
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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<maxSubArraySum(arr,n)<<endl;;
    }
}
