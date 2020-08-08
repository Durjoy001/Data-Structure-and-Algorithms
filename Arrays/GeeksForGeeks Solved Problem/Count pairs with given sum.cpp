//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum/0

                                     /* Time complexity O(n^2)*/
#include<bits/stdc++.h>
using namespace std;
int Total_pairs(int arr[],int n,int k)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,Z;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Z = Total_pairs(arr,n,k);
        cout<<Z<<endl;
    }
}

                                 /* Better Solution**/
                                 /* Time Complexity O(n)*/

#include<bits/stdc++.h>
using namespace std;
int Total_pairs(int arr[],int n,int k)
{
    int ans = 0;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        ans = ans+m[k-arr[i]];
        if(k-arr[i]==arr[i])
        {
            ans--;
        }
    }
    return ans/2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,Z;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Z = Total_pairs(arr,n,k);
        cout<<Z<<endl;
    }
    /* 6 8
       4 6 2 6 2 2 */
}


