//https://www.geeksforgeeks.org/weighted-job-scheduling-log-n-time/

#include<bits/stdc++.h>
using namespace std;
// A job has start time, finish time and profit.
class Job{
public:
    int start,finish,profit;
};
// A utility function that is used for sorting events according to finish time
bool myfunction(Job s1,Job s2)
{
    return (s1.finish<s2.finish);
}
// A Binary Search based function to find the latest job 
// (before current job) that doesn't conflict with current job. 
//"index" is index of the current job.  This function 
// returns -1 if all jobs before index conflict with it. 
// The array arr[] is sorted in increasing order of finish time. 
int binarySearch(Job arr[],int index)
{
    int l = 0,h = index,mid;
    while(l<=h)
    {
        mid = l + (h-l)/2;
        if(arr[mid].finish <= arr[index].start)
        {
            if(arr[mid+1].finish <= arr[index].start)
            {
                l = mid+1;
            }
            else
            {
                return mid;
            }
        }
        else
        {
            h = mid-1;
        }
    }
    return -1;
}
int findMaxProfit(Job arr[],int n)
{
    //Sort jobs according to finish time
    sort(arr, arr+n, myfunction);
    // Create an array to store solutions of subproblems.  table[i]
    // stores the profit for jobs till arr[i] (including arr[i])
    int table[n];
    table[0] = arr[0].profit;
    // Fill entries in table[]
    for(int i=1;i<n;i++)
    {
        // Find profit including the current job
        int inclProf = arr[i].profit;
        int l = binarySearch(arr,i);
        if(l != -1)
        {
            inclProf = inclProf + table[l];
        }
        // Store maximum of including and excluding job
        table[i] = max(inclProf,table[i-1]);
    }
    int res = table[n-1];
    return res;
}
int main()
{
    Job arr[] = {{3,10,20},{1, 2, 50}, {6, 19, 100}, {2, 100, 200}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findMaxProfit(arr,n)<<endl;
    return 0;
}
