class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int low=m-n-1;
        int high=0;
        
        while(low>=0 && high<n)
        {
            if(nums1[low]>nums2[high])
            {
                swap(nums1[low], nums2[high]);
                low--;
                high++;
            }
            else
            {
                break;
            }
        }
        //sort(nums1.begin(), nums1.end());
         sort(nums2.begin(), nums2.end());
        for(int i=m;i<m+n;i++)
        {
            nums1[i]=nums2[i-m];
        }
        sort(nums1.begin(), nums1.end());
        return;
    }
};