// https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array/0

#include<bits/stdc++.h>
using namespace std;
int findMin(int arr[],int low,int high)
{
    while(low<high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==arr[high])
        {
            high--;
        }
         if(arr[mid]>arr[high])
         {
             low = mid+1;
         }
         else
         {
             high = mid;
         }
    }
    return arr[high];
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
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cout<<findMin(arr,0,n-1)<<endl;
    }
}
