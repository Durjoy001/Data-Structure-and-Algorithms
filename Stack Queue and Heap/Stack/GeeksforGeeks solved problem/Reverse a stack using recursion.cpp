//https://www.geeksforgeeks.org/reverse-a-stack-using-recursion/

#include<bits/stdc++.h>
using namespace std;
stack<int>s;
stack<int>res;
void Reverse()
{
    res.push(s.top());
    s.pop();
    if(!s.empty())
    {
        Reverse();
    }
    s = res;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    Reverse();
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
