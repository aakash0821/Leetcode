class Solution {
public:
    
    bool solve(int i, int j, string& s1, string& s2, vector<vector<int>>& dp)
    {
        if(i<0 && j<0)
        {
            return true;
        }
        
        if(i<0 && j>=0)
        {
            return false;
        }
        
        if(j<0 && i>=0)
        {
            for(int p=0;p<=i;p++)
            {
                if(s1[p]!='*')
                {
                    return false;
                }
            }
            return true;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        if(s1[i]==s2[j] || s1[i]=='?')
        {
            return dp[i][j]=solve(i-1, j-1, s1, s2, dp);
        }
        
        if(s1[i]=='*')
        {
            return dp[i][j]=solve(i-1, j, s1, s2, dp) | solve(i, j-1, s1, s2, dp);
        }
        return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {
        int n1=s.length();
        int n2=p.length();
        vector<vector<int>> dp(n2+1, vector<int>(n1+1, -1));
        return solve(n2-1, n1-1, p, s, dp);
    }
};