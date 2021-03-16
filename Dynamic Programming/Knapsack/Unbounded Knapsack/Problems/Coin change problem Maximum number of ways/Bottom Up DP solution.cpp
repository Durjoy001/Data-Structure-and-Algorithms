
class solution
{
  public:
    long long int count( int S[], int m, int n )
    {
       long long int dp[m+1][n+1];
       //initilaize first colum with 1 , cz here sum = 0(n=0) and we can find 1 solution by giving no coins
       for(int i=0;i<=m;i++){
           dp[i][0] = 1;
       }
       //initialize first row with 0, cz here m=0(number of coins=0) and we can't make any solution
       for(int i=1;i<=n;i++){
           dp[0][i] = 0;
       }
       for(int i=1;i<=m;i++){
           for(int j=1;j<=n;j++){
               if(S[i-1]>j){
                   dp[i][j] = dp[i-1][j];
               }
               else{
                   dp[i][j] = dp[i-1][j] + dp[i][j-S[i-1]];
               }
           }
       }
       return dp[m][n];
    }
};
