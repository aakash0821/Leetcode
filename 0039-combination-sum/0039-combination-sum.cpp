class Solution {
public:
    
    void Solve(vector<int>& arr, int target, int index, int size, vector<vector<int>>& output, vector<int>& ans)
    {
        if(index==size)
        {
            if(target==0)
            {
                output.push_back(ans);
            }
            return;
        }
        
//         if(target==0)
//         {
            
//         }
        
        if(target>=arr[index])
        {
            ans.push_back(arr[index]);
            Solve(arr, target-arr[index], index, size, output, ans);
            ans.pop_back();
                
        }
        Solve(arr, target, index+1, size, output, ans);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        vector<vector<int>> ans;
        int size=candidates.size();
        
        Solve(candidates, target, 0, size, ans, output);
        return ans;
    }
};