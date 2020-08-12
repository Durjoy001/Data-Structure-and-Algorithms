// https://www.geeksforgeeks.org/gcds-of-a-given-index-ranges-in-an-array/

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
int  find_gcd(int arr[],int qs,int qe)
{
    int result = arr[qs];
    for(int i=qs+1; i<=qe; i++)
    {
        result = gcd(result,arr[i]);
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    while(true)
    {
        int qs,qe;
        cin>>qs>>qe;
        cout<<find_gcd(arr,qs,qe)<<endl;
    }
}
