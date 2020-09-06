//https://practice.geeksforgeeks.org/problems/parenthesis-checker/0

#include<bits/stdc++.h>
using namespace std;
bool areParenthesisBalanced(string str)
{
    stack<char>s;
    char x;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            s.push(str[i]);
        }
        else
        {
            if(str[i]==')')
            {
                if(s.empty() || s.top() != '(')
                {
                    return false;
                }
                s.pop();
            }
            else if(str[i]=='}')
            {
                if(s.empty() || s.top() != '{')
                {
                    return false;
                }
                s.pop();
            }
            else
            {
                if(s.empty() || s.top() != '[')
                {
                    return false;
                }
                s.pop();
            }
        }
    }
    return(s.empty());
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if(areParenthesisBalanced(str))
        {
            cout<<"balanced"<<endl;
        }
        else
        {
            cout<<"not balanced"<<endl;
        }
    }
}
