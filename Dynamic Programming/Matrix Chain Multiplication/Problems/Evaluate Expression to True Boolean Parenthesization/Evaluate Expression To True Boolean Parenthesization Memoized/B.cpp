//https://www.geeksforgeeks.org/boolean-parenthesization-problem-dp-37/

int dp[201][201][2];
class Solution{
public:
    int parenthesis_count(string S,int i,int j,bool is_true){
        if(i>j){
            return 0;
        }
        if(i==j){
            if(is_true==true){
                if(S[i]=='T'){
                    return 1;
                }else{
                    return 0;
                }
            }else{
                if(S[i]=='F'){
                    return 1;
                }else{
                    return 0;
                }
            }
        }
        if(dp[i][j][is_true] != -1){
            return dp[i][j][is_true];
        }
        int ans = 0;
        for(int k=i+1;k<=j-1;k = k+2){//k is always a operator
            int l_true,l_false,r_true,r_false;
            if(dp[i][k-1][true] != -1){
                l_true = dp[i][k-1][true];
            }else{// Count no. of True in left partition
                l_true = parenthesis_count(S,i,k-1,true);
            }
            if(dp[i][k-1][false] != -1){
                l_false = dp[i][k-1][false];
            }else{// Count no. of False in left partition
                l_false = parenthesis_count(S,i,k-1,false);
            }
            if(dp[k+1][j][true] != -1){
                r_true = dp[k+1][j][true];
            }else{// Count no. of True in right partition
                r_true = parenthesis_count(S,k+1,j,true);
            }
            if(dp[k+1][j][false] != -1){
                r_false = dp[k+1][j][false];
            }else{// Count no. of False in right partition
                r_false = parenthesis_count(S,k+1,j,false);
            }
            if(S[k] == '&'){
                if(is_true == 1){//is_treu==true
                    ans = ans + l_true*r_true;
                }else{
                    ans = ans + l_true*r_false + l_false*r_true + l_false*r_false;
                }
            }
            else if(S[k] == '|'){
                if(is_true==1){//is_true===true
                    ans = ans + l_true*r_false + l_false*r_true + l_true*r_true;
                }else{
                    ans = ans + l_false*r_false;
                }
            }
            else{
                if(is_true == 1){//is_true==true
                    ans = ans + l_false*r_true + l_true*r_false;
                }else{
                    ans = ans + r_true*l_true + r_false*l_false;
                }
            }
            //we must have to store ans here else we get TLE
            dp[i][j][is_true] = ans%1003;
        }
        return dp[i][j][is_true];
    }
    int countWays(int N, string S){
         memset(dp,-1,sizeof(dp));
         return parenthesis_count(S,0,N-1,true);
    }
};
