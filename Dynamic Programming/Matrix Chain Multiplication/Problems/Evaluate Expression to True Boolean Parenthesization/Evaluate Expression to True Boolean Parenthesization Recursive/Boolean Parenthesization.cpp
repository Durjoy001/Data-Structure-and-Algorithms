//https://www.geeksforgeeks.org/boolean-parenthesization-problem-dp-37/

class Solution{
public:
    int parenthesis_count(string S,int i,int j,bool is_true){
        if(i>j){
            return 0;
        }
        if(i==j){
            if(is_true==true){
                if(S[i]=='T'){
                    return 1;
                }else{
                    return 0;
                }
            }else{
                if(S[i]=='F'){
                    return 1;
                }else{
                    return 0;
                }
            }
        }
        int ans = 0;
        for(int k=i+1;k<=j-1;k = k+2){//k is always a operator
            int l_true = parenthesis_count(S,i,k-1,true);
            int l_false = parenthesis_count(S,i,k-1,false);
            int r_true = parenthesis_count(S,k+1,j,true);
            int r_false = parenthesis_count(S,k+1,j,false);
            if(S[k] == '&'){
                if(is_true == 1){//is_treu==true
                    ans = ans + l_true*r_true;
                }else{
                    ans = ans + l_true*r_false + l_false*r_true + l_false*r_false;
                }
            }
            else if(S[k] == '|'){
                if(is_true==1){//is_true===true
                    ans = ans + l_true*r_false + l_false*r_true + l_true*r_true;
                }else{
                    ans = ans + l_false*r_false;
                }
            }
            else{
                if(is_true == 1){//is_true==true
                    ans = ans + l_false*r_true + l_true*r_false;
                }else{
                    ans = ans + r_true*l_true + r_false*l_false;
                }
            }
        }
        return ans;
    }
    int countWays(int N, string S){
         return parenthesis_count(S,0,N-1,true);
    }
};
