//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int Solve(int i, int j, int N, int arr[],vector<vector<int>>& dp)
{
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    
    
    int mini=1e9;
    for(int k=i;k<=j-1;k++)
    {
        int steps=arr[i-1]*arr[k]*arr[j]+Solve(i, k, N,arr, dp)+Solve(k+1, j, N, arr, dp);
        mini=min(steps, mini);
    }
    return dp[i][j]=mini;
}
    int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N+1 ,vector<int>(N+1, -1));
        return Solve(1,N-1, N, arr, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends