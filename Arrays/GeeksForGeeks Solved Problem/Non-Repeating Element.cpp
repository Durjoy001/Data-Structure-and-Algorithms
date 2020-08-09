// https://www.geeksforgeeks.org/non-repeating-element/

#include<bits/stdc++.h>
using namespace std;
int solve (int arr[],int n)
{
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]==1)
        {
            return arr[i];
            break;
        }
    }
    return -1;
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
        cout<<solve(arr,n)<<endl;
    }
}
