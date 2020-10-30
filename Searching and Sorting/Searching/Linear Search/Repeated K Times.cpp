//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/repeated-k-times/description/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>A(n);
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        m[A[i]]++;
    }
    int k;
    cin>>k;
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++)
    {
        if(m[A[i]] == k)
        {
            cout<<A[i]<<endl;
            break;
        }
    }
}
