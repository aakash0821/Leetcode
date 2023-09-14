class Solution {
public:
    
    vector<int> vec;
    vector<int> shuff;
    int size;
    void swap(int *a, int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
        return;
    }
    int GetIndex(vector<int>& vec)
    {
        int index=-1;
        for(int i=vec.size()-2;i>=0;i--)
        {
            if(vec[i+1]>=vec[i])
            {
                index=i;
                break;
            }
        }
        return index;
    }
    
    void nextPermute(vector<int>& vec)
    {
        int ind=GetIndex(vec);
        if(ind==-1) 
        {
            reverse(vec.begin(), vec.end());
            return;
        }
        else
        {
            for(int i=vec.size()-1;i>=0;i--)
            {
                if(vec[i]>vec[ind])
                {
                    swap(&vec[i], &vec[ind]);
                    reverse(vec.begin()+ind+1, vec.end());
                    break;
                }
            }
            return;
        }
    }
    
    Solution(vector<int>& nums) {
        size=nums.size();
        vec=nums;
        shuff=nums;
    }
    
    vector<int> reset() {
        return shuff;
    }
    
    vector<int> shuffle() {
      
        nextPermute(vec);
        return vec;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */