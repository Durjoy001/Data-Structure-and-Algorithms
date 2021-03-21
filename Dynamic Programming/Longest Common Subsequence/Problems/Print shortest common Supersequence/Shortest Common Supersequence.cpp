//https://leetcode.com/problems/shortest-common-supersequence/

class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();
        int dp[m+1][n+1];
        //Here Find Longest Common Subsequence of Both String
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    dp[i][j] = 0;
                }
                else if(str1[i-1] == str2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        //Following code is used to print shortest supersequence 
        string res="";
        //int len = (n+m)-dp[m][n];//superSequence length
       // Start from the bottom right corner and one by one  push characters in output string 
        int i = m,j = n;
        while(i>0 && j>0)
        {
            // If current character in str1 and str2 are same, then current character is part of shortest supersequence 
            if(str1[i-1] == str2[j-1]){
                res = res + str1[i-1];
                i--,j--;
            }
            // If current character in str1 and str2 are different 
            else if(dp[i-1][j] > dp[i][j-1]){
                //move to max value direction and push_back min value row char
                res = res + str1[i-1];
                i--;
            }
            else{
                //move to max value direction and push_back min value colum char 
                res = res + str2[j-1];
                j--;
            }
        }
       // If str2 reaches its end, put remaining characters of str1 in the result string 
       while(i>0){
           res = res + str1[i-1];
           i--;
       } 
      // If str1 reaches its end, put remaining characters of str2 in the result string
        while(j>0){
            res = res + str2[j-1];
            j--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
