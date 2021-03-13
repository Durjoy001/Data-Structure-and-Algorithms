#include<bits/stdc++.h>
using namespace std;
int subSetSum(int arr[],int n, int diff)
{
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int needSum = (sum+diff)/2;
    //s1 - s2 = diff
    //s1 + s2 = sum
    //(+ this 2 equation) => 2s1 = diff + sum;
    // s1 = (diff+sum)/2 ; s1 = needSum
    int dp[n+1][needSum + 1];
    //initialize first column with 1 , here sum = 0
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    //initialize first row except dp[0][0] with 0, here n = 0
    for(int i=1;i<=needSum;i++){
        dp[0][i] = 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=needSum;j++){
            if(arr[i-1]>j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
        }
    }
    return dp[n][needSum];
}
int main()
{
    int arr[] = { 1, 1, 2, 3};
    int diff = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<subSetSum(arr, n,diff);
}
