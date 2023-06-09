//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    
    int ans(vector<vector<int>>& dp, int i1, int i2, string s1, string s2)
    {
        if(i1==0 || i2==0)
        {
            return 0;
        }
        
        if(dp[i1][i2]!=-1)
        {
            return dp[i1][i2];
        }
        
        if(s1[i1-1]==s2[i2-1])
        {
            return dp[i1][i2]=1+ans(dp, i1-1, i2-1, s1, s2);
        }
        
        return dp[i1][i2]=max(ans(dp, i1-1, i2, s1, s2), ans(dp, i1, i2-1, s1, s2));
    }
    int lcs(int x, int y, string s1, string s2)
    {
        vector<vector<int>> dp(x+1, vector<int>(y+1, -1));
        for(int i=0;i<=x;i++) dp[i][0]=0;
        for(int i=0;i<=y;i++) dp[0][i]=0;
        
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        return dp[x][y];
        return ans(dp, x,y,s1,s2);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends