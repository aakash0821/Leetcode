class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        
        vector<int> left(size+1);
        vector<int> right(size+1);
        int lp=1;
        for(int i=0;i<size;i++)
        {
            lp=lp*nums[i];
            left[i]=lp;
        }
        
        int rp=1;
        for(int j=size-1;j>=0;j--)
        {
            rp=rp*nums[j];
            right[j]=rp;
        }
        
        vector<int> ans(size);
        ans[0]=right[1];
        ans[size-1]=left[size-2];
        
        
        for(int i=1;i<size-1;i++)
        {
            ans[i]=left[i-1]*right[i+1];
        }
        return ans;
    }
};