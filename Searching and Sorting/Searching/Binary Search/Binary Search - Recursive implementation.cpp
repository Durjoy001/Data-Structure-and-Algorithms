//https://www.youtube.com/watch?v=-bQ4UzUmWe8&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j&index=3

#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int low,int high,int x)
{
    if(low>high)//base condition
    {
        return -1;
    }
    int mid = low + (high-low)/2;
    if( x == arr[mid])
    {
        return mid;
    }
    else if(x < arr[mid])
    {
        binarySearch(arr,low,mid-1,x);
    }
    else
    {
        binarySearch(arr,mid+1,high,x);
    }
}
int main()
{
    int arr[] = {2,4,5,7,13,14,15,23};
    cout<<"Enter a Number: "<<endl;
    int x;
    cin>>x;
    int index = binarySearch(arr,0,7,x);
    if(index != -1)
    {
        cout<<"Element found at index "<<index<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}
