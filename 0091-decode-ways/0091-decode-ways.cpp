class Solution {
public:
    
    int solve(vector<int>& dp, string s, int i, int size, map<string,bool>& mp)
    {
        if(i>=size)
        {
            return 1;
        }
        
       
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int tk=0;
        int nt=0;
        
        if(mp[s.substr(i,1)])
        {
            tk=solve(dp, s, i+1, size, mp);
        }
        
        if(mp[s.substr(i, 2)] && i+1<size)
        {
            nt=solve(dp, s, i+2, size, mp);
        }
        
        
        
        return dp[i]=tk+nt;
    }
    int numDecodings(string s) {
        int size=s.length();
        vector<int> dp(size+1, -1);
        
        map<string, bool> mp;
        mp["1"]=true;mp["2"]=true;mp["3"]=true;mp["4"]=true;mp["5"]=true;mp["6"]=true;mp["7"]=true;mp["8"]=true;
        mp["9"]=true; mp["10"]=true;
        mp["11"]=true;mp["12"]=true;mp["13"]=true;mp["14"]=true;mp["15"]=true;mp["16"]=true;mp["17"]=true;mp["18"]=true;
        mp["19"]=true; mp["20"]=true;
        mp["21"]=true;mp["22"]=true;mp["23"]=true;mp["24"]=true;mp["25"]=true;mp["26"]=true;
        return solve(dp, s, 0, size, mp);
    }
};