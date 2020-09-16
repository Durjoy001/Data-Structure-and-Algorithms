//https://practice.geeksforgeeks.org/problems/count-the-reversals/0

#include <bits/stdc++.h>
using namespace std;
int countRev(string str)
{
    stack<char> s;
    int len = str.size();
    if(len%2==1)
    {
        return -1;
    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='}' && !s.empty() && s.top()=='{')
        {
            s.pop();
        }
        else
        {
            s.push(str[i]);
        }
    }
    int totalLen = s.size();
    int Op=0;
    while(!s.empty())
    {
        if(s.top()=='{')
        {
            s.pop();
            Op++;
        }
        else
        {
            s.pop();
        }
    }
    return ((totalLen/2)+(Op%2));
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    cout<<countRev(str)<<endl;
	}
	return 0;
}
