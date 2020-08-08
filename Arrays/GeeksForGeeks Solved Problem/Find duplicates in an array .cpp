// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        vector<int>V;
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]>1)
            {
                V.push_back(arr[i]);
                m[arr[i]]=0;
            }
        }
        sort(V.begin(),V.end());
        if(V.size()==0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<V.size();i++)
        {
            cout<<V[i]<<" ";
        }
        cout<<endl;
        V.clear();
    }
}
