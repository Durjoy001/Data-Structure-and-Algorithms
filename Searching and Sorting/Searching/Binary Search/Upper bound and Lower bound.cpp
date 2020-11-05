https://www.geeksforgeeks.org/implementing-upper_bound-and-lower_bound-in-c/

#include<bits/stdc++.h>
using namespace std;
int upper_Bound(int A[],int n,int k)
{
    int low = 0;
    int high = n;
    int mid;
    while(low < high)
    {
        mid = low + (high-low)/2;
        if(k >= A[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}
int lower_Bound(int A[],int n,int k)
{
    int low = 0;
    int high = n;
    int mid;
    while(low < high)
    {
        mid = low + (high-low)/2;
        if(k <= A[mid])
        {
            high = mid;
        }
        else
        {
            low = mid+1;
        }
    }
    return low;
}
int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int a = upper_Bound(A,n,8);
    if(a == n)
    {
        cout<<"upper bound doesn't exist"<<endl;
    }
    else
    {
        cout<<a<<" ";
    }
    int b = lower_Bound(A,9,8);
    if(b == n)
    {
        cout<<"lower Bound doesn't exist"<<endl;
    }
    else
        cout<<b<<endl;
}
