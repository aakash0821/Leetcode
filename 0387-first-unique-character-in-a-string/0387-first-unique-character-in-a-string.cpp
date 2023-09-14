class Solution {
public:
    int firstUniqChar(string s) {
        
        if(s.length()==1) return 0;
        map<char, int> mp;
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]]==0)
            {
                mp[s[i]]=1;
            }
            else
            {
                mp[s[i]]++;
            }
        }
        
       for(int i=0;i<s.length();i++)
       {
           if(mp[s[i]]==1)
           {
               return i;
           }
       }
        
        return -1;
        
    }
};