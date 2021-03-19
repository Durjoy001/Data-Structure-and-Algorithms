//https://www.geeksforgeeks.org/printing-longest-common-subsequence/

#include<bits/stdc++.h>
using namespace std;
void lcs(string a,string b)
{
    int n = a.size();
    int m = b.size();
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i == 0 || j==0){
                dp[i][j] = 0;
            }
            else if(a[i-1] == b[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int len = dp[n][m];
    vector<char>LCS(len+1);
    cout<<len<<endl;
    int i = n,j = m;
    // Start from the right-most-bottom-most corner and one by one store characters in LCS
    while(i>0 && j>0){
        // If current character in a and b are same, then current character is part of LCS
        if(a[i-1] == b[j-1]){
            LCS[len] = a[i-1];
            i--,j--,len--;
        }
        else if(dp[i-1][j] >= dp[i][j-1]){
            i--;
        }
        else{
            j--;
        }
    }
    for(int i=0;i<LCS.size();i++){
        cout<<LCS[i];
    }
}
int main()
{
    string a = "AGGTAB";
    string b = "GXTXAYB";
    lcs(a,b);
}
