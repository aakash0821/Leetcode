class Solution {
public:
   
    bool findSubarrays(vector<int>& nums) {
        set<int> s;
        int size=nums.size();
        for(int i=0;i<nums.size()-1;i++)
        {
            s.insert(nums[i]+nums[i+1]);
        }
        
        if(s.size()==size-1)
        {
            return false;
        }
        return true;
       
    
    }
};