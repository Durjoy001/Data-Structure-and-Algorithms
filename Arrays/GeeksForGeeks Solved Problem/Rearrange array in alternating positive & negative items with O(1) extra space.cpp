// https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/

#include<bits/stdc++.h>
using namespace std;
void RearrangeArray(int arr[],int n,int negative)
{
    int Z = negative;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        if(Z>0 && (i+negative<=n-1))
        {
            Z--;
            cout<<arr[i+negative]<<" ";
        }
        if(Z==0)
        {
            i = i+negative;
            Z--;
        }
        if(i+negative==n-1 && Z>0)
        {
            n = n-(i+1);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,negative=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                negative++;
            }
        }
        sort(arr,arr+n);
        RearrangeArray(arr,n,negative);
    }
}
