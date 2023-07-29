class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        if(k==0 || k==size) return;
        else
        {
            k=k%size;
            vector<int> output(size);
            int count=0;
            int i=0;
            while(count<size)
            {
                output[(k+i)%size]=nums[i];
                i++;
                count++;
            }
            
            for(int i=0;i<size;i++)
            {
                //output[i]=nums[i];
                nums[i]=output[i];
            }
            return;
        }
        
    }
};