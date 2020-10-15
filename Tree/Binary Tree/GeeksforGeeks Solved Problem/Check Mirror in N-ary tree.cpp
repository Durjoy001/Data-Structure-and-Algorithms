//https://practice.geeksforgeeks.org/problems/check-mirror-in-n-ary-tree/0
//https://www.geeksforgeeks.org/check-mirror-n-ary-tree/

#include <bits/stdc++.h>
using namespace std;
bool mirriorUtil(vector<stack<int> >tree1,vector<queue<int> >tree2)
{
    for(int i = 1;i<tree1.size();++i)
    {
        stack<int>s = tree1[i];
        queue<int>q = tree2[i];
        while(!s.empty() && !q.empty())
        {
            if(s.top() != q.front())
            {
                return false;
            }
            s.pop();
            q.pop();
        }
        if(!s.empty() || !q.empty())
        {
            return false;
        }
    }
    return true;
}
int  areMirrior(vector<int>t1,vector<int>t2,int size,int n)
{
    vector<stack<int> >tree1(n+1);
    vector<queue<int> >tree2(n+1);
    for(int i=0;i<size; )
    {
        tree1[t1[i]].push(t1[i+1]);
        i = i+2;
    }
    for(int i=0;i<size; )
    {
        tree2[t2[i]].push(t2[i+1]);
        i = i+2;
    }
    bool x = mirriorUtil(tree1,tree2);
    if(x==true)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,e;
	    cin>>n>>e;
	    vector<int>t1(2*e);
	    vector<int>t2(2*e);
	    for(int i=0;i<2*e;i++)
	    {
	        cin>>t1[i];
	    }
	    for(int i=0;i<2*e;i++)
	    {
	        cin>>t2[i];
	    }
	    cout<<areMirrior(t1,t2,2*e,n)<<endl;
	}
	return 0;
}
