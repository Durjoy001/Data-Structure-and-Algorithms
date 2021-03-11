//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/

#include<bits/stdc++.h>
using namespace std;
// Returns true if there is a subset of arr[] with sum equal to given sum
bool isSubSet(int arr[],int n,int sum)
{
    bool dp[n+1][sum+1];
    //initialize first column with True cz here sum = 0 and initialize first row except dp[0][0] with false cz here element n = 0.


    // If sum is 0, then answer is true
    for (int i = 0; i <= n; i++){
        dp[i][0] = true;//first column
    }
    // If sum is not 0 and set is empty, then answer is false
    for (int i = 1; i <= sum; i++){
        dp[0][i] = false;//first row
    }
    //dp[0][0] will be true,here arr is empty and sum is 0. sum is 0 that's why it is true.also empty subset sum is 0
    // Fill the subset table in botton up manner
    // The value of dp[i][j] will be true if there is a subset of arr[0..i-1] with sum equal to j
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){//here j means SUM
            if(arr[i-1]>j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];//jeta theke true ashbe sta dp table a store korbo.
                //Here we use OR || operator , because this will return true value if one
                //of the dp table cell is false and other one is true.
                // our main target is if one of this dp cell is true then store this in dp[i][j]
                // T || F = T , F || T = T, T || T = T , F || F = F
            }
        }
    }
    return dp[n][sum];
}
int main()
{
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
