//https://practice.geeksforgeeks.org/problems/overlapping-intervals/0
//Time complexity of the method is O(nLogn) which is for sorting. Once the array of intervals is sorted, merging takes linear time.

#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > A;
stack<int>s;
void printList()
{
    if(!s.empty())
    {
        int x = s.top();
        s.pop();
        printList();
        cout<<x<<" ";
    }
}
void Intervals(int n)
{
    if(n==0)
    {
        return;
    }
     s.push(A[0].first);
     s.push(A[0].second);
    for(int i=1;i<n;i++)
    {
        if(s.top()<A[i].first)
        {
            s.push(A[i].first);
            s.push(A[i].second);
        }
        else if(s.top()<A[i].second)
        {
            s.pop();
            s.push(A[i].second);
        }
    }
    printList();
    cout<<endl;
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
