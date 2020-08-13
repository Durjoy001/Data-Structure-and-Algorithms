//https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0

#include<bits/stdc++.h>
using namespace std;
int triplet_sum(int arr[],int n,int x)
{
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        int z = arr[i];
        if(z<x)
        {
            z = x-z;
            for(int j=i+1;j<n;j++)
            {
                if(m[z-arr[j]]>=2)
                {
                    return 1;
                }
                else if(m[z-arr[j]]==1 && (arr[j] != z-arr[j]) && (arr[i] != z-arr[j]))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
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
       cout<< triplet_sum(arr,n,x)<<endl;
    }
}
