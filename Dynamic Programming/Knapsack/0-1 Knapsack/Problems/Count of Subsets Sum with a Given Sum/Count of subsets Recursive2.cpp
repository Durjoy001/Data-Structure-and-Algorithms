//https://www.geeksforgeeks.org/count-of-subsets-with-sum-equal-to-x-using-recursion/

#include<bits/stdc++.h>
using namespace std;
int subSetSum(int arr[],int n,int i,int sum)
{
    /*if(i == n){
        if(sum == 0){
            return 1;
        }
        return 0;
    }*/
    if(sum == 0){
        return 1;
    }
    if(i == n){
        return 0;
    }
    if(arr[i]>sum){
        return subSetSum(arr,n,i+1,sum);
    }
    return subSetSum(arr,n,i+1,sum) + subSetSum(arr,n,i+1,sum-arr[i]);
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<subSetSum(arr, n, 0, sum);
}
