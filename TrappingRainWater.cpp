class Solution {
public:
    //MAIN CONCEPT: Array Pre Processing
    int trap(vector<int>& height) {
        
        int size=height.size();
        int left[size];
        int right[size];
        left[0]=height[0];
        right[size-1]=height[size-1];
        //Finding the largest element from the right
        for(int i=size-2;i>=0;i--)
        {
            if(height[i]>right[i+1])
            {
                right[i]=height[i];
            }
            else
            {
                right[i]=right[i+1];
            }
        }
        //Finding the Largest element from the Left
        for(int i=1;i<size;i++)
        {
            if(height[i]>left[i-1])
            {
                left[i]=height[i];
            }
            else
            {
                left[i]=left[i-1];
            }
        }
        
        int total=0;
        for(int i=0;i<size;i++)
        {
            total+=min(left[i], right[i])-height[i];
        }
        return total;
    }
};