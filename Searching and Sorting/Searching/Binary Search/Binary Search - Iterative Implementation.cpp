//https://www.youtube.com/watch?v=OAZc1zwjERU&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j&index=2

#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int x)
{
    int low = 0;
    int high = n-1;
    int mid;
    while(low <= high)
    {
        mid = low + (high - low)/2;// low+high may overflow that's why we use this
        //sometimes high + low can exceed the maximum value that an integer can store.
        //(high+low)/2 and above equation is same , but for avoiding overflow we are not calculate (low+high)
        if(x == arr[mid])
        {
            return mid;//found x,return (exit)
        }
        else if(x < arr[mid])//x lies before mid
        {
                high = mid - 1;
        }
        else  //x lies after mid
        {
                low = mid + 1;
        }
    }
    return -1;//element not found.
}
int main()
{
    int arr[] = {2,4,5,7,13,14,15,23};
    cout<<"Enter a Number: "<<endl;
    int x;
    cin>>x;
    int index = binarySearch(arr,8,x);
    if(index != -1)
    {
        cout<<"Element found at index "<<index<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}
