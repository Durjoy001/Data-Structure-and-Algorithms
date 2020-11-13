//https://www.geeksforgeeks.org/find-missing-number-arithmetic-progression/


#include<bits/stdc++.h>
using namespace std;
int findMissing(int A[],int low,int high,int diff)
{
    if(low >= high)
    {
        return -1;
    }
    int mid = low + (high - low)/2;
    if(A[mid+1]-A[mid] != diff)
    {
        return (A[mid]+diff);
    }
    if(mid>0 && A[mid]-A[mid-1] != diff)
    {
        return (A[mid]-diff);
    }
    if(A[mid]== A[0]+mid*diff)
    {
        return findMissing(A,mid+1,high,diff);
    }
    else
    {
        return findMissing(A,low,mid-1,diff);
    }
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int diff = (A[n-1]-A[0])/n;
    cout<<findMissing(A,0,n-1,diff)<<endl;
}
