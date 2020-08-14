//https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix/0

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        int arr[r*c];
        for(int i=0;i<r*c;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+(r*c));
        cout<<arr[(r*c)/2]<<endl;
    }
}
