//https://practice.geeksforgeeks.org/problems/two-repeated-elements/0

#include<bits/stdc++.h>
using namespace std;
void rep_element(int arr[],int n)
{
    int m[n+2]={0};
    for(int i=0;i<n+2;i++)
    {
        m[arr[i]]++;
        if(m[arr[i]]==2)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+2];
        for(int i=0;i<n+2;i++)
        {
            cin>>arr[i];
        }
        rep_element(arr,n);
    }
}
