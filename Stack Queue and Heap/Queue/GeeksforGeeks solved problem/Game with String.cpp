//https://practice.geeksforgeeks.org/problems/game-with-string/0

#include <bits/stdc++.h>
using namespace std;
int strValue(string s,int k)
{
    if(k>=s.size())
    {
        return 0;
    }
    int freq[26] = {0};
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    priority_queue<int>Q;
    for(int i=0;i<26;i++)
    {
        Q.push(freq[i]);
    }
    int x;
    while(k--)
    {
        x = Q.top();
        Q.pop();
        x--;
        Q.push(x);
    }
    int sum;
    while(!Q.empty())
    {
        x = Q.top();
        Q.pop();
        sum = sum + (x*x);
    }
    return sum;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int k;
	    cin>>k;
	    cout<<strValue(s,k)<<endl;
	}
	return 0;
}
