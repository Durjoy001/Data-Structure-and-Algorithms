//https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream/0

#include <bits/stdc++.h>
using namespace std;
void nonRepChar(char s[],int n)
{
    queue<char>Q;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[s[i]-'0']++;
        Q.push(s[i]);
        while(!Q.empty())
        {
            if(m[Q.front()-'0']>1)
            {
                Q.pop();
            }
            else
            {
                cout<<Q.front()<<" ";
                break;
            }
        }
        if(Q.empty())
        {
            cout<<-1<<" ";
        }
    }
    m.clear();
    cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
        char s[n];
	    for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
	    nonRepChar(s,n);
	}
	return 0;
}
