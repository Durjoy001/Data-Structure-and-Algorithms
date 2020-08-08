#include<bits/stdc++.h>
using namespace std;
void find_Common_Element(long long int A[],long long int B[],long long int C[],long long int n1,long long int n2,long long int n3)
{
    long long int i=0,j=0,k=0,F=0;
    map<long long int,long long int>m;
    while(i<n1 && j<n2 && k<n3)
    {
        if(A[i]==B[j] && B[j]==C[k])
        {
            F=1;
            m[A[i]]++;
            if(m[A[i]] == 1)
            {
                cout<<A[i]<<" ";
            }
            i++,j++,k++;
        }
        else if(A[i]<B[j])
        {
            i++;
        }
        else if(B[j]<C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    if(F==1)
    {
        cout<<endl;
    }
    if(F==0)
    {
        cout<<-1<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n1,n2,n3;
        cin>>n1>>n2>>n3;
        long long int A[n1],B[n2],C[n3];
        for(int i=0;i<n1;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n2;i++)
        {
            cin>>B[i];
        }
        for(int i=0;i<n3;i++)
        {
            cin>>C[i];
        }
        find_Common_Element(A,B,C,n1,n2,n3);
    }
    return 0;
}
