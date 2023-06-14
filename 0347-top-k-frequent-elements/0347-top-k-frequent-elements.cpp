class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //vector<pair<int, int>> vec;
        map<int, int> mp;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            mp[nums[i]]++;
            
        }
        
        priority_queue<int> pq;
        
        map<int, vector<int>> mpp;
        map<int,bool> mppp;
        for(auto it: mp)
        {
            if(!mppp[it.second])
            {
                mppp[it.second]=true;
                pq.push(it.second);
            }
            mpp[it.second].push_back(it.first);
           
            
        }
         vector<int> vec;
            
            int i=0;
            while(i<k)
            {
                 int top=pq.top();
                 pq.pop();
                 int size=mpp[top].size();
                i+=size;
                for(int j=0;j<size;j++)
                {
                    vec.push_back(mpp[top][j]);
                }
                
            }
        return vec;
        
    }
};