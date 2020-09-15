https://www.geeksforgeeks.org/remove-brackets-algebraic-string-containing-operators/

#include<bits/stdc++.h>
using namespace std;
void rmvBrk(string str)
{
    stack<int>s;
    string res;
    s.push(0);
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='+' || str[i]=='-')
        {
            if(s.top()== 1)
            {
                if(str[i]=='+')
                {
                    res = res+'-';
                }
                else
                {
                    res = res + '+';
                }
            }
            else
            {
                res = res+str[i];
            }
        }
        else if(str[i]=='(' && i>0)
        {
            if(str[i-1]=='-')
            {
                if(s.top()==1)
                {
                    s.push(0);
                }
                else
                {
                    s.push(1);
                }
            }
            else if(str[i-1]=='+')
            {
                s.push(s.top());
            }
        }
        else if(str[i]==')')
        {
            s.pop();
        }
        else
        {
            res = res+str[i];
        }
    }
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string str;
       cin>>str;
       rmvBrk(str);
    }
}
