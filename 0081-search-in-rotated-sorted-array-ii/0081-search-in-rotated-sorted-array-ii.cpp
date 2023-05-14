class Solution {
public:
    
    bool Rotated(vector<int> vec, int target, int low, int high)
    {
        if(low>high)
        {
            return false;
        }
        
        int mid=(low+high)/2;
        if(vec[mid]==target)
        {
            return true;
        }
        
        bool left=Rotated(vec, target, low, mid-1);
        bool right=Rotated(vec, target, mid+1, high);
        return(left||right);
        
    }

    bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        bool finals=Rotated(nums, target, low, high);
        return finals;
    }
};