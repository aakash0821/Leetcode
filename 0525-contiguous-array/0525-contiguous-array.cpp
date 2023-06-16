class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                nums[i]=-1;
            }
        }
        map<int, int> mp;
        map<int, bool> mpp;
        int sum=0;
        int length=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            if(sum==0)
            {
                length=max(length, i+1);
            }
            if(mpp[sum]==false)
            {
                mpp[sum]=true;
                mp[sum]=i;
            }
            else
            {
                length=max(length, i-mp[sum]);
            }
        }
        return length;
    }
};