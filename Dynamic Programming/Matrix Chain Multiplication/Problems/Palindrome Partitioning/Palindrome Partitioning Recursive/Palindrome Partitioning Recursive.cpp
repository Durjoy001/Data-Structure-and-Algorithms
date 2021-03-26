//https://www.geeksforgeeks.org/palindrome-partitioning-dp-17/

class Solution{
public:
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
        if(i>=j || isPalindrome(str,i,j)){
            return 0;
        }
        int ans = INT_MAX,tmp_ans;
        for(int k=i;k<j;k++){
            tmp_ans = 1 + palindromicPartitionUtil(str,i,k)+palindromicPartitionUtil(str,k+1,j);
            //palindromicPartitionUtil(str,i,k) and palindromicPartitionUtil(str,k+1,j) function will return needed minimum partition 
            //number of this two part.And we have to add 1 with this ans cz between this two part we create a partition.
            ans = min(ans,tmp_ans);
        }
        return ans;
    }
    int palindromicPartition(string str)
    {
        return palindromicPartitionUtil(str,0,str.size()-1);
    }
};
