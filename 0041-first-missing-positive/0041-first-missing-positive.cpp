class Solution {
public:
    
    void swap(int *a, int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
        return;
    }
    
    
    int firstMissingPositive(vector<int>& nums) {
        
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            while(nums[i]>=1 && nums[i]<=size && nums[i]!=nums[nums[i]-1])
            {
                swap(&nums[i], &nums[nums[i]-1]);
            }
        }
        
        for(int i=0;i<size;i++)
        {
            if(nums[i]!=i+1)
            {
                return i+1;
            }
        }
        return size+1;
        /*sort(nums.begin(), nums.end());
        int expected=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==expected))
            {
                expected++;
            }
        }
        return expected;*/
    }
};