//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int Ans(int n, int m, vector<vector<int>>& M, vector<vector<int>>& dp,int i, int j)
    {
        if(i<0) return 0;
        if(i>=n) return 0;
        if(j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=M[i][j]+max(Ans(n, m, M, dp, i-1, j+1), max(Ans(n, m, M, dp, i+1, j+1), Ans(n, m, M, dp, i, j+1)));
        
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        int maxi=-1e9;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi, Ans(n, m, M, dp, i, 0));
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends