//https://www.geeksforgeeks.org/painters-partition-problem-set-2/

#include<bits/stdc++.h>
using namespace std;
bool isValid(int A[],int mid,int k,int n)
{
    int total=0,res=1;
    for(int i=0;i<n;i++)
    {
        if(A[i]>mid)
        {
            return false;
        }
        total = total + A[i];
        if(total > mid)
        {
            total = A[i];
            res++;
            if(res>k)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int low=0,high=0,mid,result;
    for(int i=0;i<n;i++)
    {
        high = high+A[i];
        low = max(low,A[i]);
    }
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(isValid(A,mid,k,n)==true)
        {
            result = mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    cout<<result<<endl;
}
