// https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0

#include<bits/stdc++.h>
using namespace std;
void subset_find(int m,int n,int arr1[],int arr2[])
{
    int F = 0;
    map<int,int>mm;
    for(int i=0;i<m;i++)
    {
        mm[arr1[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mm[arr2[i]]==0)
        {
            F = 1;
            break;
        }
    }
    if(F==1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    mm.clear();
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        subset_find(m,n,arr1,arr2);
    }
}
