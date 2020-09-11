//https://www.geeksforgeeks.org/postfix-to-infix/

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
void postfixToInfix(string s)
{
    stack<string>stk;
    int l = s.size();
    string res,op1,op2;
    for(int i=0;i<l;i++)
    {
        if(isOperator(s[i]))
        {
            op2 = stk.top();
            stk.pop();
            op1 = stk.top();
            stk.pop();
            res = '('+op1+s[i]+op2+')';
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
  postfixToInfix(s);
}
