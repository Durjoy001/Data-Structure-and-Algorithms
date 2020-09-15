https://practice.geeksforgeeks.org/problems/valid-substring/0

#include<bits/stdc++.h>
using namespace std;
void validSubStr(string str)
{
    int ans=0,left=0,right=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            left++;
        }
        else
        {
            right++;
        }
        if(left==right)
        {
            ans=max(ans,left*2);
        }
        else if(right>left)
        {
            left = right=0;
        }
    }
    left=right=0;
    for(int i=str.size()-1;i>=0;i--)
    {
        if(str[i]=='(')
        {
            left++;
        }
        else
        {
            right++;
        }
        if(left==right)
        {
            ans = max(ans,left*2);
        }
        else if(left>right)
        {
            left = right = 0;
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
