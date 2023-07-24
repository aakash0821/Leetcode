//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	
	int lcs(int i, int j, string str, string ans, vector<vector<int>>& dp)
	{
	    if(i<0 || j<0) return 0;
	    if(dp[i][j]!=-1) return dp[i][j];
	    
	    if(str[i]==ans[j] && i!=j)
	    {
	        return dp[i][j]=1+lcs(i-1, j-1, str, ans, dp);
	    }
	    return dp[i][j]=max(lcs(i-1, j, str, ans, dp), lcs(i, j-1, str, ans, dp));
	}
		int LongestRepeatingSubsequence(string str){
		    string ans="";
		    for(int i=0;i<str.length();i++)
		    {
		        ans+=str[i];
		    }
		    
		    int n=str.length();
		    vector<vector<int>> dp(n+1 ,vector<int>(n+1, 0));
		    for(int i=1;i<=n;i++)
		    {
		        for(int j=1;j<=n;j++)
		        {
		            if(str[i-1]==ans[j-1] && i!=j) dp[i][j]=1+dp[i-1][j-1];
		            else
		            {
		                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		            }
		        }
		    }
		    return dp[n][n];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends