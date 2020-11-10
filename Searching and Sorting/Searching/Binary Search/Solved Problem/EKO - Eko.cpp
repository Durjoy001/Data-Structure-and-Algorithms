//https://www.spoj.com/problems/EKO/

//Time complexity : O(Nlogn)
//Strategy : Binary Search on Answer.If array is unsorted then also we can use this binary search strategy.
#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<long long int>A,long long int n,long long int m,long long int mid)
{
    long long int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>mid)
        {
            sum = sum + (A[i]-mid);
            if(sum >= m)
            {
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    return false;
}
int main()
{
    long long int n,m,low,high,mid,Z=0,result;
    cin>>n>>m;
    vector<long long int>A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        Z = max(Z,A[i]);
    }
    low = 0;
    high = Z;
    //just sort the array in reverse order for save some time but it is 
    // not necessary to sort the array.If array is unsorted than also we can use this binary
    //search strategy.
    sort(A.rbegin(),A.rend());
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(isValid(A,n,m,mid) == true)
        {
            result = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout<<result<<endl;
}
