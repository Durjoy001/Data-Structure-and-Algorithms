//https://www.geeksforgeeks.org/stack-set-2-infix-to-postfix/
//https://www.youtube.com/watch?v=vq-nUF0G4fI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=22&t=0s

#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c == '^')
    {
        return 3;
    }
    else if(c == '*' || c =='/')
    {
        return 2;
    }
    else if(c == '+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void infixToPostfix(string s)
{
    int l = s.size();
    stack<char>stk;
    string res;
    for(int i=0; i<l; i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
        {
            res = res+s[i];
        }
        else if(s[i]=='(')
        {
            stk.push('(');
        }
        else if(s[i]==')')
        {
            while(!stk.empty() && stk.top() != '(')
            {
                res = res + stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else
        {
            while(!stk.empty() && (prec(stk.top()) >= prec(s[i])))
            {
                res = res + stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
    }
    while(!stk.empty())
    {
        res = res+stk.top();
        stk.pop();
    }
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        infixToPostfix(s);
    }
}
