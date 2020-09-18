//https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

queue<ll> modifyQueue(queue<ll> q, int k)
{
    stack<int>s;
    int x,z=k;
    while(k--)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    x = q.size();
    for(int i=0;i<x-z;i++)
    {
        q.push(q.front());
        q.pop();
    }
    return q;
}
