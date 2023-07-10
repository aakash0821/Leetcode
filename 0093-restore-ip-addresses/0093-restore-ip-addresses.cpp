class Solution {
public:
    
    void Solve(string s, int i, int par, string ans, vector<string>& res)
    {
        if(i==s.length() && par==4)
        {
            res.push_back(ans.substr(0, ans.length()-1));
            return;
        }
        
        if(i==s.length() || par==4)
        {
            return;
        }
        
        Solve(s, i+1, par+1, ans+s[i]+".", res);
        if(i+2<=s.length() && isValid(s.substr(i, 2))) Solve(s, i+2, par+1, ans+s.substr(i, 2)+".", res);
        if(i+3<=s.length() && isValid(s.substr(i, 3))) Solve(s, i+3, par+1, ans+s.substr(i, 3)+".", res);
        return;
    }
   
    
    bool isValid(string s)
    {
        if(s[0]=='0') return false;
        int temp=stoi(s);
        return temp<=255;
    }
    vector<string> restoreIpAddresses(string s) {
       string ans="";
        vector<string> res;
        Solve(s, 0, 0, ans, res);
        return res;
    }
};