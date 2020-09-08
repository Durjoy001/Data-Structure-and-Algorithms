//https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression/0

#include <bits/stdc++.h>
using namespace std;
int operation(int a,int b,char op)
{
    if(op == '+')
    {
        return (a+b);
    }
    else if(op=='-')
    {
        return (a-b);
    }
    else if(op == '*')
    {
        return (a*b);
    }
    else
    {
        return (a/b);
    }
}
void evaluatePostFix(string s)
{
    stack <int> stk;
    int x,e1,e2;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
            e2 = stk.top();//2nd element
            stk.pop();
            e1 = stk.top();//1st element ,cz 1st element pop out in second
            stk.pop();
            x = operation(e1,e2,s[i]);
            stk.push(x);
        }
        else
        {
            x = s[i]-'0';
            stk.push(x);
        }
    }
    cout<<stk.top()<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    evaluatePostFix(s);
	}
}
