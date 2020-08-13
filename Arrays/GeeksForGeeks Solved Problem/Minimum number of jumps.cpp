//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0

#include<bits/stdc++.h>
using namespace std;
int minJumps(int arr[],int n)
{
    int step = arr[0];
    int max_reach = arr[0];
    int jump = 1;
    if(arr[0]==0)
    {
        return -1;
    }
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        {
            return jump;
        }
        max_reach = max(max_reach,arr[i]+i);
        step--;
        if(step==0)
        {
            jump++;
            if(i>=max_reach)
            {
                return -1;
            }
            step = max_reach-i;
        }
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
        cout<<minJumps(arr,n)<<endl;
    }
}
