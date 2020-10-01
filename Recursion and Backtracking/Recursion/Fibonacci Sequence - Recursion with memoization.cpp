//https://www.youtube.com/watch?v=UxICsjrdlJA&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=5

#include<bits/stdc++.h>
using namespace std;
int F[51];//integar can't store more than +-50th fibonacci number
int fib(int n)
{
    if(F[n] != -1)
    {
        return F[n];
    }
    F[n] = fib(n-1)+fib(n-2);
    return F[n];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<51;i++)
    {
        F[i] = -1;
    }
    F[0]=0,F[1] = 1;
    cout<<fib(n)<<endl;
}
