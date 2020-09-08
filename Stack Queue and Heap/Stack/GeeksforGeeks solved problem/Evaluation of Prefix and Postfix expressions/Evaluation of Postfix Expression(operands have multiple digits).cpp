//https://www.geeksforgeeks.org/stack-set-4-evaluation-postfix-expression/

#include<bits/stdc++.h>
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
bool isdigit(char c)
{
    int x = c-'0';
    if (x>=0 && x<=9)
    {
        return true;
    }
    return false;
}
void evaluatePostFix(string s)
{
    stack <int> stk;
    int x,e1,e2;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
            e2 = stk.top();//2nd element,cz 2nd element pop out in first
            stk.pop();
            e1 = stk.top();//1st element,cz 1st element pop out in second
            stk.pop();
            x = operation(e1,e2,s[i]);
            stk.push(x);
        }
        else if(isdigit(s[i]))
        {
            x = 0;
            while(i<s.size() && isdigit(s[i]))
            {
                x = (x*10)+ s[i]-'0';
                i++;
            }
            i--;
            stk.push(x);
        }
    }
    cout<<stk.top()<<endl;
}
int main()
{
    string s;
    getline(cin,s);
    evaluatePostFix(s);

}
