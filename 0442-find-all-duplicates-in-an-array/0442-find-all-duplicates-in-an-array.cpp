class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // map<int, int> mp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]++;
        // }
        
        vector<int> output;
        // for(auto it: mp)
        // {
        //     if(it.second>=2)
        //     {
        //         output.push_back(it.first);
        //     }
        // }
        
        //AS ELEMENTS ARE IN 1-8 for size of 8 SO WE CAN MAKE THE FOLLOWING ARRANGEMENT 
        //ALL ARE POSITIVE NUMBERS
        for(int n:nums)
        {
            n=abs(n);
            if(nums[n-1]>0) nums[n-1]*=-1;
            else output.push_back(n);
        }
        return output;
    }
};