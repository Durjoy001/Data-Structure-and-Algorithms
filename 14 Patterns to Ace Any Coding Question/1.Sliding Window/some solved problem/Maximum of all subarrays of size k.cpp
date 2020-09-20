//https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0

#include<bits/stdc++.h>
using namespace std;
void printKMax(int arr[],int n,int k)
{
    deque<int>Q(k);//create a deque of size k
    int i;
    /* Process first k (or first window) elements of array */
    for(i=0;i<k;i++)
    {
        //for every element previous smaller element is useless
        while(!Q.empty() && arr[i]>=arr[Q.back()])
        {
            Q.pop_back();//remove smaller element
        }
        Q.push_back(i);//push index at rear  of deque
    }
    //process from arr[k] to arr[n-1]
    for( ;i<n;i++)
    {
        // The element at the front of the queue is the largest element of
        // previous window, so print it
        cout<<arr[Q.front()]<<" ";
         // Remove the elements which are out of this window
        while(!Q.empty() && Q.front()<= i-k)
        {
            Q.pop_front();// Remove from front of queue
        }
        // Remove all elements smaller than the currently 
        while(!Q.empty() && arr[i]>=arr[Q.back()])
        {
            Q.pop_back();
        }
        Q.push_back(i);
    }
    cout<<arr[Q.front()]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        printKMax(arr,n,k);
    }
}
/*
1
7 3
12 1 78 90 57 89 56
*/
