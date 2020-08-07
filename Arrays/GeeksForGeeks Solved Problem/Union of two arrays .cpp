//https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>A(n),B(m);
        set<int>s;
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
            s.insert(A[i]);
        }
        for(int i=0; i<m; i++)
        {
            cin>>B[i];
            s.insert(B[i]);
        }
        cout<<s.size()<<endl;
        s.clear();
    }
    return 0;
}
