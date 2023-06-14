class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0]!=0)
        {
            return 0;
        }
        
        int check=nums[0];
        
        int size=nums.size();
        for(int i=1;i<size;i++)
        {
            if(nums[i]!=check+1)
            {
                return check+1;
            }
            check=nums[i];
        }
        return check+1;
        
    }
};