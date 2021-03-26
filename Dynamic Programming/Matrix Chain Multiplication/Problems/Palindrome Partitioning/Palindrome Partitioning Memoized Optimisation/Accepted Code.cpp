class Solution{
public:
    int palindromicPartition(string str)
    {
        int n = str.size();
        bool isPalindrome[n+1][n+1];
        //Here we will store the substring which is palindrome itself
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0){
                    isPalindrome[i][j] = true;
                }
                else if(g==1){
                    isPalindrome[i][j] = (str[i]==str[j]);
                } else{
                    if(str[i] == str[j] && isPalindrome[i+1][j-1]==true){
                        isPalindrome[i][j] = true;
                    }else{
                        isPalindrome[i][j] = false;
                    }
                }
            }
        }
        int dp[n];
        dp[0] = 0;
        //here we first find a suffix palindrome and after finding this we will check how many partiton required for remain string char
        for(int j=1;j<n;j++){
            if(isPalindrome[0][j]){
                dp[j] = 0;
            }else{
                int ans = INT_MAX;
                for(int i=j;i>=1;i--){
                    if(isPalindrome[i][j]){//check this substring is palindrome or not
                        if(dp[i-1]<ans){
                           ans = dp[i-1]; 
                        }
                    }
                }
                dp[j] = ans+1;
            }
        }
        return dp[n-1];
    }
};
