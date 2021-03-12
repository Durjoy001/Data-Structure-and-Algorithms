//https://www.geeksforgeeks.org/count-of-subsets-with-sum-equal-to-x/

#include<bits/stdc++.h>
using namespace std;
int subSetSum(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];
    //initialize first column with 1 , here sum = 0
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    //initialize first row except dp[0][0] with 0, here n = 0
    for(int i=1;i<=sum;i++){
        dp[0][i] = 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]>j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
        }
    }
    return dp[n][sum];
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<subSetSum(arr, n,sum);
}
