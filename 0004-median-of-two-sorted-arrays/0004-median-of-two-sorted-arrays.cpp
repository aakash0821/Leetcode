class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int i=0;
        int j=0;
        vector<int> v;
        while(i<m && j<n)
        {
            if(nums1[i]>nums2[j])
            {
                v.push_back(nums2[j]);
                j++;
            }
            else
            {
                 v.push_back(nums1[i]);
                 i++;
            }
        }
        while(i<m)
        {
            v.push_back(nums1[i]);
            i++;
        }
        
        while(j<n)
        {
            v.push_back(nums2[j]);
            j++;
        }
        
            
        double result;
        if((m+n)%2!=0)
        {
            result=v[(m+n-1)/2];
            return result;
        }
        else
        {
            result=(v[(m+n)/2]+v[(m+n-2)/2]);
            return(result/2);
        }
    }
};