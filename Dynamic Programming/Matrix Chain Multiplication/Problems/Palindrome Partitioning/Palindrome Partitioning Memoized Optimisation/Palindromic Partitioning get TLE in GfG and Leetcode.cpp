//https://www.geeksforgeeks.org/palindrome-partitioning-dp-17/

class Solution{
public:
    int dp[501][501];
    bool isPalindrome(string str,int i,int j)
    {
        while(i < j)
        {
            if(str[i] != str[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }
    int palindromicPartitionUtil(string str,int i,int j)
    {
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(i>=j){
            dp[i][j] = 0;
            return 0;
        }
        if(isPalindrome(str,i,j)){
            dp[i][j] = 0;
            return 0;
        }
        int ans = INT_MAX,tmp_ans,l,r;
        for(int k=i;k<j;k++){
            if(dp[i][k] != -1){
                l = dp[i][k];
            }
            else{
                 l = palindromicPartitionUtil(str,i,k); 
            }
            if(dp[k+1][j] != -1){
                r = dp[k+1][j];
            }
            else{
                r = palindromicPartitionUtil(str,k+1,j);
            }
            tmp_ans = 1 + l + r;
            //palindromicPartitionUtil(str,i,k) and palindromicPartitionUtil(str,k+1,j) function will return needed minimum partition 
            //number of this two part.And we have to add 1 with this ans cz between this two part we create a partition.
            ans = min(ans,tmp_ans);
        }
        return dp[i][j] = ans;
    }
    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof(dp));
        return palindromicPartitionUtil(str,0,str.size()-1);
    }
};
