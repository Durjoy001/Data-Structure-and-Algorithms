//https://www.youtube.com/watch?v=i05Ju7AftcM
//https://www.youtube.com/watch?v=yvt0emtFiIE
//https://leetcode.com/problems/n-queens/submissions/

class Solution {
public:
    void solve(int col,vector<vector<string>>&ans,vector<string>&board,
               vector<int>&leftRow,vector<int>&upperDiagonal,vector<int>&lowerDiagonal,int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        /*for upper left to bottom right diagonal the matrix cells whics has same row - coloumn 
        value is in same diagonal*/
         /*for upper right to bottom left diagonal the matrix cells whics has same row + coloumn 
        value is in same diagonal*/
        for(int row = 0;row<n;row++){
            if(leftRow[row] == 0 && lowerDiagonal[row+col] == 0 && upperDiagonal[n-1+col-row] == 0){
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lowerDiagonal[row+col] = 1;
                upperDiagonal[n-1+col-row] = 1;//for avoiding negative value we add n-1,
                //here we fill queen coloumn wise,like after filling 1st column we fill 2nd column, that's why col-row,we can also do this by row wise then it would be row-col
                solve(col+1,ans,board,leftRow,upperDiagonal,lowerDiagonal,n);
                //after finishing recursive call we have to remove all the value which we add before recursive call , it will help us to find next distinict ans
                board[row][col] = '.';
                leftRow[row] = 0;
                lowerDiagonal[row+col] = 0;
                upperDiagonal[n-1+col-row] = 0;
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
        //number of diagonal in a n*n matrix is 2*n - 1
        vector<int> leftRow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0); 
        //every column has to one queen and every row has to one queen
        solve(0,ans,board,leftRow,upperDiagonal,lowerDiagonal,n);//here 0 is for coloumn 0
        return ans;
    }
};
