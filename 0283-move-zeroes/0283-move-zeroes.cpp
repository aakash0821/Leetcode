class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> vec;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
            else
            {
                vec.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0;i<vec.size();i++)
        {
            nums.push_back(vec[i]);
        }
        
        for(int j=0;j<count;j++)
        {
            nums.push_back(0);
        }
        return ;
    }
};