//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	
	int  Solve(string str, int index,  int n, map<string, bool>& mp, vector<int>& dp)
	{
	    if(index>=n)
	    {
	        
	        return 1;
	    }
	    
	    if(dp[index]!=-1)
	    {
	        return dp[index];
	    }
	    
	   int tk=0;
	   int nt=0;
	   if(mp[str.substr(index, 1)])
	   {
	       tk=Solve(str, index+1, n, mp, dp);
	   }
	   
	   if(mp[str.substr(index, 2)] && index+1<n)
	   {
	       nt=Solve(str, index+2, n, mp, dp);
	   }
	    return dp[index]=(tk+nt)%(1000000000+7); 
	}
		int CountWays(string str){
		    map<string, bool> mp;
		    mp["1"]=true;    mp["11"]=true;  mp["12"]=true;  mp["13"]=true;  mp["14"]=true;  mp["15"]=true;
		    mp["2"]=true;    mp["16"]=true;  mp["17"]=true;  mp["18"]=true;  mp["19"]=true;  mp["20"]=true;
		    mp["3"]=true;    mp["21"]=true;  mp["22"]=true;  mp["23"]=true;  mp["24"]=true;  mp["25"]=true;
		    mp["4"]=true;    mp["26"]=true;
		    mp["5"]=true;
		    mp["6"]=true;
		    mp["7"]=true;
		    mp["8"]=true;
		    mp["9"]=true;
		    mp["10"]=true;
		    long long count=0;
		    int n=str.length();
		    vector<int> dp(n+1, -1);
		    return Solve(str, 0,  str.length(), mp, dp);
		    //return count%(1000000000+7);
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
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends