class Solution {
public:
    void isAdd(vector<vector<int>>& board, int n, vector<vector<string>>& vec, vector<string>& temp)
    {
        for(int i=0;i<n;i++)
        {
            string test="";
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==1)
                {
                    test+="Q";
                }
                else
                {
                    test+=".";
                }
            }
            temp.push_back(test);
        }
        vec.push_back(temp);
        temp.clear();
        return;
        
       
    }
    
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
    void solve(int col, vector<vector<int>>& board, vector<vector<string>>& ans, int n, vector<string>& temp)
    {
        if(col==n)
        {
            isAdd(board, n, ans, temp);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(IsSafe(row, col, board, n))
            {
                board[row][col]=1;
                solve(col+1, board, ans, n, temp);
                board[row][col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<int>> board(n, vector<int>(n, 0));
        vector<vector<string>> vec;
        vector<string> temp;
        
        solve(0, board, vec, n, temp);
        
        return vec;
        
        
    }
};