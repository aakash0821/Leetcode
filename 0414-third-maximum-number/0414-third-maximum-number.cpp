class Solution {
public:
    
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int size=nums.size();
        
        set<int> s;
        for(int i=0;i<size;i++)
        {
            s.insert(nums[i]);
        }
        
        size=s.size();
        vector<int> vec(s.begin(), s.end());
        
       
        
        if(size<3)
        {
            return vec[size-1];
        }
        
        return vec[size-3];
    }
};