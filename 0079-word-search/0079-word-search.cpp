class Solution {
public:
    
  
    vector<int> veci{-1,0,1,0};
    vector<int> vecj{0,1,0,-1};
    
    bool Solve(vector<vector<char>>& board, int i, int j, int si, string word)
    {
        if(si==word.length()) return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[i].size()) return false;
        if(board[i][j]!=word[si])  return false;
        
        
        char test=board[i][j];
        board[i][j]='@';
        for(int d=0;d<4;d++)
        {
            bool result=Solve(board, i+veci[d], j+vecj[d],si+1, word);
            if(result)
            {
                board[i][j]=test;
                return result;
            }
        }
        board[i][j]=test;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(board[i][j]!=word[0]) continue;
               bool res=Solve(board, i, j,0, word);
               
               
               if(res) return true;
              
           }
       }
        return false;
        
        
    }
};