//https://www.geeksforgeeks.org/expression-contains-redundant-bracket-not/

#include<bits/stdc++.h>
using namespace std;
bool checkRedundent(string str)
{
    stack<int>s;
    bool flag = true;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==')')
        {
            flag = true;
            while((s.top() != '(') && (!s.empty()))
            {
                if(s.top()=='+' || s.top() == '-' || s.top()=='*' || s.top()=='/')
                {
                    s.pop();
                    flag = false;
                }
                s.pop();
            }
            s.pop();
            if(flag==true)
            {
                return true;
            }
        }
        else
        {
            s.push(str[i]);
        }
    }
    return false;
}
int main()
{
    int t;
    bool x;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        x = checkRedundent(str);
        if(x)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
