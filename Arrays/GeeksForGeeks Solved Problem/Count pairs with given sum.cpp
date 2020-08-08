//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum/0

#include<bits/stdc++.h>
using namespace std;
int Total_pairs(int arr[],int n,int k)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,Z;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Z = Total_pairs(arr,n,k);
        cout<<Z<<endl;
    }
}
