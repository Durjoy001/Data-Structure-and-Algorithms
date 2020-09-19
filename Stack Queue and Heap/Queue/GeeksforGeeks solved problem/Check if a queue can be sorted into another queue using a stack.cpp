//https://www.geeksforgeeks.org/check-queue-can-sorted-another-queue-using-stack/

#include<bits/stdc++.h>
using namespace std;
bool checkSorted(queue<int>&q)
{
    stack<int>s;
    int n = q.size();
    int expected = 1,frnt;
    while(!q.empty())
    {
        frnt = q.front();
        q.pop();
        if(frnt==expected)
        {
            expected++;
        }
        else
        {
            if(s.empty())
            {
                s.push(frnt);
            }
            else if(!s.empty() && s.top()<frnt)
            {
                return false;
            }
            else
            {
                s.push(frnt);
            }
        }
        while(!s.empty() && s.top()==expected)
        {
            s.pop();
            expected++;
        }
    }
    if(expected-1==n && s.empty())
    {
        return true;
    }
    return false;
}
int main()
{
    queue<int> q;
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(6);
    q.push(3);
    q.push(4);
    if(checkSorted(q))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}
