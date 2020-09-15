https://practice.geeksforgeeks.org/problems/valid-substring/0

#include<bits/stdc++.h>
using namespace std;
void validSubStr(string str)
{
    stack<int>s;
    int ans=0;
    s.push(-1);
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            s.push(i);
        }
        else
        {
            s.pop();
            if(!s.empty())
            {
                ans = max(ans,i-s.top());
            }
            else
            {
                s.push(i);
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	string str;
	while(t--)
	{
	    cin>>str;
	    validSubStr(str);
	}
}
