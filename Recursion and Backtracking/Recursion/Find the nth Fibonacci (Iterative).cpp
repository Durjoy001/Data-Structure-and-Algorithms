//https://www.youtube.com/watch?v=GM9sA5PtznY&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=2

#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    //base condition
    if(n<=1)
    {
        return n;
    }
    int F1 = 0,F;
    int F2 = 1;
    //find nth Fibonacci number
    for(int i=2;i<=n;i++)
    {
        F = F1+F2;
        F1 = F2;
        F2 = F;
    }
    return F;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}
