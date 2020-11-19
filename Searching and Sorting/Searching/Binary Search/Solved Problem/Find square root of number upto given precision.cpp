//https://www.geeksforgeeks.org/find-square-root-number-upto-given-precision-using-binary-search/

#include<bits/stdc++.h>
using namespace std;
// Function to find square root of given number up to given precision
float findSquarRoot(int n,int p)
{
    int l=0,h=n,mid;
    float ans;
    //for computing integral part of square root of number
    while(l<=h)
    {
        mid = l+(h-l)/2;
        if(mid*mid <= n)
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            h = mid-1;
        }
    }
    // For computing the fractional part of square root up to given precision
    float increment = 0.1;
    for(int i=0;i<p;i++)
    {
        while(ans*ans <= n)
        {
            ans = ans + increment;
        }
        //loop terminates when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<findSquarRoot(n,p);
}
