#include<bits/stdc++.h>
using namespace std;
maxSubArraySum(int arr[],int n)
{
    int max_soFar = INT_MIN, max_EndingHere = 0;
    for(int i=0;i<n;i++)
    {
        max_EndingHere = max_EndingHere + arr[i];
        if(max_EndingHere<0)
        {
            max_EndingHere = 0;
        }
        if(max_EndingHere>max_soFar)
        {
            max_soFar = max_EndingHere;
        }
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
