//https://www.geeksforgeeks.org/wildcard-pattern-matching/

class Solution{
  public:
/*You are required to complete this method*/
    int wildCard(string pattern,string str)
    {
        int m = pattern.size();
        int n = str.size();
        // empty pattern can only match with  empty string
        if(m == 0){
            return (n == 0);
        }
        bool dp[n+1][m+1];
        //dp[i][j] is true if first i characters in given string matches the first j characters of pattern. 
        //INITIALIZATION...............
        // pattern is null , all dp[i][0] = false;so,
        memset(dp,false,sizeof(dp));//we also set all cell as false
        // both str and pattern are null
        dp[0][0] = true; 
        //str is null but pattern is not null
        // Only '*' can match with empty string
        for(int i=1;i<=m;i++){
            //dp[0][i] = T[0][i - 1] if pattern[i – 1] is '*' 
            if(pattern[i-1] == '*'){
                dp[0][i] = dp[0][i-1];
            }
        }
        //fill the table
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
            // Two cases if we see a '*'
            // a) We ignore ‘*’ character and move to next character in the pattern, i.e., ‘*’ indicates an empty sequence.
            // b) '*' character matches with ith character in input
            if(pattern[j-1] == '*'){
                dp[i][j] = dp[i][j-1] || dp[i-1][j];//OR operator take true value if one of the cell is true
            }
            // Current characters are considered as matching in two cases
            // (a) current character of pattern is '?'
            // (b) characters actually match
            else if(pattern[j-1] == '?' || (str[i-1] == pattern[j-1])){
                dp[i][j] = dp[i-1][j-1];
            }
            // If characters don't match
            else{
                dp[i][j] = false;
            }
            }
        }
        if(dp[n][m] == true){
            return 1;
        }
        return 0;
    }
};
