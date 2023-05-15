class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        map<int,bool> mp2;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
            
        }
        
        vector<int> ans;
        for(int i=0;i<nums2.size();i++)
        {
            if(mp[nums2[i]]>0 && !mp2[nums2[i]])
            {
                ans.push_back(nums2[i]);
                mp2[nums2[i]]=true;
                
            }
        }
        
        return ans;
    }
};