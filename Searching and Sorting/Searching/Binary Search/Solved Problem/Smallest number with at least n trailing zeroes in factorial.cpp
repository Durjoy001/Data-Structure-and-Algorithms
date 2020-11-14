//https://www.geeksforgeeks.org/smallest-number-least-n-trailing-zeroes-factorial/

class Solution
{
    public:
        bool check(int mid,int n)
        {
            int Z = 5,res=0;
            while(Z <= mid)
            {
                res = res + (mid/Z);
                Z = Z*5;
            }
            if(res >= n)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        int findNum(int n)
        {
           int low = 0;
           int high = 5*n;
           while(low <= high)
           {
               int mid = low + (high-low)/2;
               if(check(mid,n))
               {
                   high = mid-1;
               }
               else
               {
                   low = mid+1;
               }
           }
           return low;
        }
};
