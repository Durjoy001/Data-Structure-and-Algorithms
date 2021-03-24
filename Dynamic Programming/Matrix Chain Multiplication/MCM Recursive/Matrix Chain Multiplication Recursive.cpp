//https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/

class Solution{
public:
    int MCMutil(int arr[],int i,int j)
    {
        //if i==j  then array size is 1.we can't allow 1 size array.cz it is impossible to form a matrix by using 1 element.
        //if i>j it is also unvalid,so return 0
        if(i >= j){
            return 0;
        }
        int ans = INT_MAX,tmp_ans;
        for(int k=i;k<j;k++){
            //i and j is left most start index and right most end index
            tmp_ans = MCMutil(arr,i,k)+MCMutil(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
            //MCMutil(arr,i,k)+MCMutil(arr,k+1,j) will return first part and second part minimum ans respectivly
            //and arr[i-1]*arr[k]*arr[j] is the cost of multiplying this two part together.
            ans = min(ans,tmp_ans);
        }
        return ans;
    }
    int matrixMultiplication(int N, int arr[])
    {
        //Here i will be 1 and j will be N-1
        //cz matrix Ai has dimension arr[i-1] x arr[i]  
        // so if i = 0 then A0 = arr[-1] x arr[0],this is invalid
        return MCMutil(arr,1,N-1);
    }
};
