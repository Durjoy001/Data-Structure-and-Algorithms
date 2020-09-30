//https://www.geeksforgeeks.org/recursion/
//https://www.youtube.com/watch?v=_OmRGjbyzno&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO

#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    //base condition
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}
