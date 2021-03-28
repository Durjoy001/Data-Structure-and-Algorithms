
class Solution {
public:
map<string,bool>m;
int isScrambleUtil(string A,string B)
{
    // Strings of non-equal length cant' be scramble strings
    if(A.length() != B.length()){
        return false;
    }
    int n = A.length();
    // Equal strings are scramble strings
    if(A == B){
        return true;
    }
    if(n == 1){//they are not equal but size is one so return false
        return false;
    }
    string key = A+B;
    if(m.find(key) != m.end()){
        return m[key];
    }
    //if the total char of two string is different then they can't be scramble string
    string copy_S1 = A, copy_S2 = B;
    sort(copy_S1.begin(), copy_S1.end());
    sort(copy_S2.begin(), copy_S2.end());
    if (copy_S1 != copy_S2) {
        return false;
    }
    //dui part ar char equal naki ta check korbo na scrambled naki ta check korbo .
    //karon dui part ar jkuno akta part hoyto age thekei swap hoye change thakte pare.
    for(int i=1;i<n;i++){
        //Condition 1 : No Swap
        if(isScrambleUtil(A.substr(0,i),B.substr(0,i)) &&
           isScrambleUtil(A.substr(i,n-i), B.substr(i,n-i))){
               return m[key] =  true;
           }
        //Condition 2 : Swap
        if(isScrambleUtil(A.substr(0,i),B.substr(n-i,i)) && 
           isScrambleUtil(A.substr(i,n-i),B.substr(0,n-i))){
               return m[key] =  true;
           }
        //In substr function first variable is substring starting index and 2nd variale is substring total number of char
        //If one if this condition is true then return true else check again
    }
    // If none of the above conditions are satisfied
    return m[key] =  false;
}
bool isScramble(string s1, string s2) {
        m.clear();
        return isScrambleUtil(s1,s2);
    }
};
