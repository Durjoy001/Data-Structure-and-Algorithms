//https://www.geeksforgeeks.org/interleave-first-half-queue-second-half/

#include<bits/stdc++.h>
using namespace std;
stack<int>s;
void insert_Btm(int x)
{
    if(s.size()==0)
    {
        s.push(x);
    }
    else
    {
        int a = s.top();
        s.pop();
        insert_Btm(x);
        s.push(a);
    }
}
void rev()
{
    if(s.size()>0)
    {
        int x = s.top();
        s.pop();
        rev();
        insert_Btm(x);
    }
}
queue<int> interLeaveQueue(queue<int>q)
{
    int x = q.size()/2;
    for(int i=0; i<x; i++)
    {
        s.push(q.front());
        q.pop();
    }
    rev();
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
    return q;
}
int main()
{
    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    queue<int>a = interLeaveQueue(q);
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl;
}
