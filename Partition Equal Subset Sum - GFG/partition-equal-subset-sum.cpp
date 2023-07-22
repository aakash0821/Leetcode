//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool Solve(int N, int arr[], int i, int sum, vector<vector<int>>& dp)
    {
        if(sum==0) return true;
        if(i==0)  return (sum==arr[0]);
        if(dp[i][sum]!=-1) return dp[i][sum];
        
        bool tk=false;
        bool nt=Solve(N, arr, i-1, sum, dp);
        if(sum>=arr[i]) tk=Solve(N, arr, i-1, sum-arr[i], dp);
        return dp[i][sum]=tk|nt;
        
    }
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++) sum+=arr[i];
        if(sum%2!=0) return 0;
        else
        {
            vector<vector<int>> dp(N+1, vector<int>(sum/2+1, -1));
            if(Solve(N, arr, N-1, sum/2, dp)) return 1;
            else return 0;
            
        }
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
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends