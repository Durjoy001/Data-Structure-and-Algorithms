//https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/

int lcs(int x, int y, string s1, string s2){
    //Base case
    if(x == 0 || y==0){
        return 0;
    }
    //if last charcter of this both string matched then minimized their lenght by 1, and add 1 with the answer  
    if(s1[x-1] == s2[y-1]){
        return 1+lcs(x-1,y-1,s1,s2);
    }
    //else minimized first string length by 1 and call the function . Then in same way minimized second string length by 1 and call the function
    //then at last take the maximum answer
    else{
        return max(lcs(x-1,y,s1,s2),lcs(x,y-1,s1,s2));
    }
}
