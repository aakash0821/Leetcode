class Solution {
public:
    bool IsSafe(int row, int col, vector<vector<int>>& board, int n)
    {
        int x=row;
        int y=col;
        
        for(int i=0;i<n;i++)
        {
            if(board[row][i]==1 || board[i][col]==1)
            {
                return false;
            }
                
        }
        
        x=row;
        y=col;
        while(x>=0 && y>=0)
        {
            if(board[x][y]==1)
            {
                return false;
            }
            x--;
            y--;
        }
        
        x=row;
        y=col;
        while(x<n && y<n)
        {
            if(board[x][y]==1)
            {
                return false;
            }
            x++;
            y++;
        }
        x=row;
        y=col;
        while(x>=0 && y<n)
        {
            if(board[x][y]==1)
            {
                return false;
            }
            x--;
            y++;
        }
        
        x=row;
        y=col;
        while(x<n && y>=0)
        {
            if(board[x][y]==1)
            {
                return false;
            }
            x++;
            y--;
        }
        
        return true;
        
    }
    void solve(int col, vector<vector<int>>& board,  int n,  int& total)
    {
        if(col==n)
        {
            total++;
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(IsSafe(row, col, board, n))
            {
                board[row][col]=1;
                solve(col+1, board, n, total);
                board[row][col]=0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<int>> board(n, vector<int>(n, 0));
        
        int total=0;
        solve(0, board,  n,  total);
        
        return total;;
    }
};