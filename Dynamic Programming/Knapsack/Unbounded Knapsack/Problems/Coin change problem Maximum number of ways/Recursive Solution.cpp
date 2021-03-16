//https://www.geeksforgeeks.org/coin-change-dp-7/
class solution
{
  public:
    long long int count( int S[], int m, int n )
    {
       // If n is 0 then there is 1 solution (do not include any coin) 
       if(n == 0){
           return 1;
       }
       //if there are no coin available then return 0 (no solution exist)
       if(m == 0){
           return 0;
       }
       if(S[m-1]>n){
          return count(S,m-1,n);//not include this coin
       }
       else{
           return count(S,m-1,n) + count(S,m,n-S[m-1]);//not include + include coin
       }
    }
};
