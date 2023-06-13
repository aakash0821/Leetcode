class Solution {
public:
    
    bool solve(vector<int>& nums, int target, int index, int size, vector<vector<bool>>& dp)
    {
        if(target==0)
        {
            return true;
        }
        
        if(index>=size)
        {
            return false;
        }
        
        if(dp[target][index]!=false)
        {
            return dp[target][index];
        }
        
        bool tk=false;
        if(target>=nums[index])
        {
            tk=solve(nums, target-nums[index], index+1, size, dp);
        }
        bool nt=solve(nums, target, index+1, size, dp);
        return dp[target][index]=tk|nt;
    }
    bool canPartition(vector<int>& nums) {
        
         int size= nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        
        if(sum%2!=0 || size==1)
        {
            return false;
        }
       
        vector<vector<bool>> dp(size+1, vector<bool>(sum/2+1, false));
       for(int i=0;i<size;i++)
       {
           dp[i][0]=true;
       }
        
        //dp[0][nums[0]]=true;
        int target=sum/2;
        
        for(int i=1;i<size;i++)
        {
            for(int tar=0;tar<=sum/2;tar++)
            {
                bool nt=dp[i-1][tar];
                bool tk=false;
                if(tar>=nums[i])
                {
                    tk=dp[i-1][tar-nums[i]];
                }
                dp[i][tar]=tk|nt;
                
            }
        }
        return dp[size-1][target];
        
        
    }
};