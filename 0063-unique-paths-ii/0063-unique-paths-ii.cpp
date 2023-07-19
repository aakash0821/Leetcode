class Solution {
public:
    
    int Solve(vector<vector<int>>& vec, int i, int j,int m, int n, vector<vector<int>>& dp)
    {
        if(i==m-1 && j==n-1)
        {
            if(vec[i][j]==1) return 0;
            return 1;
        }
        if(i>=m || j>=n) return 0;
        if(vec[i][j]==1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        
        int tk=0;
        int nt=0;
        tk=Solve(vec, i+1, j, m, n, dp);
        nt=Solve(vec,i,j+1,m,n,dp);
        return dp[i][j]=(tk+nt);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        
        vector<vector<int>> dp(m+1,vector<int>(n+1, -1));
        return Solve(obstacleGrid,0,0,m,n,dp);
    }
};