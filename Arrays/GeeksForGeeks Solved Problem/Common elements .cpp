// https://practice.geeksforgeeks.org/problems/common-elements/0

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n1,n2,n3;
        cin>>n1>>n2>>n3;
        long long int A[n1],B[n2],C[n3];
        map<long long int,long long int>m1,m2;
        vector<long long int>ans;
        for(int i=0;i<n1;i++)
        {
            cin>>A[i];
            if(m1[A[i]]==0)
            {
                m1[A[i]]++;
            }
        }
        for(int i=0;i<n2;i++)
        {
            cin>>B[i];
            if(m1[B[i]]>=1)
            {
                m2[B[i]]++;
            }
        }
        for(int i=0;i<n3;i++)
        {
            cin>>C[i];
            if(m2[C[i]]>=1)
            {
                ans.push_back(C[i]);
                m2[C[i]]=0;
            }
        }
        if(ans.size()==0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        ans.clear();
        m1.clear();
        m2.clear();
    }
}
