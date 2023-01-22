class Solution {
    bool isSafe(vector<string> &board,int row, int col)
    {
        int N=board.size();
        if(row>=N||col>=N) return false;
        for(int i=row;i>=0;--i)
            if(board[i][col]=='Q') return false;
        for(int i=row,j=col;i>=0&&j>=0;--i,--j)
            if(board[i][j]=='Q') return false;
        for(int i=row,j=col;i>=0&&j<N;--i,++j)
            if(board[i][j]=='Q') return false;
        return true;
    }
    void solve(vector<vector<string>> &result,vector<string> &board ,int row)
    {
        int N = board.size();
        if(row>=N)
        {
            result.push_back(board);
            return;
        }
        for(int col=0;col<N;++col)
        {
            if(isSafe(board,row,col))
            {
                board[row][col] = 'Q';
                solve(result,board,row+1);
                board[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        string defaultString="";
        for(int i=0;i<n;++i)
            defaultString+=".";
        vector<string> board(n,defaultString);
        solve(result,board,0);
        return result;
    }
};