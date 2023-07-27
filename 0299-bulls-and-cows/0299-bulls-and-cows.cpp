class Solution {
public:
    string getHint(string s, string g) {
        map<char, int> mp;
        map<char, bool> mpp;
        for(int i=0;i<s.length();i++)
        {
            if(mpp[s[i]]) mp[s[i]]+=1;
            else
            {
                mpp[s[i]]=true;
                mp[s[i]]=1;
            }
        }
        
        int bulls=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==g[i])
            {
                bulls++;
                mp[s[i]]-=1;
            }
        }
        
        int cows=0;
        for(int i=0;i<g.size();i++)
        {
            if(s[i]==g[i]) continue;
            else
            {
                if(mpp[g[i]])
                {
                    if(mp[g[i]]>=1)
                    {
                        cows++;
                        mp[g[i]]-=1;
                    }
                }
            }
        }
        
        string ans="";
        ans+=to_string(bulls);
        ans+="A"+to_string(cows)+"B";
        return ans;
        
    }
};