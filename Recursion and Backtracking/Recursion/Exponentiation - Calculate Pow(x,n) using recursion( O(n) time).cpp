//https://www.youtube.com/watch?v=wAyrtLAeWvI&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=7

#include<bits/stdc++.h>
using namespace std;
int pow(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    return x*pow(x,n-1);
}
int main()
{
   int n,x;
   cin>>x>>n;
   cout<<pow(x,n);
}
