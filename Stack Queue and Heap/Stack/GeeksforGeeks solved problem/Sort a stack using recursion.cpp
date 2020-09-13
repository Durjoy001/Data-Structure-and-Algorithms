//https://www.geeksforgeeks.org/sort-a-stack-using-recursion/

#include<bits/stdc++.h>
using namespace std;
stack<int>s;
void insertBtm(int x)
{
    int a;
    if(s.empty() || s.top() <= x)
    {
        s.push(x);
    }
    else
    {
        a = s.top();
        s.pop();
        insertBtm(x);
        s.push(a);
    }
}
void sortStack()
{
    int x;
    if(!s.empty())
    {
        x = s.top();
        s.pop();
        sortStack();
        insertBtm(x);
    }
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
   sortStack();
   while(!s.empty())
   {
       cout<<s.top()<<" ";
       s.pop();
   }
}
