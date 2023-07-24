//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	
	int Solve(int arr[], int n, int i, int prev, vector<vector<int>>& dp)
	{
	    if(i==n) return 0;
	    if(dp[i][prev+1]!=-1) return dp[i][prev+1];
	    int nt=0+Solve(arr, n, i+1, prev, dp);
	    int tk=0;
	    if(prev==-1 || arr[i]>arr[prev])
	    {
	        tk=max(0+Solve(arr, n, i+1, prev, dp), arr[i]+Solve(arr, n, i+1, i, dp));
	    }
	    return dp[i][prev+1]=max(tk, nt);
	}
	int maxSumIS(int arr[], int n)  
	{  
	    vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
	    return Solve(arr, n, 0, -1, dp);
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends