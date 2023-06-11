class Solution {
public:
    
    int ans(vector<int>& nums, int size, int index, vector<int>& dp)
    {
        if(index>=size)
        {
            return 0;
        }
        
        if(dp[index]!=-1)
        {
            return dp[index];
        }
        
        int take=nums[index]+ans(nums, size, index+2, dp);
        int nt=0+ans(nums, size, index+1, dp);
        dp[index]=max(take,  nt);
        return dp[index];
    }
    int rob(vector<int>& nums) {
        int size=nums.size();
        vector<int> dp(size+1, -1);
        return ans(nums, size,0, dp);
    }
};