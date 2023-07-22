//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long int Solve(int A[], int N, int sum, int i, vector<vector<long long int>>& dp)
  {
     
      
      if(i==0)
      {
          if(sum%A[0]==0)
          {
              return 1;
          }
          return 0;
      }
      
      if(dp[i][sum]!=-1) return dp[i][sum];
      
      long long int tk=0;
      long long int nt=Solve(A, N, sum, i-1, dp);
      if(sum>=A[i]) tk=Solve(A, N, sum-A[i], i, dp);
      
      return dp[i][sum]=(tk+nt);
      
  }
    long long int count(int coins[], int N, int sum) {

        vector<vector<long long int>> dp(N+1, vector<long long int>(sum+1, 0));
        
        for(int T=0;T<=sum;T++)
        {
            if(T%coins[0]==0) dp[0][T]=1;
        }
        
        
        
           for(int i=1;i<N;i++)
           {
               for(int T=0;T<=sum;T++)
               {
                   long long int tk=0;
                   long long int nt=0;
                   nt=dp[i-1][T];
                   if(T>=coins[i]) tk=dp[i][T-coins[i]];
                   dp[i][T]=tk+nt;
               }
               
           }
           return dp[N-1][sum];
        
        
        //return Solve(coins, N, sum, N-1, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends