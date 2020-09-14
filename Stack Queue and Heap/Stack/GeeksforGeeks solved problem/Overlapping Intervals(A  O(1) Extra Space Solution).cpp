//https://practice.geeksforgeeks.org/problems/overlapping-intervals/0
Time Complexity : O(nlogn)
space complexity: O(1)


#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > A;
void Intervals(int n)
{
    int index = 0;
    for(int i=1;i<n;i++)
    {
       if(A[i].first <= A[index].second)
       {
           A[index].second = max(A[i].second,A[index].second);
           A[index].first  = min(A[i].first,A[index].first);
       }
       else
       {
           index++;
           A[index].first = A[i].first;
           A[index].second = A[i].second;
       }
    }
    for(int i=0;i<=index;i++)
    {
        cout<<A[i].first<<" "<<A[i].second<<" ";
    }
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
