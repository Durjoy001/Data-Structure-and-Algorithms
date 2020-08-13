//https://practice.geeksforgeeks.org/problems/row-with-max-1s/0

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        int max_one=-1,one=0,index;
        for(int i=0;i<n;i++)
        {
            one = 0;
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==1)
                {
                    one++;
                }
            }
            if(max_one<one)
            {
                index = i;
                max_one = one;
            }
        }
        cout<<index<<endl;
    }
}
