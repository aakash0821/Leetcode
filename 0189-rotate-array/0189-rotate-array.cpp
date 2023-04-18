class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        if(k==0 || k==size)
        {
            return ;
        }
        
        else
        {
            k=k%size;
            int index=size-k;
            vector<int> output;
            for(int i=index;i<size;i++)
            {
                output.push_back(nums[i]);
            }
            
            for(int i=0;i<index;i++)
            {
                output.push_back(nums[i]);
            }
            //return output;
            
            for(int j=0;j<size;j++)
            {
                nums[j]=output[j];
                
            }
            return;
            
        }
    }
};