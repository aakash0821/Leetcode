class Solution {
public:
    
    bool isSafe(vector<string>& board, int row, int col, int n)
    {
        int drow=row;
        int dcol=col;
    
        while(col>=0) 
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            col--;
        }
    
        row=drow;
        col=dcol;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            row--;
            col--;
        }
    
        row=drow;
        col=dcol;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            row++;
            col--;
        }
    return true;
    
    }

    void Solve(vector<vector<string>>& ans, vector<string>& board, int col, int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++)
        {
            if(isSafe(board, row, col, n))
            {
                board[row][col]='Q';
                Solve(ans, board, col+1, n);
                board[row][col]='.';
            }
        }
        return;
    }
   
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        Solve(ans, board, 0, n);
        return ans;
        
        
    }
};