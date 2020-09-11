//https://www.geeksforgeeks.org/prefix-postfix-conversion/

#include<bits/stdc++.h>
using namespace std;
bool isOperator(char c)
{
    if(c == '+' || c == '-' || c=='*' || c=='/' || c=='^')
    {
        return true;
    }
    else
    {
        return false;
    }
}
void prefixToPostfix(string s)
{
    stack<string>stk;
    int l = s.size();
    string res;
    for(int i=l-1;i>=0;i--)
    {
        if(isOperator(s[i]))
        {
            res = stk.top();
            stk.pop();
            res = res +stk.top() + s[i];
            stk.pop();
            stk.push(res);
        }
        else
        {
            res = s[i];
            stk.push(res);
        }
    }
    cout<<stk.top()<<endl;
}
int main()
{
  string s;
  cin>>s;
  prefixToPostfix(s);
}
