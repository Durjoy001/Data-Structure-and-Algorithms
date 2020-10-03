//https://www.youtube.com/watch?v=nO7_qu2kd1Q&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=8

#include<bits/stdc++.h>
using namespace std;
//function to calculate (x^n) mod m
int mod(int x,int n,int m)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        int y = mod(x,n/2,m);
        return (y*y)%m;
    }
    else
    {
        return ((x%m)*mod(x,n-1,m))%m;
    }

}
int main()
{
    int x,n,m;
    cin>>x>>n>>m;
    cout<<mod(x,n,m)<<endl;
}
