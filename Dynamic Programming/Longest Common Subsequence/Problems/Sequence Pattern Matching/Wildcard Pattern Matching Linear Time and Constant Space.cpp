//https://www.geeksforgeeks.org/dynamic-programming-wildcard-pattern-matching-linear-time-constant-space/

class Solution{
  public:
/*You are required to complete this method*/
    int wildCard(string pattern,string str)
    {
        int m = pattern.size();
        int n = str.size();
        int i=0,j=0,index_str=-1,index_pat=-1;
        while(i < n){
            if(j < m && ((str[i] == pattern[j]) || pattern[j] == '?'))
            {
                i++,j++;
            }
            else if(j < m && pattern[j] == '*'){
                index_str = i;
                index_pat = j;
                j++;
            }
            else if(index_pat != -1){
                i = index_str+1;
                j = index_pat+1;
                index_str++;
            }
            else{
                return false;
            }
        }
        while(j < m && pattern[j] == '*'){
            j++;
        }
        if(j == m){
            return 1;
        }
        return 0;
    }
};
