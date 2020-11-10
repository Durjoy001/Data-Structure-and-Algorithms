//https://www.spoj.com/problems/AGGRCOW/
//https://www.youtube.com/watch?v=SiE1XFhYoaA
//Time complexity O(n*log(n))
////Strategy : Binary Search on Answer.If array is unsorted than also we can use this Binary search strategy.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,ans = 0;
        cin>>n>>c;
        vector<long long int>A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A.begin(),A.end());
        int low = 1;//lowest possible distance would be 1 between two cows
        int high = A[n-1] - A[0];//highest possible distance between two cows would be difference between last and first element
        long long int mid;
        while(low <= high)
        {
            mid = low + (high-low)/2;
            int cow_count = 1,prev = 0;
            for(int i=1;i<n && cow_count<c;i++)
            {
                if((A[i] - A[prev]) >= mid)
                {
                    cow_count++;
                    prev = i;
                }
            }
            if(cow_count >= c)
            {
                ans = mid;
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

