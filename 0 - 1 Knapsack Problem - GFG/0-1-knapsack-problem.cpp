//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    /*int Solve(int W, int wt[], int val[], int n, int i, vector<vector<int>>& dp)
    {
        if(i==0)
        {
            if(W>=wt[0]) return val[0];
            return 0;
        }
        
        if(dp[i][W]!=-1)  return dp[i][W];
        int nt=0+Solve(W, wt, val, n, i-1, dp);
        int tk=0;
        if(W>=wt[i]) tk=val[i]+Solve(W-wt[i], wt, val, n, i-1, dp);
        
        return dp[i][W]=max(nt, tk);
    }*/
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp(n+1, vector<int>(W+1, 0));
        for(int w=0;w<=W;w++)
        {
            if(w>=wt[0]) dp[0][w]=val[0];
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                int nt=0+dp[i-1][j];
                int tk=0;
                if(j>=wt[i]) tk=val[i]+dp[i-1][j-wt[i]];
                
                dp[i][j]=max(tk, nt);
            }
        }
        return dp[n-1][W];
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends