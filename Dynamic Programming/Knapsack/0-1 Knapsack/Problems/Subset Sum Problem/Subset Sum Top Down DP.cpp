//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/

#include<bits/stdc++.h>
using namespace std;
int dp[2000][2000];
// Returns true if there is a subset of arr[] with sum equal to given sum
bool isSubSet(int arr[],int n,int sum)
{
    if(sum == 0){
        return true;
    }
    if(n==0){
        return false;
    }
    // If the value is not -1 it means it already call the function
    // with the same value.it will save our from the repetation.
    if(dp[n][sum] != -1){
        return dp[n][sum];
    }
    if(sum < arr[n-1]){
        return dp[n][sum] = isSubSet(arr,n-1,sum);
    }
    else{
        // Here we do two calls because we don't know which value is full-fill our critaria that's why we doing two calls
        return dp[n][sum] = isSubSet(arr,n-1,sum) || isSubSet(arr,n-1,sum-arr[n-1]);
    }
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int arr[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    if(isSubSet(arr,n,sum)){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"FALSE"<<endl;
    }
}
