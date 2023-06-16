class Solution {
public:
    int count(vector<int>& nums, int target, int size, vector<int>& dp)
    {
        if(target==0)
        {
            return 1;
        }
        
        if(target<0)
        {
            return 0;
        }
        
        if(dp[target]!=-1)
        {
            return dp[target];
        }
        
        int tk=0;
      
        for(int i=0;i<size;i++)
        {
            if(nums[i]>target)
            {
                break;
            }
            tk+=count(nums, target-nums[i], size, dp);
        }
        return dp[target]=tk;
    }
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int size=nums.size();
        vector<int> dp(target+1, -1);
        return count(nums, target, size, dp);
    }
};