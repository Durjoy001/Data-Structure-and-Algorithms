//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0

#include<bits/stdc++.h>
using namespace std;
void print_arr(int arr[],int l)
{
    cout<<arr[l-1]<<" ";
    for(int i=0; i<l-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
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
        print_arr(arr, n);
    }
    return 0;
}
