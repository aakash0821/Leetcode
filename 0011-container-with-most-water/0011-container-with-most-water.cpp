class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int size=height.size();
        if(size>=2)
        {
            int left[size];
            int right[size];
            left[0]=height[0];
            right[size-1]=height[size-1];
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
            int m=0;
            int n=size-1;
            int max=-999999;
            int current;
            while(m<n)
            {
                current=min(left[m],right[n])*(n-m);
                if(left[m]<right[n])
                {
                    m++;
                }
                else
                {
                    n--;
                }

                if(current>max)
                {
                    max=current;
                }
            }
            return max;
        }
        else
        {
            return 0;
        }
    }
};