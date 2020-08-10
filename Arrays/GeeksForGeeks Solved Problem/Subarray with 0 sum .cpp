// https://practice.geeksforgeeks.org/problems/subarray-with-0-sum/0

#include<bits/stdc++.h>
using namespace std;
void sunArrayExists(int arr[],int n)
{
    map<int,int>m;
    int sum=0,F=0;
    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
        if(sum==0 || m[sum]==1)
        {
            F = 1;
            break;
        }
        else
        {
            m[sum]++;
        }
    }
    if(F==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
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
        sunArrayExists(arr,n);
    }
}
