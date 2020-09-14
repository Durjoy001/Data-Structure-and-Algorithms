//https://practice.geeksforgeeks.org/problems/overlapping-intervals/0

#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > A;
void Intervals(int n)
{
    stack<int>s;
    int a,b;
    for(int i=0;i<n;i++ )
    {
        if(s.empty())
        {
            s.push(A[i].first);
            s.push(A[i].second);
        }
        else
        {
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            //cout<<a<<" "<<b<<endl;
            if (A[i].first>b && A[i].second>b)
            {
                s.push(a);
                s.push(b);
                s.push(A[i].first);
                s.push(A[i].second);
            }
            else if(A[i].first<a && A[i].second<a)
            {
                s.push(a);
                s.push(b);
                s.push(A[i].first);
                s.push(A[i].second);
            }
            else if(A[i].first<= a && A[i].second>=b)
            {
                s.push(A[i].first);
                s.push(A[i].second);
            }
            else if(A[i].first >= a && A[i].second <= b)
            {
                s.push(a);
                s.push(b);
            }
            else if(A[i].first>=a && A[i].second>=b)
            {
                s.push(a);
                s.push(A[i].second);
            }
            else if(A[i].first<=a && A[i].second<=b)
            {
                s.push(A[i].first);
                s.push(b);
            }
        }
    }
    vector<int>res;
    while(!s.empty())
    {
        res.push_back(s.top());
        s.pop();
    }
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    res.clear();
    A.clear();
}
int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a>>b;
	        A.push_back(make_pair(a,b));
	    }
	    sort(A.begin(),A.end());
	    Intervals(n);
	}
}
