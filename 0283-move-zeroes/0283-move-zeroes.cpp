class Solution {
public:
    
    void swap(int *a, int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;return;
    }
    void moveZeroes(vector<int>& nums) {
//         vector<int> vec;
//         int count=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]==0)
//             {
//                 count++;
//             }
//             else
//             {
//                 vec.push_back(nums[i]);
//             }
//         }
//         nums.clear();
//         for(int i=0;i<vec.size();i++)
//         {
//             nums.push_back(vec[i]);
//         }
        
//         for(int j=0;j<count;j++)
//         {
//             nums.push_back(0);
//         }
//         return ;
        
    
        
        int low=-1;
        int i=0;
        int size=nums.size();
        if(size==1) return;
        while(i<size)
        {
            if(nums[i]==0 && low==-1)
            {
                low=i;
                i++;
            
            }
            else if(nums[i]==0) i++;
            else
            {
                if(low!=-1)
                {
                    swap(&nums[i], &nums[low]);
                    low++;
                }
                i++;
            }
        }
        return;
    }
};