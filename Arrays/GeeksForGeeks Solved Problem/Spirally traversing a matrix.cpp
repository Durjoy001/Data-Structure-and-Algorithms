//https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        int r_start=0,c_start=0;
        while(r_start<m && c_start<n)
        {
            for(int i=c_start;i<n;i++)
            {
                cout<<arr[r_start][i]<<" ";
            }
            r_start++;
            for(int i=r_start;i<m;i++)
            {
                cout<<arr[i][n-1]<<" ";
            }
            n--;
            if(m>r_start)
            {
                for(int i=n-1;i>=c_start;i--)
                {
                    cout<<arr[m-1][i]<<" ";
                }
                m--;
            }
            if(n>c_start)
            {
                for(int i = m-1;i>=r_start;i--)
                {
                    cout<<arr[i][c_start]<<" ";
                }
                c_start++;
            }
        }
        cout<<endl;
    }
}
