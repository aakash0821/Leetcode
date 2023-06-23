class Solution {
public:
    
    int findIndex(vector<int>& nums, int n)
    {
        //int j=n-2;
        for(int j=n-2;j>=0;j--)
        {
            if(nums[j+1]>nums[j])
            {
                return j;
                
            }
        }
        return -1;
    }
    
    void permute(vector<int>& nums)
    {
        int n=nums.size();
        int pivotIndex=findIndex(nums, n);
        
        if(pivotIndex==-1)
        {
            reverse(nums.begin(), nums.end());
            return ;
        }
        
        for(int i=n-1;i>pivotIndex;i--)
        {
            if(nums[i]>nums[pivotIndex])
            {
                swap(nums[i], nums[pivotIndex]);
                reverse(nums.begin()+pivotIndex+1,nums.end());
                return;
            }
        }
        
    }
    void nextPermutation(vector<int>& nums) {
        permute(nums);
        return;
    }
};