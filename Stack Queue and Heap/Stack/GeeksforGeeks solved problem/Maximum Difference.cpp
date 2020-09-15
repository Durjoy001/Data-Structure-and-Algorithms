//https://practice.geeksforgeeks.org/problems/maximum-difference/1


void rightSm(int A[],int n,int RS[])
{
    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() && s.top() >= A[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            RS[i] = 0;
        }
        else
        {
            RS[i] = s.top();
        }
        s.push(A[i]);
    }
}
/*You are required to complete this method */

int findMaxDiff(int A[], int n)
{
    int RS[n],LS[n],ans=0;
    rightSm(A,n,RS);
    reverse(A,A+n);
    rightSm(A,n,LS);
    reverse(LS,LS+n);
    for(int i=0;i<n;i++)
    {
        ans = max(ans,abs(RS[i]-LS[i]));
    }
    return ans;
}
