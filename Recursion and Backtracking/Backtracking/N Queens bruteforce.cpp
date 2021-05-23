//https://leetcode.com/problems/n-queens/submissions/

class Solution {
public:
    bool isSafe(int row,int col,vector<string>&board,int n){
        int r = row,c = col;
        //check for lower right to upper left diagonal
        while(r>=0 && c>=0){
            if(board[r][c] == 'Q'){
                return false;
            }
            r--,c--;
        }
        r = row;
        c = col;
        //check for same row
        while(c>=0){
            if(board[r][c] == 'Q'){
                return false;
            }
            c--;
        }
        r = row,c = col;
        //check for upper right to lower left diagonal
        while(r<n && c>=0){
            if(board[r][c] == 'Q'){
                return false;
            }
            r++,c--;
        }
        return true;
    }
    void solve(int col,vector<vector<string>>&ans,vector<string>&board,int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col] = 'Q';
                solve(col+1,ans,board,n);
                board[row][col] = '.';//after finish the recursive call change the cell value queen to dot for further recursive call
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        //queens can attack diagonally vertically and horizontally
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        //every column has to one queen and every row has to one queen
        solve(0,ans,board,n);//here 0 is for coloumn 0
        return ans;
    }
};
