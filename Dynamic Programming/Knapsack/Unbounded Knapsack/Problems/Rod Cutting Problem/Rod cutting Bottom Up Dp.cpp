//https://www.geeksforgeeks.org/cutting-a-rod-dp-13/

#include<bits/stdc++.h>
using namespace std;
int unbounded_knapsack(int price[],int length[],int n,int max_len)
{
    int dp[n+1][max_len+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=max_len;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=max_len;j++){
            if(length[i-1]<=j){
                dp[i][j] = max(dp[i-1][j],price[i-1]+dp[i][j-length[i-1]]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][max_len];
}
int main()
{
    int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
    int n = sizeof(price) / sizeof(price[0]);
    int length[n];
    for (int i = 0; i < n; i++) {
        length[i] = i + 1;
    }
    int Max_len = n;

    // Function Call
    cout << "Maxmum obtained value  is "
         << unbounded_knapsack(price, length, n, Max_len) << endl;
}
