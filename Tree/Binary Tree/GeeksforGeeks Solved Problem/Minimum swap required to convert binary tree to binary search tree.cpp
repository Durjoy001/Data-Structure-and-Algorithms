//https://www.geeksforgeeks.org/minimum-swap-required-convert-binary-tree-binary-search-tree//

#include<bits/stdc++.h>
using namespace std;
void inOrder(int a[],int n,vector<int>&v,int index)
{
    // if index i is the parent, index 2*i + 1 is the left child and index 2*i + 2 is the right child.
    if(index >= n)
    {
        return;
    }
    inOrder(a,n,v,2 * index+1);
    v.push_back(a[index]);
    inOrder(a,n,v,2 * index+2);
}
int minSwap(vector<int>&v)
{
    //first we sort the vector of pair (sort the array) then we check
    //how many swap required for changing  it (vector of pair) to it's first or initial condition. 
    vector<pair<int,int> > p(v.size());
    int ans = 0;
    for(int i=0;i<v.size();i++)
    {
        p[i].first = v[i];
        p[i].second = i;
    }
    sort(p.begin(),p.end());
    for(int i=0;i<p.size();i++)
    {
        if(p[i].second == i)
        {
            continue;
        }
        else
        {
            swap(p[i].first,p[p[i].second].first);
            swap(p[i].second,p[p[i].second].second);
        }
        //decrement i until the particular element goes it's input or initial position
        if(p[i].second != i)
        {
            i--;
        }
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>v;
    inOrder(a,n,v,0);
    int ans = minSwap(v);
    cout<<ans<<endl;
}
