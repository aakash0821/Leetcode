class Solution {
public:
    int Take(int n)
    {
        int count=0;
        int i=1;
        while(i*i<=n)
        {
            count++;
            i++;
        }
        return count;
    }
    
    int Solve(vector<vector<int>>& dp, int i,  int target)
    {
       
        
        if(target==i*i)
        {
            return 1;
        }
        
        if(i*i>target)
        {
            return 1e9;
        }
        if(dp[target][i]!=-1)
        {
            return dp[target][i];
        }
        
        int tk=INT_MAX;
        if(target>=i*i)
        {
            tk=1+Solve(dp, i, target-i*i);
        }
        int nt=0+Solve(dp, i+1, target);
        return dp[target][i]=min(tk, nt);
        
    }
    int numSquares(int n) {
        int take=Take(n);
        vector<vector<int>> dp(n+1, vector<int>(take+2, -1));
        return Solve(dp, 1, n);
    }
};