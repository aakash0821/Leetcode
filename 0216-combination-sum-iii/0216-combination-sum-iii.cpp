class Solution {
public:
    void solve(vector<vector<int>>& vec, vector<int>& level, int tar, int k, int ind, int n)
    {
        if(tar==0)
        {
            if(k==0)
            {
                vec.push_back(level);
                return;
            }
            return;
        }
        
        if(k==0)
        {
            if(tar==0)
            {
                vec.push_back(level);
                
            }
            return;
        }
        
        if(ind>n)
        {
            return;
        }
        
        
       
        
            if(tar>=ind && k>=1 && ind<=9)
            {
                level.push_back(ind);
                solve(vec, level, tar-ind, k-1, ind+1, n);
                level.pop_back();
            }
            solve(vec, level, tar, k, ind+1, n);
            
        
        
        
        
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> vec;
        vector<int> level;
        solve(vec, level, n, k, 1, n);
        return vec;
    }
};