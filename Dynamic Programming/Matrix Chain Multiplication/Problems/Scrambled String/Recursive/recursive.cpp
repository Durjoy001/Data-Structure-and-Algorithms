
int Solution::isScramble(const string A, const string B) {
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
    //dui part ar char equal naki ta check korbo na scrambled naki ta check korbo .
    //karon dui part ar jkuno akta part hoyto age thekei swap hoye change thakte pare.
    for(int i=1;i<n;i++){
        //Condition 1 : No Swap
        if(isScramble(A.substr(0,i),B.substr(0,i)) &&
           isScramble(A.substr(i,n-i), B.substr(i,n-i))){
               return true;
           }
        //Condition 2 : Swap
        if(isScramble(A.substr(0,i),B.substr(n-i,i)) && 
           isScramble(A.substr(i,n-i),B.substr(0,n-i))){
               return true;
           }
        //In substr function first variable is substring starting index and 2nd variale is substring total number of char
        //If one if this condition is true then return true else check again
    }
    // If none of the above conditions are satisfied
    return false;
}
