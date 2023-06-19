class Solution {
public:
    
    
    bool isSafe(vector<string>& board, int row, int col, int n)
    {
        int dupr=row;
        int dcol=col;
        
        
        while(col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            col--;
        }
        
        
        col=dcol;
        row=dupr;
        
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            row--;
            col--;
        }
        
         col=dcol;
        row=dupr;
        
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
    
    
    void Solve(vector<string>& board, int col, int n, int& ans)
    {
        if(col==n)
        {
            ans++;
            return ;
        }
        //int ans=0;
        for(int row=0;row<n;row++)
        {
            if(isSafe(board, row, col, n))
            {
                board[row][col]='Q';
               Solve(board, col+1, n, ans);
                board[row][col]='.';
            }
           
        }
        return;
    }
    
    int totalNQueens(int n) {
       vector<string> board(n);
       string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        int ans=0;
        Solve(board, 0, n, ans);
        return ans;
    }
};