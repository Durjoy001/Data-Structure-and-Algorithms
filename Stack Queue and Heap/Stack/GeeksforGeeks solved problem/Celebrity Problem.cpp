//https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1
Time Complexity : O(n)

int getId(int M[MAX][MAX], int n)
{
    int a= 0;
    int b = n-1;
    while(a<b)
    {
        if(M[a][b]==1)
        {
            a++;
        }
        else
        {
            b--;
        }
    }
    for(int i=0;i<n;i++)
    {
        if((i != a) && (M[a][i] == 1 || M[i][a]==0))
        {
            return -1;
        }
    }
    return a;
}
