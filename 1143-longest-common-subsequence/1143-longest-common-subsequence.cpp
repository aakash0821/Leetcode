class Solution {
public:
    
    int Solve(string t1, string t2, int i, int j, vector<vector<int>>& dp)
    {
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(t1[i]==t2[j]) return dp[i][j]=1+Solve(t1, t2, i-1, j-1, dp);
        return dp[i][j]=max(Solve(t1, t2, i-1, j, dp), Solve(t1, t2, i, j-1, dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int l1=text1.length();
        int l2=text2.length();
        vector<vector<int>> dp(l1+1, vector<int>(l2+1, 0));
        for(int i=1;i<=l1;i++)
        {
            for(int j=1;j<=l2;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        return dp[l1][l2];
        
    }
};