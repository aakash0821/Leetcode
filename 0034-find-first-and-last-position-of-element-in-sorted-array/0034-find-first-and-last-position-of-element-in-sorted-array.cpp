class Solution {
public:
    
    int first(vector<int>& nums, int target)
    {
        int s=0;
        int e=nums.size()-1;
        int mid=(s+e)/2;
        int ans=-1;
        while(s<=e)
        {
            mid=(s+e)/2;
            if(nums[mid]==target)
            {
                e=mid-1;
                ans=mid;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            
            mid=(s+e)/2;
        }
        return ans;
        
    }
    
    int last(vector<int>& nums, int target)
    {
        int s=0;
        int e=nums.size()-1;
        int mid=(s+e)/2;
        int ans=-1;
        while(s<=e)
        {
            ;
            if(nums[mid]==target)
            {
                s=mid+1;
                ans=mid;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            
            mid=(s+e)/2;
        }
        return ans;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec;
        int size=nums.size();
        if(size==0)
        {
            vec.push_back(-1);
            vec.push_back(-1);
            return vec;
        }
        else
        {
            int start=first(nums, target);
            int end=last(nums, target);
            vec.push_back(start);
            vec.push_back(end);
            return vec;
        }
    }
};