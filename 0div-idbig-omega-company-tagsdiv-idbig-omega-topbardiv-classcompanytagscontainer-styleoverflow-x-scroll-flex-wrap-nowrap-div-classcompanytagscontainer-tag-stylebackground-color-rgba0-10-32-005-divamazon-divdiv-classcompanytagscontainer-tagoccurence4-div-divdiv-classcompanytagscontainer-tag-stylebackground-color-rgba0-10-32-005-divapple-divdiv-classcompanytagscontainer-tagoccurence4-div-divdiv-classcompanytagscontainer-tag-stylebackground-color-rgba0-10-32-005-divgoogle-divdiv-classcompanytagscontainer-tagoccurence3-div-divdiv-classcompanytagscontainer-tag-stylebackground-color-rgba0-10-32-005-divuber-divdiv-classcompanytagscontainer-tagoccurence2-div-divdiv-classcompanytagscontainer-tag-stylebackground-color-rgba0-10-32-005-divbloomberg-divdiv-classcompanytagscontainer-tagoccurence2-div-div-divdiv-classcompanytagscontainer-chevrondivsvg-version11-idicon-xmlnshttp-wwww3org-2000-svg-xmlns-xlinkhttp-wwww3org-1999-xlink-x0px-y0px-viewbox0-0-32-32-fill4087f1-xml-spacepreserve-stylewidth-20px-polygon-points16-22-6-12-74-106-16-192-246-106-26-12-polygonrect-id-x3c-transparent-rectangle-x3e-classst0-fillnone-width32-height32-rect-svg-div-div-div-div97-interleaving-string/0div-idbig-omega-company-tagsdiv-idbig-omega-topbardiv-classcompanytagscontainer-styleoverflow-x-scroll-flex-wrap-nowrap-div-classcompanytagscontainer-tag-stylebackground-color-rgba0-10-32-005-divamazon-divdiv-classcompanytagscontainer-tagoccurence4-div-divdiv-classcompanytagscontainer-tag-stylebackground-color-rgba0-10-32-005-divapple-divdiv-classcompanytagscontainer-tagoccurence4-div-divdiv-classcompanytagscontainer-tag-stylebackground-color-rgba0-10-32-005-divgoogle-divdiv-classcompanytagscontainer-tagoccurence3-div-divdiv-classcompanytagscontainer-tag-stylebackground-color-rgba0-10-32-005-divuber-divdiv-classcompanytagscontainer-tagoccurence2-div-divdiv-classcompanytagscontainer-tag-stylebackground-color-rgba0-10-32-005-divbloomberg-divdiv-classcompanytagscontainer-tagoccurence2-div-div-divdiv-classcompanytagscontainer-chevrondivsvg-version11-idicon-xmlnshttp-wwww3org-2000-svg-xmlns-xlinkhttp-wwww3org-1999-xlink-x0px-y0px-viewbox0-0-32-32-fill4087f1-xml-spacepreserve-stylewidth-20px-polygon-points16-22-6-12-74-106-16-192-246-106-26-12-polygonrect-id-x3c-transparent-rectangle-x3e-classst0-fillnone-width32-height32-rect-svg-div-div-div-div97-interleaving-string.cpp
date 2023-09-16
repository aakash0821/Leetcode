class Solution {
public:
    
    bool Solve(string a, string b, string c, int i, int j, int k,vector<vector<vector<int>>>& dp)
    {
        
        if(i==a.length() && j==b.length())
        {
            return true;
        }
        else if(i==a.length())
        {
            //bool plc=true;
            int p=j;
            int q=k;
            while(p<b.length())
            {
                if(b[p]!=c[q]) return false;
                
                p++;
                q++;
            }
            return true;
            
        }
        else if(j==b.length())
        {
            int p=i;
            int q=k;
            while(p<a.length())
            {
                if(a[p]!=c[q]) return false;
                
                p++;
                q++;
            }
            return true;
        }
        
        
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        
        bool tk=false;
        
        if(c[k]==a[i] && c[k]==b[j])
        {
            tk=Solve(a, b, c, i+1, j, k+1, dp)|Solve(a, b, c, i, j+1, k+1,dp);
        }
        else if(c[k]==a[i])
        {
            tk=Solve(a, b, c, i+1, j, k+1,dp);
        }
        else if(c[k]==b[j])
        {
            tk=Solve(a, b, c, i, j+1, k+1,dp);
        }
        return dp[i][j][k]=tk;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int m=s1.length();
        int n=s2.length();
        int o=s3.length();
        if((m+n)>o || (m+n)<o) return false;
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(o, -1)));
        return Solve(s1, s2, s3, 0, 0, 0, dp);
       
    }
};