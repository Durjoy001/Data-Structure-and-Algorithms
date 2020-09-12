//https://www.geeksforgeeks.org/next-greater-element/
//https://www.geeksforgeeks.org/next-greater-element-in-same-order-as-input/
//https://practice.geeksforgeeks.org/problems/next-larger-element/0

#include<bits/stdc++.h>
using namespace std;
void NGElement(long long int A[],int n)
{
    stack<long long int>s;
    long long int B[n];
    for(int i=n-1;i>=0;i--)
    {
        while( !s.empty() && s.top()<A[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            B[i] = -1;
        }
        else
        {
            B[i] = s.top();
        }

        s.push(A[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        NGElement(A,n);
    }
}
