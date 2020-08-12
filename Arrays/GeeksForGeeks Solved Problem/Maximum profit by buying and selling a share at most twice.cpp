//https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-twice/

#include<bits/stdc++.h>
using namespace std;
int max_profit(int arr[],int n)
{
    vector<int>profit(n);
    for(int i=0; i<n; i++)
    {
        profit[i]=0;
    }
    int max_price = arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        if(max_price<arr[i])
        {
            max_price = arr[i];
        }
        profit[i] = max(profit[i+1],(max_price-arr[i]));
    }
    int min_price = arr[0];
    for(int i=1;i<n;i++)
    {
        if(min_price>arr[i])
        {
            min_price = arr[i];
        }
        profit[i] = max(profit[i-1],profit[i]+(arr[i]-min_price));
    }
    return profit[n-1];
    profit.clear();
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
        cout<<max_profit(arr,n)<<endl;
    }
}
