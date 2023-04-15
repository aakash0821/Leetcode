class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> vec;
        for(int i=0;i<nums.size();i++)
        {
            //vector<int> v;
            
            vec.push_back({nums[i], i});
        }
        vector<int> results;
        
        sort(vec.begin(), vec.end());
        int i=0;
        int j=nums.size()-1;
        bool flag=true;
        while(i<j && flag)
        {
            if((vec[i][0]+vec[j][0])==target)
            {
                results.push_back(vec[i][1]);
                results.push_back(vec[j][1]);
                flag=false;
            }
            else if((vec[i][0]+vec[j][0])>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return results;
    }
};